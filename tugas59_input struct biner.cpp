#include <iostream>
#include <fstream>
#include <string>
using namespace std;

const int MAX_STRING_SIZE = 50; 

struct Mahasiswa {
    int nim;
    char nama[MAX_STRING_SIZE];
    int umur;
};

int main() {
    const int numMahasiswa = 5;
    Mahasiswa mhsw[numMahasiswa];

    // Input data for each Mahasiswa
    for (int i = 0; i < numMahasiswa; ++i) {
        cout << "Mahasiswa " << i + 1 << endl;
        cout << "Nim \t= ";
        cin >> mhsw[i].nim;
        cout << "Nama\t= ";
        cin.ignore(); 
        cin.getline(mhsw[i].nama, MAX_STRING_SIZE);
        cout << "Umur \t= ";
        cin >> mhsw[i].umur;
        cout << endl;
    }

    // Write all Mahasiswa data to a single binary file
    ofstream file("dataMhs.dat", ios::binary);
    if (file.is_open()) {
        file.write(reinterpret_cast<char*>(&mhsw), sizeof(Mahasiswa) * numMahasiswa);
        file.close();
        cout << "Data Mahasiswa telah disimpan ke file Biner: dataMhs.dat" << endl;
    }
    else {
        cerr << "Gagal membuka file" << endl;
        return 1;
    }

    return 0;
}
