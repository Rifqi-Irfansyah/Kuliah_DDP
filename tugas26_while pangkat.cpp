#include <iostream>
using namespace std;

int main(){

    int bil, hasil_pangkat, i;
    hasil_pangkat = 1;
    bil = 5;
    i = 1;

    while (i <= 4)
    {
        hasil_pangkat = hasil_pangkat * bil;
        i = i + 1;
    }
    cout << "Hasil Pangkat  = " << hasil_pangkat <<endl ;

    return 0;
}