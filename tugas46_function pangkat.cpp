#include <iostream>
using namespace std;

int hasil_pangkat(int bil, int pangkat){
    int hasil, i;
    hasil = 1;
    i = 1;
    while(i<=pangkat)
    {
        hasil = hasil * bil;
        i = i + 1;
    }
    return hasil;
}

int main(){
    int hasil;
    hasil = hasil_pangkat(5,3);
    cout << "Hasil Pangkat = " << hasil;
}