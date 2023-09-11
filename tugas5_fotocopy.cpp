#include <iostream>
using namespace std;

int main(){

    int jmlh, total_hrg, harga;
    string nama;

    cout << "Masukkan Nama Pelanggan   : " ;
    cin >> nama;
    cout << "Masukkan Lembar Foto Copy : " ;
    cin >> jmlh;

    if (jmlh < 100){
        harga = 300;
    }
    else {
        harga = 250;
    }

    total_hrg = jmlh * harga;
    cout << endl;
    cout << "Nama Pelanggan : " << nama <<endl;
    cout << "Total Harga    : Rp. " << total_hrg <<endl;

    return 0;
}