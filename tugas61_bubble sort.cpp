#include <iostream>
using namespace std;

int bubblesort(int (&A)[]){
    bool swap;
    int temp;
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
    return A[6];
}

int main() {
    int A[6];

    for (int i=1; i<=5; i++){
        cout <<"Masukkan A[" <<i<<"] = ";
        cin >> A[i];
    }

    bubblesort(A);

    cout <<"---Hasil Ascending---\n";
    for (int i=1; i<=5; i++){
        cout <<"A[" <<i<<"] = " <<A[i] <<endl;
    }

    return 0;
}