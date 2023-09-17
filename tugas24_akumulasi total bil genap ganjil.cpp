#include <iostream>
using namespace std;

int main(){

    int bil, total_genap, total_ganjil, i;
    total_genap = 0;
    total_ganjil = 0;
    i = 1;

    while (i <= 5)
    {
        cout << "Bilangan ke-" << i << ": " ;
        cin >> bil;
        if (bil % 2 == 0)
        {
            total_genap = total_genap + bil;
        }
        else
        {
            total_ganjil = total_ganjil + bil;
        }
        i = i + 1;
    }

    cout << "Total Penjumlahan Bilangan Genap  = " << total_genap <<endl ;
    cout << "Total Penjumlahan Bilangan Ganjil = " << total_ganjil ;

    return 0;
}