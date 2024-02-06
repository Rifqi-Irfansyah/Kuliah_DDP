#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    float X[11], temp;

    ifstream file("float.dat", ios::binary);
    if (file.is_open()) {
        for (int i = 1; i <= 10; i++) {
            file.read(reinterpret_cast<char*>(&X[i]), sizeof(float));
        }
        file.close();

        for (int j=1; j<=10; j++){
            for (int i=1; i<=9; i++)
            {
                if (X[i] < X[i+1])
                {
                    temp = X[i];
                    X[i] = X[i+1];
                    X[i+1] = temp;
                }
            }
        }

        cout << "Data terurut:" << endl;
        for (int i = 1; i <= 10; i++) 
        {
            cout << "Data " << i << " = " << X[i] << endl;
        }

    } else {
        cerr << "Gagal membuka file" << endl;
        return 1;
    }

    return 0;
}
