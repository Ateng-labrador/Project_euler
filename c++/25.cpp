#include <iostream>
#include <vector>
#include <map>
#include <string>
using ll = long long;


std::map<int,std::vector<ll>> Fibonanci(ll n){
    std::map<int,std::vector<ll>>Fib_list = {
        {1,{1}},
        {2,{1}}
    };
    // ll cout = 3;
    // for(int i=3;i<=cout;++i){
    //     ll x = Fib_list[i-1][0]+Fib_list[i-2][0];
    //     std::string A = std::to_string(x);
    //     if(A.size() >= n){
    //         Fib_list.insert({i,{x}});
    //     }
    // }
    // cout++;

    ll cout = 3;
    while (true)
    {
        ll x = Fib_list[cout-1][0]+Fib_list[cout-2][0];
        std::string A = std::to_string(x);
        Fib_list[cout] = {x};
        if(A.size()>=n){
            break;
        }
        ++cout;
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

// for(int i=2;i<n;i++){
    // //     ll x = Fib_list[i-1]+Fib_list[i-2];