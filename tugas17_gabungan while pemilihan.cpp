#include <iostream>
using namespace std;

int main(){

    int i;
    float pbl, diskon, total_hrg;

    i = 1;
    while (i <= 5)
    {
        cout << "orang ke-" << i << endl;
        cout << "Masukkan Harga Pembelian: ";
        cin >> pbl;

        if (pbl < 1000000){
            diskon = pbl * 5/100;
        }
        else {
            diskon = pbl * 8/100;
        }

        total_hrg = pbl - diskon;

        cout << "--------------------------------------"<<endl;
        cout << "total diskon: Rp " << diskon <<endl;
        cout << "total harga : Rp " << total_hrg << endl<<endl;
        i = i + 1;
    }

    return 0;
}