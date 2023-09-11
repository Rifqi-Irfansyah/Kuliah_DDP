#include <iostream>
using namespace std;

int main(){

    float pjl, bonus;

    cout << "Masukkan Penjualan: ";
    cin >> pjl;

    if (pjl <= 3000000)
    {
        bonus = pjl * 2/100;
    }
    else
    {
        if (pjl <= 5000000)
        {
            bonus = pjl * 4/100;
        }
        else
        {
            if (pjl <= 10000000)
            {
                bonus = pjl * 7/100;
            }
            else
            {
                bonus = pjl * 10/100;
            }
        }
    }

    cout << "Anda Mendapat Bonus = " << bonus;

    return 0;
}