#include <iostream>
using namespace std;

int main(){

    int nilai;
    string index;

    cout << "Masukkan Nilai Mahasiswa: ";
    cin >> nilai;

    if (nilai >= 85){
        index = "A";
    }
    else{
        if (nilai >= 70){
            index = "B";
        }
        else {
            if (nilai >= 55){
                index = "C";
            }
            else {
                if (nilai >= 40){
                    index = "D";
                }
                else {
                    index = "E";
                }
            }
        }
    }

    cout << "Nilai " << nilai << " Memiliki Indeks [" << index << "]";

    return 0;
}