#include <iostream>
using namespace std;

int main(){

    float hasil, penyebut, pembilang, i;

    hasil = 0;
    penyebut = 0;
    pembilang = 1;
    i = 1;

    while (i <= 15)
    {
        pembilang = pembilang * i;
        penyebut = penyebut + i;
        i = i + 2;
    }
    hasil = pembilang / penyebut ;
    cout << "Hasil Hitungan Adalah = " << hasil <<endl ;

    return 0;
}