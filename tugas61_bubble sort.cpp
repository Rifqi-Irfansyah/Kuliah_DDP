#include <iostream>
using namespace std;

int main() {
    int A[6], temp;
    bool swap;

    for (int i=1; i<=5; i++){
        cout <<"Masukkan A[" <<i<<"] = ";
        cin >> A[i];
    }

    for (int j=1; j<=5; j++){
        swap = false;
        for (int i=1; i<=4; i++)
        {
            if (A[i] > A[i+1])
            {
                temp = A[i];
                A[i] = A[i+1];
                A[i+1] = temp;
                swap = true;
            }
        }
        if (swap == false){
            cout << "\nTotal Step = " <<j <<endl;
            break;
        }
    }

    cout <<"---Hasil Ascending---\n";
    for (int i=1; i<=5; i++){
        cout <<"A[" <<i<<"] = " <<A[i] <<endl;
    }

    return 0;
}