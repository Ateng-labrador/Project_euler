#include <iostream>
#include <vector>
#include <map>
using ll = long long;

std::map<int,std::vector<ll>> Fibonanci(ll n){
    std::map<int,std::vector<ll>>Fib_list = {
        {1,{1}},
        {2,{1}}
    };
    // for(int i=2;i<n;i++){
    //     ll x = Fib_list[i-1]+Fib_list[i-2];
    for(int i=3;i<=n;++i){
        ll x = Fib_list[i-1][0]+Fib_list[i-2][0];
        Fib_list.insert({i,{x}});
    }
    return Fib_list;
}

void print(std::map<int,std::vector<ll>>&Fib_list){
    for(const auto &index:Fib_list){
        std::cout<<index.first<<" ";
        for(int i=0;i<index.second.size();++i){
            std::cout<<index.second[i];
        }
        std::cout<<std::endl;
    }
}

int main(){
    std::map<int,std::vector<ll>> A = Fibonanci(3);
    print(A);
}