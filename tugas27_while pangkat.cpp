#include <iostream>
using namespace std;

int main(){

    int bil, hasil_pangkat, pangkat, i;
    hasil_pangkat = 1;

    cout << "Bilangan = ";
    cin >> bil;
    cout << "Pangkat = ";
    cin >> pangkat;

    i = 1;
    while (i <= pangkat)
    {
        hasil_pangkat = hasil_pangkat * bil;
        i = i + 1;
    }
    cout << "Hasil Pangkat = " << hasil_pangkat <<endl ;

    return 0;
}