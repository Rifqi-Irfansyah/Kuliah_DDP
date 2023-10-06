#include <iostream>
using namespace std;

int main(){
    int bil, pangkat, jmlh_pangkat, z, i;
    z = 0;
    bil = 10;
    pangkat = 1;
    while (bil >= 2)
    {
        jmlh_pangkat = 1;
        i = 1;
        while (i <= pangkat)
        {
            jmlh_pangkat = jmlh_pangkat * bil;
            i = i + 1;
        }
        z = z + jmlh_pangkat;
        pangkat = pangkat + 2;
        bil = bil - 2;
    }
    cout << "z = 10^1 + 8^3 + 6^5 + 4^7 + 2^9" << endl;
    cout << "z = " << z << endl;
 

    return 0;
}