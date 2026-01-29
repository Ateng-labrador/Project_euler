#include <iostream>
#include <vector>
#include <map>
#include <cmath>
using ll = long long;


// kelipatan persekutuan terkecil

/**
 * Faktorisasi Prima
 * Mengambil pangkat tertinggi 
 * Ambil semua faktor prima untuk mendapatkan kpk
 */

// std::vector<int> kpk(int n){
//     std::vector<int> res;
//     for(int i=2;i<n;i++){
//         if(n % i == 0){
//             res.push_back(i);
//             n /= i;
//         }
//     }
//     return res;
// }

// KPK adalah mengambil faktor prima dari dua(atau lebih) bilangan
// dan utnuk setiap faktor prima ,ambil pangkat tertinggi (yang terbesa)


// berapa kali  bilang prima itu muncul?

std::map<int,int> faktorisasi_prima(int n){
    std::map<int,int> faktor;

    for(int i=2;i*i<=n;i++){
        while(n % i == 0){
            faktor[i]++;
            n/=i;
        }
    }

    if(n>1){
        faktor[n]++;
    }
    return faktor;
}

std::map<int,int> faktorisasi_kpk(int batas){
    std::map<int,int> hasil;

    for(int i=2;i<=batas;i++){
        std::map<int,int> f = faktorisasi_prima(i);
        for(auto& [prima, pangkat]:f){
            hasil[prima] = std::max(hasil[prima],pangkat);
        }
    }
    return hasil;
}

ll hitung_kpk(const std::map<int,int>&faktor){
    ll kpk = 1;
    for(auto &[prima,pangkat]:faktor){
        for(int i = 0;i<pangkat;i++){
            kpk*prima;
        }
    }
    return kpk;
}


int main(){
    // std::map<int,int> faktor_kpk = faktorisasi_kpk(10);

    // for(auto&[prima,pangkat]:faktor_kpk){
    //     std::cout<<prima<<" "<<pangkat<<std::endl;
    // }

    // std::cout<hitung_kpk(faktor_kpk);

    // std::map<int,int> search_prima = faktorisasi_prima(10);
    // for(auto &[prima,pangkat]:search_prima){
    //     std::cout<<prima<<" "<<pangkat<<std::endl;
    // }

    std::map<int,int> A = faktorisasi_prima(8);
    for(auto &[prima,pangkat]:A){
        std::cout<<prima<<" "<<pangkat<<std::endl;
    }
}