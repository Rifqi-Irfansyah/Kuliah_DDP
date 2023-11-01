#include <iostream>
using namespace std;

void bintang(){
    int i, j, batasj, bil;
    bil = 6;
    batasj = bil;
    i = 1;
    while(i <= bil)
    {
        j = 1;
        while (j <= batasj){
            cout << "*";
            j = j + 1;
        }
        cout << endl;
        batasj = batasj - 1;
        i = i + 1;
    }
}

int main(){
    bintang();
}