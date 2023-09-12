#include <iostream>
using namespace std;

int main(){

    int bil, sisa_bagi;

    cout << "Masukkan Bilangan = ";
    cin >> bil;

    sisa_bagi = bil % 2;
    if (sisa_bagi == 0){
        cout << bil << " adalah bilangan genap";
    }
    else {
        cout << bil << " adalah bilangan ganjil";
    }

    return 0;
}