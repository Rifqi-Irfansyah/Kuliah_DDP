#include <iostream>
using namespace std;

int main(){

    float a;

    cout << "Masukkan Umur : " ;
    cin >> a;

    if (a < 17){
        cout <<a<< " adalah usia dibawah umur";
    }
    else {
        cout <<a<< " adalah usia dewasa";
    }
    cout<<endl;
    return 0;
}