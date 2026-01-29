#include <iostream>
#include <map>
#include <vector>
#include <cmath>
#include <algorithm>
using turner = long long;

std::map<int,int> faktor_prima_power(int x){
    std::map<int,int> res;
    for(int i=2;i<=sqrt(x);i++){
        while(x % i == 0){
            res[i]++;
            x /= i;
        }
    }
    if(x > 1){
        res[x]++;
    }
    return res;
}

std::map<int,int> faktor_cout(int y){
    std::map<int,int> res;

    for(int i=2;i<=y;i++){
        std::map<int,int> f = faktor_prima_power(i);
        for(auto &[prima,power]:f){
            res[prima] = std::max(res[prima],power);
        }
    }
    return res;
}

turner cout_kpk(const std::map<int,int>&res){
    turner kpk = 1;
    for(auto &[prima,power]:res){
        for(int i=0;i<power;i++){
            kpk *= prima;
        }
    }
    return kpk;
}

int main(){
    std::cout<<cout_kpk(faktor_cout(20))<<std::endl;
}

/**
 * if(n % i == 0){
            res[i]++;
            n /= i;
        }
 * ini hanya akan mengecek n dengan i satu kali
 /**
  * kalo diganti while maka akana terus perulaangan
  * 
  */
 

// std::vector<int> faktor_prima(int n){
//     std::vector<int> res;
//     for(int i=2;i<n;i++){
//         if(n % i == 0){
//             res.push_back(i);
//             n /= i;
//         }
//     }
//     return res;
// }

// std::vector<int> faktor_prima(int n){
//     std::vector<int> res;
//     for(int i=2;i<=sqrt(n);i++){
//         while(n%i==0){
//             res.push_back(i);
//             n/=i;
//         }
//     }
//     // jika n belum jadi 1 berarti n adalah bilangan prima itu sendri
//     if(n > 1){
//         res.push_back(n);
//     }
//     return res;
// }

