#include <iostream>
using namespace std;
void tulis(int n);

int main()
{
    tulis(45);
    return 0;
}

void tulis(int n)
{
    int i;
    i = 1;
    while (i<=n){
        cout << "*";
        i = i + 1;
    }
}