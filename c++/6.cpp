#include <iostream>

int sum_number(int n){
    int res = 0;
    for(int i=1;i<=n;i++){
        res += i*i;
    }
    return res;
}

int square_num(int n){
    int res = 0;
    for(int i=1;i<=n;i++){
        res+=i;
    }
    return res*res;
}

int main(){
    std::cout<<square_num(100)-sum_number(100)<<std::endl;
}