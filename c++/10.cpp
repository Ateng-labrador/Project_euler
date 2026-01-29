#include <iostream>
#include <cmath>
#include <vector>

/**
 * Angka Prima adalah angka yang habsi dibagi 1 dan dirinya sendiri
 * Jika suatu angka P adalah prima,maka semua kelipatan dari P(mulai dari p^2) pasti bukan prima
 * jadi kelipatan dari angka prima bisa di buang
 * 
 * step-step Algoritma
 * buat boolean sepanjang n+1 dan isinya true
 * Semua bilangan komposit(bukan prima) pasti punya faktor kecil yang =< sqrt(n)
 * jika newboolean[i] == true makan untuk kelipatanya akan bersipat false
 * 
 */

/**
 * 0 1 tidak dimasukkan karna bukan angak prima
 */

std::vector<int> prime_number(int n){
    std::vector<bool> newboolean(n+1,true);
    for(int i=2;i<=sqrt(n);i++){
        if(newboolean[i] == true){
            for(int j=i*i;j<=n;j+=i){
                newboolean[j] = false;
            }
        }
    }
    std::vector<int> res;
    for(int p=2;p<=n;p++){
        if(newboolean[p]){
            res.push_back(p);
        }
    }
    return res;
}

long long sum(std::vector<int>&res){
    long long result = 0;
    for(auto x:res){
        result += x;
    }
    return result;
}

// void print(std::vector<int>&res){
//     for(auto x:res){
//         std::cout<<x<<std::endl;
//     }
// }

int main(){
    auto c = prime_number(2000000-1);
    std::cout<<sum(c)<<std::endl;
}