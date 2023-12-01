#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Mahasiswa{
    char nama[50];
    int umur;
};

int main(){
    int numMahasiswa = 6;
    Mahasiswa mhsw[6];

    for (int i=1; i<=5; i++){
        cout << "Mhsw ke-" << i <<endl;
        cout << "Nama = ";
        //cin.ignore(); 
        cin >> mhsw[i].nama;
        cout << "Umur = ";
        cin >> mhsw[i].umur;
        cout <<endl;
    }

    ofstream file("Mhs.dat", ios::binary);
    if (file.is_open()) {
        file.write(reinterpret_cast<char*>(&mhsw), sizeof(Mahasiswa) * numMahasiswa);
        file.close();
        cout << "Data Mahasiswa telah disimpan ke file Biner: dataMhs.dat" << endl;
    }
    else {
        cerr << "Gagal membuka file" << endl;
        return 1;
    }
}