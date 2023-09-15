#include <iostream>
using namespace std;

int main(){

    int hasil, bil, i;
    hasil = 0;
    bil = 10;
    i = 1;

    while (i <= 9)
    {
        hasil = hasil + bil;
        cout << bil << endl;
        bil = bil + 5; 
        i = i + 1;
    }

    cout << "Hasil Penjumlahan Adalah = " << hasil ;

    return 0;
}