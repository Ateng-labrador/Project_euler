#include <iostream>
#include <cmath>
#include <vector>

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