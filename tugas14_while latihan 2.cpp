#include <iostream>
using namespace std;

int main(){

    int bil, i;
    bil = 90;
    i = 1;
    while ( i <= 6 ){
        cout << bil <<endl;
        bil = bil - 10;
        i = i + 1;
    }

    return 0;
}