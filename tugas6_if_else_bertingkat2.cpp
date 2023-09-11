#include <iostream>
using namespace std;
#include <string>

int main(){

    float pbl, diskon, total_hrg;
    string str_total_hrg;

    cout << "Masukkan Harga Pembelian: ";
    cin >> pbl;

    if (pbl < 1000000){
        diskon = pbl * 5/100;
    }
    else if (pbl < 2000000){
        diskon = pbl * 7/100;
    }
    else {
        diskon = pbl * 8/100;
    }

    total_hrg = pbl - diskon;
    str_total_hrg = to_string(total_hrg);

    cout << "--------------------------------------"<<endl;
    cout << "total diskon: Rp " << diskon <<endl;
    cout << "total harga : Rp " << str_total_hrg << endl;

    return 0;
}