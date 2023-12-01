#include <iostream>
using namespace std;

int main(){
    int X[6];
    float Q, pembilang;
    Q = 0;
    pembilang = 1;
    
    for(int i=1; i<=5; i++){
        cout << "Masukkan X[" <<i<<"] = ";
        cin >> X[i];

        Q = Q + pembilang/X[i];
        pembilang = pembilang + 2;
    }

    cout << "Hasil Q = " << Q;
}