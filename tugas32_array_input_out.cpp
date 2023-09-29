#include <iostream>
using namespace std;

int main(){

    string warna[5];
    int i;

    i = 0;
    while (i <= 4)
    {
        cout << "Masukkan Warna[" << i << "] = ";
        cin >> warna[i];
        i ++;
    }
    cout << "================================"<<endl;
    i = 0;
    while (i <= 4)
    {
        cout << "Warna[" << i <<"] = " << warna[i] <<endl;
        i ++;
    }


    return 0;
}