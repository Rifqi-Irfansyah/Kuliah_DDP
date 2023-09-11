#include <iostream>
using namespace std;

int main(){

    int bulan;

    cout << "Masukkan Bulan ke-: ";
    cin >> bulan;

    switch(bulan){
        case 1:
            cout << "Bulan ke-" << bulan << " adalah Januari";
            break;

        case 2:
            cout << "Bulan ke-" << bulan << " adalah Februari";
            break;

        case 3:
            cout << "Bulan ke-" << bulan << " adalah Maret";
            break;

        case 4:
            cout << "Bulan ke-" << bulan << " adalah April";
            break;

        case 5:
            cout << "Bulan ke-" << bulan << " adalah Mei";
            break;

        case 6:
            cout << "Bulan ke-" << bulan << " adalah Juni";
            break;

        case 7:
            cout << "Bulan ke-" << bulan << " adalah Juli";
            break;

        case 8:
            cout << "Bulan ke-" << bulan << " adalah Agustus";
            break;

        case 9:
            cout << "Bulan ke-" << bulan << " adalah September";
            break;

        case 10:
            cout << "Bulan ke-" << bulan << " adalah Oktober";
            break;

        case 11:
            cout << "Bulan ke-" << bulan << " adalah November";
            break;

        case 12:
            cout << "Bulan ke-" << bulan << " adalah Desember";
            break;
            
        default:
            cout << "Input Salah !!";
    }

    return 0;
}