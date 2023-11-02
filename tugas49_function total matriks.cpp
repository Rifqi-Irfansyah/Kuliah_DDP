#include <iostream>
using namespace std;

int hitung(int A[6][6]){
    int i, j, jumlah;
    jumlah = 0;
    i = 1;
    while(i<=5)
    {
        j = 1;
        while (j<=5)
        {
            jumlah = jumlah + A[i][j];
            j = j + 1;
        }
        i = i + 1;
    }
    return jumlah;
}

int main(){
    int A[6][6], i, j;
    i = 1;
    while(i<=5){
        j = 1;
        while (j<=5)
        {
            cout << "A[" << i << "]["<< j << "] = ";
            cin >> A[i][j];
            j = j + 1;
        }
        i = i + 1;
    }
    
    cout << "Hasil Penjumlahan Array = " << hitung(A);
    return 0;
}


