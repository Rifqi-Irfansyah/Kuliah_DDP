#include <iostream>
using namespace std;

int main(){
    int a, b, x, i;
    float y, z;

    cout << "Masukkan a = ";
    cin >> a;
    cout << "Masukkan b = ";
    cin >> b;

    x = 1;
    i = 1;
    while (i <= b){
        x = x * a;
        i = i + 1;
    }

    if(b <= 10){
        y = 3 / b - 5;
    }
    else{
        y = 5 / b + 9;
    }
    z = x + y;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "z = " << z ;

    return 0;
}