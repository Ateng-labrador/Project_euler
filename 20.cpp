#include <iostream>

long long factorial(int n){
    if(n <=1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}

int main(){
    long long hasil = 0;
    for(int i=1;i<=10;i++){
        hasil +=factorial(10);
    }
    std::cout<<hasil<<std::endl;
}