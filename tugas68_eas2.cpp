#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    float X[11];

    for (int i = 1; i <= 10; i++) {
        cout << "Data " << i << " = ";
        cin >> X[i];
    }

    ofstream file("float.dat", ios::binary);
    if (file.is_open()) {
        for (int i = 1; i <= 10; i++) {
            file.write(reinterpret_cast<char*>(&X[i]), sizeof(float));
        }

        file.close();
    } else {
        cerr << "Gagal membuka file" << endl;
        return 1;
    }

    return 0;
}
