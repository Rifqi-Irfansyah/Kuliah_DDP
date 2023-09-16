#include <iostream>
using namespace std;

int main(){

    int hasil, pjl, bonus, i;
    hasil = 0;
    i = 1;

    while (i <= 6)
    {
        cout << "Penjualan ke-" << i << ": " ;
        cin >> pjl;
        hasil = hasil + pjl;
        i = i + 1;
    }

    if (hasil < 50000000){
        bonus = hasil * 5 / 100;
    }
    else{
        bonus = hasil * 8 / 100;
    }

    cout << "Hasil Pembelian Adalah = " << hasil <<endl ;
    cout << "Bonus = " << bonus ;

    return 0;
}