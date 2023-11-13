#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int A[6], i;

    ofstream file("data.dat");
    if (file.is_open())
    {
        for (i = 1; i <= 5; i++)
        {
            cout << "A[" << i << "] = ";
            cin >> A[i];
            file << A[i] << " ";
        }
        file.close();
        cout << "Data telah disimpan ke file Biner: data.dat" << endl;
    }
    
    else{
        cerr << "Gagal membuka file" << endl;
        return 1;
    }

    return 0;
}
