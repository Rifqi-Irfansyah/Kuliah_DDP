#include <iostream>
using namespace std;

int main(){
    int A[4][5], terbesar;
    
    for (int i=1; i<=3; i++){
        for(int j=1; j<=4; j++){
            cout << "Masukkan A[" <<i<<"]["<<j<<"] = ";
            cin >> A[i][j];
        }
    }

    terbesar = A[1][1];            
    for (int i=1; i<=3; i++){
        for(int j=1; j<=4; j++){
            if(terbesar < A[i][j]){
                terbesar = A[i][j];
            }
        }
    }

    cout << "\nBilangan Terbesar pada Matriks = " << terbesar;
}