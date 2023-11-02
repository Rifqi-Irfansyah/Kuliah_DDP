#include <iostream>
using namespace std;

void tukar(int (&C)[], int (&D)[]){
    int temp, i;
    i = 1;
    while(i<=5){
        temp = C[i];
        C[i] = D[i];
        D[i] = temp;
        i = i + 1;
    }
    cout << "\n----Output Function----\n";
    i = 1;
    while(i<=5){
        cout << "A[" << i << "] = " << C[i] << endl;
        i = i + 1;
    }
    i = 1;
    while(i<=5){
        cout << "B[" << i << "] = " << D[i] << endl;
        i = i + 1;
    }
}

int main(){
    int A[6], B[6], i;
    i = 1;
    while(i<=5){
        cout << "A[" << i << "] = ";
        cin >> A[i];
        i = i + 1;
    }
    i = 1;
    while(i<=5){
        cout << "B[" << i << "] = ";
        cin >> B[i];
        i = i + 1;
    }
    
    tukar(A,B);

    cout << "\n----Output Main----\n";
    i = 1;
    while(i<=5){
        cout << "A[" << i << "] = " << A[i] << endl;
        i = i + 1;
    }
    i = 1;
    while(i<=5){
        cout << "B[" << i << "] = " << B[i] << endl;
        i = i + 1;
    }

    return 0;
}