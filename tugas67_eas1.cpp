#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Mahasiswa{
    string nim;
    string nama;
    float ip;
};

int main(){
    Mahasiswa mhsw[11];
    int ip_tiga;
    float ip_terbesar;

    for (int i=1; i<=10; i++)
    {
        cout << "Mhsw ke-" << i <<endl;
        cout << "NIM  = ";
        cin >> mhsw[i].nim;
        cout << "Nama = ";
        cin >> mhsw[i].nama;
        cout << "ip   = ";
        cin >> mhsw[i].ip;
        cout<<endl;
    }

    ip_tiga = 0;
    ip_terbesar = mhsw[1].ip;
    for (int i=1; i<=10; i++)
    {
        if(mhsw[i].ip > 3)
        {
            ip_tiga = ip_tiga + 1;
        }
        if (ip_terbesar < mhsw[i].ip)
        {
            ip_terbesar = mhsw[i].ip;
        }
    }

    cout << "IP lebih dari 3 sebanyak = " << ip_tiga << " Mahasiswa\n";
    cout << "Ip Terbesar = " << ip_terbesar;
}