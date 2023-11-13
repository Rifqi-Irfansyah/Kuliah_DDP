#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int A[6], i;
    i = 1;

    ifstream file("data.dat");
    if (file.is_open())
    {
        while (i <= 5 && file >> A[i]) {
            i++;
        }
        file.close();

        cout << "Isi Data Array" <<endl;
        for (int i = 1; i <= 5; i++) {
            cout << "A[" << i << "] = "<<A[i] << endl ;
        }
    }
    else{
        cerr << "Gagal membuka file" << endl;
        return 1;
    }

    return 0;
}
