#include <iostream>
#include <vector>

// int fibonancco(int n){
//     if(n<= 1){
//         return n;
//     }
//     return fibonancco(n-1)+fibonancco(n-2);
// }

std::vector<long long> fibonancci(long long n){
    std::vector<long long> result = {1,2};
    // for(int i=2;i<=n;i++){
    //     result.push_back(result[i-1]+result[i-2]);
    // }
    for(int i =0;i<n;++i){
        long long next = result[result.size()-1]+result[result.size()-2];
        if(next > n) break;
        result.push_back(next);
    }
    return result;
}

std::vector<long long> even_fibonanci(const std::vector<long long>&result){
    std::vector<long long>even_fibonanci;
    for(auto x:result){
        if(x%2==0){
            even_fibonanci.push_back(x);
        }
    }
    return even_fibonanci;
}

int sum_even_fibonanci(const std::vector<long long>&even_fibonanci){
    int result = 0;
    for(auto x:even_fibonanci){
        result += x;
    }
    return result;
}

int main(){
    auto c = even_fibonanci(fibonancci(4000000));
    std::cout<<sum_even_fibonanci(c)<<std::endl;
    return 0;
}