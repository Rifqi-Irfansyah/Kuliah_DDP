#include <iostream>
using namespace std;

int hitung(int A[]){
    int i, jumlah;
    jumlah = 0;
    i = 1;
    while(i<=5){
        jumlah = jumlah + A[i];
        cout<<jumlah<<endl;
        i = i + 1;
    }
    return jumlah;
}

int main(){
    int A[6], i;
    i = 1;
    while(i<=5){
        cout << "A [" << i << "] = ";
        cin >> A[i];
        i = i + 1;
    }
    
    cout << "Hasil Penjumlahan Array = " << hitung(A);
    return 0;
}


