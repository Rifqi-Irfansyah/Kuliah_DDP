#include <iostream>
using namespace std;

struct Mahasiswa{
    string nama;
    int umur;
};

int main(){
    Mahasiswa mhsw[11];
    Mahasiswa mhsw_temp;

    for (int i=1; i<=10; i++){
        cout << "Mhsw ke-" << i <<endl;
        cout << "Nama = ";
        cin >> mhsw[i].nama;
        cout << "Umur = ";
        cin >> mhsw[i].umur;
        cout <<endl;
    }

    for (int j=1; j<=10; j++){
        for (int i=1; i<=9; i++){
            if(mhsw[i].umur > mhsw[i+1].umur){
                mhsw_temp  = mhsw[i];
                mhsw[i]    = mhsw[i+1];
                mhsw[i+1]  = mhsw_temp;
            }
        }
    }

    cout << "\n\nData Mahasiswa Terkecil - Terbesar\n";
    for (int i=1; i<=10; i++){
        cout << "Nama = " << mhsw[i].nama << "\tUmur = " << mhsw[i].umur <<endl;
    }
}