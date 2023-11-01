#include <iostream>
using namespace std;

int volume_balok(int p, int l, int t){
    int volume;
    volume = p * l * t;
    return volume;
}

int main(){
    int hasil;
    hasil = volume_balok(5,10,7);
    cout << "Volume Balok = " << hasil;
}