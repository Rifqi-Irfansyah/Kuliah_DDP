#include <iostream>
using namespace std;

int main(){

    float hasil, penyebut, pembilang;

    cout << "Program Menghitung Pecahan" <<endl ;

    hasil = 0;
    penyebut = 10;
    pembilang = 1;

    while (pembilang <= 9)
    {
        cout << pembilang << "/" << penyebut << endl;
        hasil = hasil + ( pembilang / penyebut );
        penyebut = penyebut - 2;
        pembilang = pembilang + 2;
    }
    cout << "Hasil Hitungan Adalah = " << hasil <<endl ;

    return 0;
}