#include <iostream>
using namespace std;

int main(){

    int hasil, i;
    hasil = 0;
    i = 10;

    while (i <= 50)
    {
        hasil = hasil + i;
        cout << i << endl; 
        i = i + 5;
    }

    cout << "Hasil Penjumlahan Adalah = " << hasil ;

    return 0;
}