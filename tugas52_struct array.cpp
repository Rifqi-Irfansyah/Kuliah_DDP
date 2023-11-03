#include <iostream>
using namespace std;

struct Mahasiswa{
    string nama;
    int nim;
    int usia;
};

int main(){
    int i;
    Mahasiswa mhsw[3];

    // Mengisi data array
    mhsw[0].nama = "Rifqi";
    mhsw[0].nim  = 231511089;
    mhsw[0].usia = 17;

    mhsw[1].nama = "Irfan";
    mhsw[1].nim  = 221511087;
    mhsw[1].usia = 18;

    mhsw[2].nama = "Syah";
    mhsw[2].nim  = 221511082;
    mhsw[2].usia = 19;

    // Menampilkan data Array
    i = 0;
    while (i<=2){
        cout << "Mahasiswa " << i + 1 <<endl;
        cout << "Nama = " << mhsw[i].nama <<endl;
        cout << "Nim  = " << mhsw[i].nim <<endl;
        cout << "Usia = " << mhsw[i].usia << " Tahun\n" << endl;
        i = i + 1;
    }
    return 0;
}