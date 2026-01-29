#include <vector>
#include <iostream>

std::vector<std::vector<int>> pythagoras(int n){
    std::vector<std::vector<int>> ans;

    for(int a=1;a<=n;a++){
        for(int b=a;b<=n;b++){
            for(int c=b;c<=n;c++){
                if(a*a + b*b == c*c){
                    if(a+b+c == 1000){
                        ans.push_back({a,b,c});
                    }
                }
            }
        }
    }
    return ans;
}

// void print(std::vector<std::vector<int>>&ans){
//     for(int i=0;i<ans.size();i++){
//         for(int j=0;j<3;j++){
//             std::cout<<ans[i][j]<<" ";
//         }
//         std::cout<<std::endl;
//     }
// }

int multiply(std::vector<std::vector<int>>&ans){
    int result = 1;
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<3;j++){
            result *= ans[i][j];
        }
    }
    return result;
}

int main(){
    auto c = pythagoras(1000);
    std::cout<<multiply(c)<<std::endl;
}