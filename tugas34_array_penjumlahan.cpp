#include <iostream>
using namespace std;

int main(){

    int bil[11], jmlh, i;

    jmlh = 0;
    i = 1;
    while (i <= 10)
    {
        cout << "Masukkan Bilangan [" << i << "] = ";
        cin >> bil[i];
        jmlh = jmlh + bil[i];
        i = i + 1;
    }
    cout << "Total Penjumlahan = " << jmlh ;
    return 0;
}