#include <iostream>
using namespace std;

int main(){

    float hasil, penyebut_atas, penyebut_bawah, hasil_atas, hasil_bawah;

    penyebut_atas = 2;
    penyebut_bawah = 3;
    hasil_atas = 0;
    hasil_bawah = 1;

    while (penyebut_atas <= 20)
    {
        hasil_atas = hasil_atas + (1 / penyebut_atas);
        hasil_bawah = hasil_bawah * (1 / penyebut_bawah); 
        penyebut_bawah = penyebut_bawah + 2;
        penyebut_atas = penyebut_atas + 2;
    }
    
    hasil = hasil_atas / hasil_bawah;
    cout << "(1/2 + 1/4 + ... + 1/20) / (1/3 * 1/5 * ... * 1/21) ?" << endl;
    cout << "Hasil Hitungan Adalah = " << hasil <<endl ;

    return 0;
}