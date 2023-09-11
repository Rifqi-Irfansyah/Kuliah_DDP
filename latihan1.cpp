#include <iostream>
using namespace std;

int main(){

    string nama;
    float a, b, c;

    cout << "Masukkan Angka ke-1: " ;
    cin >> a;
    cout << "Masukkan Angka ke-2: " ;
    cin >> b;

    c = a + b ;
    cout << "Hasil Penjumlahan Adalah "<<c<<endl;

    if (c < 0){
        cout <<c<< " negatif";
    }
    else {
        cout <<c<< " positif atau 0";
    }
    cout<<endl;
    return 0;
}