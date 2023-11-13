#include <iostream>
using namespace std;

int faktorial(int a){
    if (a == 1){
        return a;
    }
    else{
        return a*(faktorial(a-1));
    }
}

int main(){
    int n, hasil;
    cout << "Masukkan Nilai N = ";
    cin >> n;
    hasil = faktorial(n);
    cout << "Hasil Faktorial " << n << "! = " << hasil;
}