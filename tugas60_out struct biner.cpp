#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Mahasiswa {
    int nim;
    char nama[50];
    int umur;
};

int main() {
    const int numMahasiswa = 5;

    ifstream readFile("dataMhs.dat", ios::in | ios::binary);
    if (readFile.is_open()) 
    {
        Mahasiswa readMhs[numMahasiswa];
        readFile.read(reinterpret_cast<char*>(&readMhs), numMahasiswa * sizeof(Mahasiswa));
        readFile.close();

        for (int i = 0; i < numMahasiswa; ++i) 
        {
            cout << "Data Mahasiswa " << i + 1 << endl;
            cout << " Nim : " << readMhs[i].nim << endl;
            cout << " Nama: " << readMhs[i].nama << endl;
            cout << " Umur: " << readMhs[i].umur << endl;
            cout << endl;
        }
    } 
    else 
    {
        cerr << "Gagal membuka file" << endl;
        return 1;
    }

    return 0;
}