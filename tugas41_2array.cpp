#include <iostream>
using namespace std;

int main(){
    int A[6], B[6], temp, i;

    i = 1;
    while(i<=5)
    {
        cout << "A[" << i << "] = ";
        cin >> A[i];
        i = i + 1;
    }

    i = 1;
    while(i<=5)
    {
        cout << "B[" << i << "] = ";
        cin >> B[i];
        i = i + 1;
    }

    i = 1;
    while(i<=5)
    {
        temp = A[i];
        A[i] = B[i];
        B[i] = temp;
        i = i + 1;
    }

    cout << "-------------------------------"<<endl;

    i = 1;
    while(i<=5)
    {
        cout << "A["<< i << "] = " << A[i] <<endl;
        i = i + 1;
    }

    i = 1;
    while(i<=5)
    {
        cout << "B["<< i << "] = " << B[i] <<endl;
        i = i + 1;
    }

    return 0;
}