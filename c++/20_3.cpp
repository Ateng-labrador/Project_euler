#include <iostream>
#include <string>

void product(std::string& str,int N){
    int reminder = 0;
    for(int i=0;i<str.size();i++){
        int temp = (str[str.size()-1-i]-'0')*N+reminder;
        str[str.size()-1-i] = char(temp%10 + '0');
        reminder = temp/10;
    }
    if(reminder){
        str = std::to_string(reminder)+str;
    }
}

std::string factorial(int N){
    std::string fac = "1";
    int counter = 1;
    while(counter < N){
        counter++;
        product(fac,counter);
    }
    return fac;
}

int sum_string(std::string str){
    int sum = 0;
    for(char c:str){
        sum += (c - '0');
    }
    return sum;
}

int main(){
    std::cout<<factorial(5)<<std::endl;
    return 0;
}