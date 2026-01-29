#include <iostream>
#include <vector>
using turner = long long;

turner Triangle(turner n){
    return n*(n+1)/2;
}

turner pentagona(turner n){
    return n*(3*n-1)/2;
}

turner hexagonal(turner n){
    return n*(2*n-1);
}

// std::vector<turner> size(turner i,turner j,turner k){
//     std::vector<turner> res;
//     turner t , p  , h ;
//     t = Triangle(i);
//     p = pentagona(j);
//     h = hexagonal(k);

//     while(t != p || t != h){
//         if(t < h && t < p){
//             ++i;
//             t = Triangle(i);
//         }
//         else if(p < h){
//             ++j;
//             p = pentagona(j);
//         }
//         else{
//             ++k;
//             h = hexagonal(k);
//         }
//     }
//     res.push_back(t);
//     return res;
// }

// void result(const std::vector<turner>&res){
//     for(auto x:res){
//         std::cout<<x<<std::endl;
//     }
// }

int main(){
    turner i , j , k ,t , p , h;
    i = 286;
    j = 166;
    k = 144;

    t = Triangle(i);
    p = pentagona(j);
    h = hexagonal(k);

    while(t != p || t != h){
        if(t<h && t<p){
            ++i;
            t = Triangle(i);
        }
        else if(p < h){
            ++j;
            p = pentagona(j);
        }
        else{
            ++k;
            h = hexagonal(k);
        }
    }
    std::cout<<t<<std::endl;
}