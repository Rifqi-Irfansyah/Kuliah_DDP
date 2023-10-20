#include <iostream>
using namespace std;

int main(){
    int x[6], i, j, z, z_total, pangkat;
    z_total = 0;
    pangkat = 5;
    i = 1;
    while(i<=5)
    {
        cout << "Masukkan x[" << i << "] = ";
        cin >> x[i];
        z = 1;
        j = 1;
        while (j <= pangkat)
        {
            z = z * x[i];
            j = j + 1;
        }
        z_total = z_total + z;
        pangkat = pangkat - 1 ;
        i = i + 1;
    }
    cout << "Z =" << z_total ;
    return 0;
}