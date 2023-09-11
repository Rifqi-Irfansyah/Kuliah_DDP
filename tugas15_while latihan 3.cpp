#include <iostream>
using namespace std;

int main(){

    int bil, pengurangan, i;
    bil = 100;
    pengurangan = 10;
    i = 1;
    while ( i <= 7 ){
        cout << bil <<endl;
        bil = bil - pengurangan;
        pengurangan = pengurangan - 1;
        i = i + 1;
    }

    return 0;
}