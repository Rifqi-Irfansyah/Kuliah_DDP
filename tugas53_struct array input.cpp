#include <iostream>
using namespace std;

struct Mahasiswa{
    int nim;
    string nama;
    int uts;
    int uas;
};

int main(){
    int i;
    Mahasiswa mhsw[6];

    fot (int i; i<5; i++;){
        cout << i <<endl;
    }

    i = 1;
    while (i <= 5){
        cout << "Mahasiswa " << i <<endl;
        cout << "Nim \t= ";
        cin >> mhsw[i].nim;
        cout << "Nama\t= ";
        cin >> mhsw[i].nama;
        cout << "UTS \t= ";
        cin >> mhsw[i].uts;
        cout << "UAS \t= ";
        cin >> mhsw[i].uas;
        cout << endl;
        i = i + 1;
    }

    cout <<"\n---Output---\n";
    i = 1;
    while (i <= 5){
        cout << "Mahasiswa " << i <<endl;
        cout << "Nim \t= " << mhsw[i].nim <<endl;
        cout << "Nama\t= " << mhsw[i].nama <<endl;
        cout << "UTS \t= " << mhsw[i].uts << endl;
        cout << "UAS \t= " << mhsw[i].uas << endl << endl;
        i = i + 1;
    }
    return 0;
}