#include <iostream>
#include <vector>
using turner = long long;

turner Triangle(int n){
    turner Tri = n*(n+1)/2;
    return Tri;
}

turner hexagonal(int n){
    turner H = n*(3*n-1)/2;
    return H;
}

turner pentagona(int n){
    turner P = n*(2*n-1);
    return P;
}

std::vector<turner> size(int n){
    std::vector<turner> res;
    for(int i=1;i<=n;i++){
        turner t = Triangle(i);
        for(int j=i;j<=n;j++){
            turner h = hexagonal(j);
            if(t != h){
                continue;
            }
            for(int z=j;z<=n;z++){
                turner p = pentagona(z);
                if(h==p){
                    res.push_back(t);
                }
            }
        }
    }
    return res;
}


int main(){

}