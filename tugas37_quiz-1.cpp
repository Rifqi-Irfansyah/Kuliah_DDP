#include <iostream>
using namespace std;

int main(){
    int a, b, x, y, z;

    cout << "Masukkan a = ";
    cin >> a;
    cout << "Masukkan b = ";
    cin >> b;

    if (a < 5){
        x = 2 * a + 5;
    }
    else {
        x = 3 * a + 8;
    }

    if (a <= 10){
        y = 6 * b - 5;
    }
    else {
        y = 8 * b + 9;
    }
    z = x + y;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "z = " << z ;

    return 0;
}