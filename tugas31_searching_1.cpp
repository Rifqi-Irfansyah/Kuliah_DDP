#include <iostream>
using namespace std;

int main(){

    bool status;
    int pencarian, bil, i;

    cout << "Menentukan Ada Tidaknya Bilangan Tertentu" <<endl;
    cout << "Masukkan Bilangan Yang Dicari = ";
    cin >> pencarian;

    status = 0;
    i = 1;
    while (i <= 5)
    {
        cout << "Bilangan ke-" << i <<" = ";
        cin >> bil;
        if (bil == pencarian)
        {
            status = 1;
        }
        i = i + 1;
    }
    
    if (status == 1)
    {
        cout << "Bilangan "<<pencarian<<" Ditemukan";
    }
    else
    {
        cout << "Bilangan "<<pencarian<<" Tidak Ditemukan";
    }

    return 0;
}