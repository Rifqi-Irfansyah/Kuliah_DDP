#include <iostream>
using namespace std;

struct Mahasiswa{
    string nama;
    int umur;
};

int main(){
    Mahasiswa mhsw[11];
    int temp_umur;
    string temp_nama;

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
                temp_nama      = mhsw[i].nama;;
                mhsw[i].nama   = mhsw[i+1].nama;
                mhsw[i+1].nama = temp_nama;

                temp_umur      = mhsw[i].umur;
                mhsw[i].umur   = mhsw[i+1].umur;
                mhsw[i+1].umur = temp_umur;
            }
        }
    }

    cout << "\n\nData Mahasiswa Terkecil - Terbesar\n";
    for (int i=1; i<=10; i++){
        cout << "\nMhsw ke-" << i <<endl;
        cout << "Nama = " << mhsw[i].nama <<endl;
        cout << "Umur = " << mhsw[i].umur <<endl;
    }
}