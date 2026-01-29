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

feast power_int(feast &res){
    feast resulst = 0;
    while (res){
        int reminder = (res % 10);
        res /= 10;
        resulst += reminder;
    }
    return resulst;
}

feast power_init_1(const feast&res){
    feast result = 0;
    std::string c = std::to_string(res);
    for(char x:c){
        feast digit = x - '0';
        result += digit;
    }
    return result;
}

int main(){
    feast x = power(15);
    std::cout<<power_int(x)<<std::endl;
}