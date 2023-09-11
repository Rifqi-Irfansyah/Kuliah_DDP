#include <iostream>
#include <string>
using namespace std;

int main(){

    int a;
    float total, diskon;
    string str_hrg;

    cout << "Masukkan Total Pembelian : " ;
    cin >> a;

    if (a < 1000000){
        cout << "Kurang dari 1 jt, Diskon 5%" <<endl<<endl;
        diskon = a * 5 / 100;
    }
    else {
        cout << "Melebihi 1 jt, Diskon 10%" <<endl<<endl;
        diskon = a * 10 / 100;
    }

    str_hrg = to_string(a);
    total = a - diskon;
    cout << "Harga Awal :Rp. " << str_hrg <<endl;
    cout << "Diskon     :Rp. " << diskon <<endl;
    cout << "Total      :Rp. " << total << endl;

    return 0;
}