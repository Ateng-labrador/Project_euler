#include <iostream>
#include <vector>
using ll = long long;

ll Triangle(ll n){
    return n*(n+1)/2;
}

ll Pentagona(ll n){
    return n*(3*n-1)/2;
}

ll hexagonal(ll n){
    return n*(2*n-1);
}

std::vector<ll> res(ll i,ll j,ll k){
    std::vector<ll>res;
    ll t,p,h;
    t = Triangle(i);
    p = Pentagona(j);
    h = hexagonal(k);

    while(t!=p || t!=h){
        if(t<h && t<p){
            ++i;
            t = Triangle(i);
        }
        else if(p < h){
            ++j;
            p = Pentagona(j);
        }
        else{
            ++k;
            h = hexagonal(k);
        }
    }
    res.push_back(t);
    return res;
}

void print(const std::vector<ll>&res){
    for(auto x:res){
        std::cout<<x<<std::endl;
    }
}

int main(){
    std::vector<ll>A=res(286,166,144);
    print(A);
}