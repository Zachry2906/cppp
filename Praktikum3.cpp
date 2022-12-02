#include <iostream>
#include <iomanip>
#include <stdio.h>

using namespace std;
int main()
{
    int latihan[3][3];

    cin >> latihan[0][0];
    cout << " = Nilai yang di input : " << latihan[0][0] << endl;
    cin >> latihan[0][1];
    cout << "= Nilai yang di input : " << latihan[0][1] << endl;
    cin >> latihan[0][2];
    cout << "= Nilai yang di input : " << latihan[0][2] << endl;
    cin >> latihan[1][0];
    cout << "= Nilai yang di input : " << latihan[1][0] << endl;
    cin >> latihan[1][1];
    cout << "= Nilai yang di input : " << latihan[1][1] << endl;
    cin >> latihan[1][2];
    cout << "= Nilai yang di input : " << latihan[1][2] << endl;
    cin >> latihan[2][0];
    cout << "= Nilai yang di input : " << latihan[2][0] << endl;
    cin >> latihan[2][1];
    cout << "= Nilai yang di input : " << latihan[2][1] << endl;
    cin >> latihan[2][2];
    cout << "= Nilai yang di input : " << latihan[2][2] << endl
         << endl;

    cout << latihan[0][0] << " | " << latihan[0][1] << " | " << latihan[0][2] << endl;
    cout << latihan[1][0] << " | " << latihan[1][1] << " | " << latihan[1][2] << endl;
    cout << latihan[2][0] << " | " << latihan[2][1] << " | " << latihan[2][2] << endl;

    cout << "isi dari array 3x3 : " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int p = 0; p < 3; p++)
        {
            cout << latihan[i][p];
        }
    }

    return 0;
}