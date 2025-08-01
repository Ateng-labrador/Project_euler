#include <iostream>
#include <cmath>
#include <string>
using feast = unsigned long long;

feast power(int n){
    feast res = 1;
    for(int i=1;i<=n;i++){
        res *= 2;
    }
    return res;
}

feast power_int(const feast &res){
    feast resulst = 0;
    std::string x = std::to_string(res);
    for(char c:x){
        feast digit = c - '0';
        resulst += digit;
    }
    return resulst;
}

int main(){
    std::cout<<power_int(power(1000))<<std::endl;
}