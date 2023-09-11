#include <iostream>
using namespace std;

int main(){

    float bil_satu, bil_dua, hasil;
    char operasi;

    cout << "Masukkan Bilangan ke-1 = " ;
    cin >> bil_satu;
    cout << "Masukkan Bilangan ke-2 = " ;
    cin >> bil_dua;
    cout << "Masukkan Operasi (+, -, *, /) = " ;
    cin >> operasi;

    switch(operasi){
        case '+':
            hasil = bil_satu + bil_dua;
            break;

        case '-':
            hasil = bil_satu - bil_dua;
            break;

        case '*':
            hasil = bil_satu * bil_dua;
            break;

        case '/':
            hasil = bil_satu / bil_dua;
            break;
            
        default:
            cout << "Input Salah !!";
            return 1;
            
    }

    cout << "Hasil dari " << bil_satu << operasi << bil_dua << " adalah " <<hasil;

    return 0;
}