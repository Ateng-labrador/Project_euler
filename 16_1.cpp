#include <iostream>
#include <cstdint>

uint32_t NUM_CELLS = 251;
uint8_t cells[NUM_CELLS];

// uint32_t power(int n){
//     uint32_t res = 1;
//     for(int i=1;i<=n;++i){
//         res *= 2;
//     }
//     return res;
// }

uint32_t sum(uint32_t res){
    uint32_t sum = 0;
    uint32_t reminder;
    uint32_t num;
    
    while(true){
        reminder = res % 10;
        res /= 10;
        sum += reminder;
    }
}

int main(){
    std::cout<<power(15)<<std::endl;
    return 0;
}
/**
* Project euler #16
* Memecah setiap angka menjadi satu satu
* 
* n = 12345 
* 12345 = 1234*10 + 5, 1234 divided by 10 is 1234 remainder 5
* 
* dalam c++ sisa di hitung dengan operator modulus => %
* 
* (12345 % 10) = 5
* 12345 / 10 ini sudah di bulatkan ke atas menjadi 1234
*  BIG INTEGER

BAGAIMANA KITA MEMPRESENTASIKA NUMBER?

12345 = 1*10^4 + 2*10^3 + 3*10^2 + 4*B^  + 5*B^0

B could be 7 ... or 279!

in particular, if B = 2, we call that binary!

Suppose we have a binary number
10010101(binary number) = 2^7 + 2^4 + 2^2 + 2^0 = 149

Another posibble is base 16(hexdecuaml)

why do we like base 16?b
1) we can easliy convert from binary
2) much more compact that binary

1001 0101 (binary) -> 0x95(hex)

2^1000?

in binary 2^1000 is just a 1 followed by 1000 zeroes
in hex therefore,2^1000 is just a 1 followed by 250 zeroes

1 2 3 4 5 6 7 8 9 A B C D E F

how do we represent digits larger than 9 in hex?
10 -> A
11 -> B
12 -> C
13 -> D
14 -> E
15 -> F



*/


