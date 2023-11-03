#include <iostream>
using namespace std;

struct Mahasiswa{
    int nim;
    string nama;
    float uts;
    float uas;
    float final;
    char indeks;
};

int main(){
    Mahasiswa mhsw[6];

    for (int i = 1; i <= 5; i++)
    {
        cout << "Mahasiswa " << i <<endl;
        cout << "Nim \t= ";
        cin >> mhsw[i].nim;
        cout << "Nama\t= ";
        cin >> mhsw[i].nama;
        cout << "UTS \t= ";
        cin >> mhsw[i].uts;
        cout << "UAS \t= ";
        cin >> mhsw[i].uas;
        cout << endl;
    }

    for (int i = 1; i <= 5; i++)
    {
        mhsw[i].final = (0.4 * mhsw[i].uts) + (0.6 * mhsw[i].uas);

        if (mhsw[i].final >= 80)
        {
            mhsw[i].indeks = 'A';
        }
        else
        {
            if (mhsw[i].final >= 70)
            {
                mhsw[i].indeks = 'B';
            }
            else
            {
                if (mhsw[i].final >= 55)
                {
                    mhsw[i].indeks = 'C';
                }
                else
                {
                    if (mhsw[i].final >= 35)
                    {
                        mhsw[i].indeks = 'D';
                    }
                    else
                    {
                        mhsw[i].indeks = 'E';
                    }
                }
            }
        }
    }

    cout <<"\n---Output---\n";
    for (int i = 1; i <= 5; i++)
    {
        cout << "Mahasiswa " << i <<endl;
        cout << "Nim \t= " << mhsw[i].nim <<endl;
        cout << "Nama\t= " << mhsw[i].nama <<endl;
        cout << "UTS \t= " << mhsw[i].uts <<endl;
        cout << "UAS \t= " << mhsw[i].uas <<endl;
        cout << "Final\t= " << mhsw[i].final <<endl;
        cout << "Indeks\t= " << mhsw[i].indeks <<endl<<endl;
    }
    return 0;
}