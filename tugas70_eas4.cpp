#include <iostream>
using namespace std;

int faktorial(int a){
    if (a == 1){
        return a;
    }
    else{
        return a*(faktorial(a-1));
    }
}

int main(){
    int faktor, X[6];
    float hasil_z;
    for (int i=1; i<=5; i++){
        cout << "Masukkan X [" <<i<< "] = ";
        cin >> X[i];
    }

    faktor = 9;
    hasil_z = 0;
    for (int i=1; i<=5; i++){
        has3il_z = hasil_z + X[i] / (faktorial(faktor));
        faktor = faktor - 2;
    }

    cout << "Z = " << hasil_z;
}