#include <iostream>
#include <vector>
#include <cmath>

// std::vector<int> prime_number(int n){
//     std::vector<bool> is_prime(n+1,true);
//     for(int i=2;i<=sqrt(n);i++){
//         if(is_prime[i]==true){
//             for(int j=i*i;j<=n;j+=i){
//                 is_prime[j] = false;
//             }
//         }
//     }
//     std::vector<int> res;
//     for(int p=2;p<=10001;p++){
//         if(is_prime[p]){
//             res.push_back(p);
//         }
//     }
//     return res;
// }

// void print(std::vector<int>&res){
//     for(auto x:res){
//         std::cout<<x<<std::endl;
//     }
// }

// while (counter<10001){
    //     if(is_prime(x)){
    //         counter++;
    //     }
    //     x+=2;
    // }

// 104743

bool is_prime(int n){
    if(n<2){
        return false;
    }
    for(int i=2;i<=sqrt(n);i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int list_number(int y){
    int x = 1;
    int count = 0;
    for(int i=0;count<y;x++){
        if(is_prime(x)){
            count++;
        }
    }
    return x-2;
}


int main(){
    std::cout<<list_number(10001)<<std::endl;
    return 0;
}