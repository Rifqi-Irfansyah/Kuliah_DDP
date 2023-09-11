#include <iostream>
using namespace std;

int main(){

    int bil, pengurangan, i;
    bil = 100;
    pengurangan = 19;
    i = 10;
    while ( i >= 5 ){
        cout << i << " "<< bil <<endl;
        bil = bil - pengurangan;
        pengurangan = pengurangan - 2;
        i = i - 1;
    }

    return 0;
}