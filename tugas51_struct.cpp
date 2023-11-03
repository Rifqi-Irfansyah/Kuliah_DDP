#include <iostream>
using namespace std;

struct Mahasiswa{
    string nama;
    int nim;
    int usia;
};

int main(){
    // Membuat Instance struct Mahasiswa
    Mahasiswa mhsw1;
    mhsw1.nama = "Rifqi";
    mhsw1.nim  = 231511089;
    mhsw1.usia = 17;

    Mahasiswa mhsw2;
    mhsw2.nama = "Irfan";
    mhsw2.nim  = 221511087;
    mhsw2.usia = 18;

    // Menampilkan data Mahasiswa
    cout << "Mahasiswa 1\n";
    cout << "Nama \t= " << mhsw1.nama <<endl;
    cout << "Nim  \t= " << mhsw1.nim <<endl;
    cout << "Usia \t= " << mhsw1.usia << " Tahun" <<endl<<endl;

    cout << "Mahasiswa 2\n";
    cout << "Nama \t= " << mhsw2.nama <<endl;
    cout << "Nim  \t= " << mhsw2.nim <<endl;
    cout << "Usia \t= " << mhsw2.usia << " Tahun" <<endl;
    return 0;
}