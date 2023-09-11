#include <iostream>
using namespace std;

int main(){

    float bilangan;
    string nama_bil;

    cout << "Masukkan Bilangan Real: ";
    cin >> bilangan;

    if (bilangan > 0)
    {
        nama_bil = "positif";
    }
    else
    {
        if (bilangan < 0)
        {
            nama_bil = "negatif";
        }
        else
        {
           nama_bil = "nol";
        }
    }

    cout << bilangan << " adalah bilangan " << nama_bil;

    return 0;
}