#include <iostream>
using namespace std;

int main(){
    int a, b, i;
    float x[6], pembilang, penyebut, jmlh;

    pembilang = 0;
    penyebut = 0;
    a = 2;
    b = 9;
    i = 1;
    while (i <= 5)
    {
        cout << "Masukkan Bilangan [" << i << "] = ";
        cin >> x[i];
        pembilang = pembilang + (a / x[i]) ;
        penyebut = penyebut + (b * x[i]);
        a = a + 2;
        b = b - 2;
        i = i + 1;
    }
    jmlh = pembilang / penyebut;
    cout << "Z = " << jmlh ;
    return 0;
}