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

    if (c > 0){
        cout <<c<< " adalah bilangan positif";
    }
    else if (c == 0){
        cout <<c<< " adalah bilangan nol";
    }
    else {
        cout <<c<< " adalah bilangan negatif";
    }
    cout<<endl;
    return 0;
}