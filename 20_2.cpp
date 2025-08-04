#include <iostream>
#include <vector>
#include <string>
#define MAX 500
using turner = long long;

int multiply(int x,std::vector<int>&res,int res_size);

std::vector<int> factorial(int n){
    std::vector<int>res(MAX);
    
    res[0] = 1;
    int res_size = 1;

    for(int x=2;x<=n;x++){
        res_size = multiply(x,res,res_size);
    }
    return std::vector<int>(res.begin(),res.begin()+res_size);
}

turner sum_factorial(const std::vector<int>&res){
    turner result = 0;
    for(auto x:res){
        result += x;
    }
    return result;
}


int multiply(int x,std::vector<int>&res,int res_size){
    int carry = 0;
    for(int i=0;i<res_size;i++){
        int pord = res[i]*x+carry;
        res[i] = pord % 10;
        carry = pord / 10;
    }
    while(carry){
        res[res_size] = carry % 10;
        carry /= 10;
        res_size++;
    }
    return res_size;
}

int main(){
    std::vector<int>A = factorial(100);
    std::cout<<sum_factorial(A)<<std::endl;
    
}


// void print(const std::vector<int>&res){
//     for(int i=res.size()-1;i>=0;i--){
//         std::cout<<res[i];
//     }
// }
