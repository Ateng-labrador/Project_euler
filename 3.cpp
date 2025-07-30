#include <iostream>
#include <vector>

std::vector<long long> prime_factor(long long n){
    std::vector<long long> result;
    for(int i=2;i<100000;i++){
        if(n % i == 0){
            result.push_back(i);
            n /= i;
        }
    }
    return result;
}

void print(std::vector<long long>&result){
    for(auto x:result){
        std::cout<<x<<std::endl;
    }
}

int main(){
    auto c = prime_factor(600851475143);
    print(c);
}