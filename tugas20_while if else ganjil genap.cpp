#include <iostream>
using namespace std;

int main(){

    int bil, sisa_bagi, i;
    i = 1;

    while (i <= 5)
    {
        cout << "=================================" << endl;
        cout << "Menentukan Ganjil Genap ke-" << i << endl;
        cout << "Masukkan Bilangan = ";
        cin >> bil;

        sisa_bagi = bil % 2;
        if (sisa_bagi == 0){
            cout << bil << " adalah bilangan genap" << endl << endl;
        }
        else {
            cout << bil << " adalah bilangan ganjil" << endl << endl;
        }
        i = i + 1;
    }

    return 0;
}