#include <iostream>
#define MAX 500

int multiply(int x,int res[],int res_size);

void factorial(int n){
    int res[MAX];

    // mulai dari 1
    res[0] = 1;
    int res_size = 1;

    for(int x = 2;x<=n;x++){
        res_size = multiply(x,res,res_size);
    }
    for(int i=res_size-1;i>=0;i--){
        std::cout<<res[i];
    }
    
}

int multipy(int x,int res[],int res_size){
    int carry = 0;
    for(int i=0;i<res_size;i++){
        int pord = res[i]*x+carry;
        res[i] = pord % 10;
        carry = pord / 10;
    }
    while(carry){
        res[res_size] = carry % 10;
        carry = carry / 10;
        res_size++;
    }
    return res_size;
    
}

int main(){
    factorial(100);
    return 0;
}


/**
 * res[MAX] adalah array yang menyimpan hasil faktorial dalam bentuk digit terbalik
 * 
 * 
 * Lakukan perkalian tiap digit: int pord = res[i]*x+carry;
 * simpan hasil satuannya di res[i],simpan puluhanya/lebih ke caryy
 * setelah semua digit selesai,tambahkan sisa carry jika ada
 * kembalikan res_size yang baru
 * 
 * 
 */