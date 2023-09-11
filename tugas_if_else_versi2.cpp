#include <iostream>
using namespace std;

int main(){

    int a, b, c, d;

    cout << "Masukkan Angka ke-1: " ;
    cin >> a;
    cout << "Masukkan Angka ke-2: " ;
    cin >> b;

    c = a + b ;
    cout << "Hasil Penjumlahan Adalah "<<c<<endl;

    d = c % 2;

    if (d == 0){
        cout <<c<< " adalah bilangan genap";
    }
    else{
        cout <<c<< " adalah bilangan ganjil";
    }
    cout<<endl;
    return 0;
}