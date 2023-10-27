#include <iostream>
using namespace std;

int main(){
    int A[4][4], jumlah, i, j;
    jumlah = 0;
    i = 1;
    while(i<=3){
        j = 1;
        while(j<=3){
            cout << "A [" << i << "][" << j << "] = ";
            cin >> A[i][j];
            j= j + 1;
        }
        i = i + 1;
    }
    i = 1;
    while(i<=3){
        j = 1;
        while(j<=3){
            jumlah = jumlah + A[i][j];
            j = j + 1;
        }
        i = i + 1;
    }
    cout << "Hasil Penjumlahan Array = " << jumlah;
    return 0;
}