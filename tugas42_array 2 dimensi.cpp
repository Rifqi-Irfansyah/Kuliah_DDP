#include <iostream>
using namespace std;

int main(){
    int A[4][4], i, j;

    i = 1;
    while(i<=3){
        j = 1;
        while(j<=3){
            cout << "A [" << i << "][" << j << "] = ";
            cin >> A[i][j];
            j = j + 1;
        }
        i = i + 1;
    }
    cout << "-----------------------------" <<endl;
    i = 1;
    while(i<=3){
        j = 1;
        while(j<=3){
            cout << "A [" << i << "][" << j << "] = " << A[i][j]  <<endl;
            j = j + 1;
        }
        i = i + 1;
    }
    return 0;
}