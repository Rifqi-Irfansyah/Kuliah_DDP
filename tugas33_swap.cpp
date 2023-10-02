#include <iostream>
using namespace std;

int main(){

    int a, b, temp_a;

    cout << "Nilai a = ";
    cin >> a;
    cout << "Nilai b = ";
    cin >> b;

    temp_a = a;
    a = b;
    b = temp_a;
    cout << "Nilai a = " <<a <<endl;
    cout << "Nilai b = " <<b <<endl;

    return 0;
}