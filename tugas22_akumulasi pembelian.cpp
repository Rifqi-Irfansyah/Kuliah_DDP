#include <iostream>
using namespace std;

int main(){

    int hasil, pbl, i;
    hasil = 0;
    i = 1;

    while (i <= 5)
    {
        cout << "Pembelian ke-" << i << ": " ;
        cin >> pbl;
        hasil = hasil + pbl;
        i = i + 1;
    }

    cout << "Hasil Pembelian Adalah = " << hasil ;

    return 0;
}