#include <iostream>
using namespace std;

int main(){

    int i;
    float bil[6], z, jmlh;

    jmlh = 0;
    z = 9;
    i = 1;
    while (i <= 5)
    {
        cout << "Masukkan Bilangan [" << i << "] = ";
        cin >> bil[i];

        jmlh = jmlh + z / bil[i];
        z = z - 2;
        i = i + 1;
    }
    cout << "Total Penjumlahan = " << jmlh ;
    return 0;
}