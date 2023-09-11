#include <iostream>
using namespace std;

int main(){

    int i, bil;
    i = 10;
    while ( i >= 5 ){
        bil = i * i;
        cout << i << " "<< bil <<endl;
        i = i - 1;
    }

    return 0;
}