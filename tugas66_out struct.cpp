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
    Mahasiswa readMhs[6];
    Mahasiswa mhsw_max;

    ifstream readFile("Mhs.dat", ios::in | ios::binary);
    if (readFile.is_open()) 
    {
        readFile.read(reinterpret_cast<char*>(&readMhs), numMahasiswa * sizeof(Mahasiswa));
        readFile.close();

        cout << "Data Mahasiswa\n";
        for (int i=1; i<=5; i++){
            cout << "Nama = " << readMhs[i].nama << "\tUmur = " << readMhs[i].umur <<endl;
        }

        mhsw_max = readMhs[1];
        for (int i=1; i<=5; i++){
            if(mhsw_max.umur < readMhs[i].umur){
                mhsw_max = readMhs[i];
            }
        }

        cout << "\nMahasiswa dengan umur terbesar\n";
        cout << "Nama = " << mhsw_max.nama << endl;
        cout << "Umur = " << mhsw_max.umur;
    } 
    else 
    {
        cerr << "Gagal membuka file" << endl;
        return 1;
    }
    
}