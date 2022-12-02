#include <iostream>
#include <iomanip>
#include <stdio.h>

using namespace std;
int main()
{
    string jejang, dudiwal, koprod, prodi, tahmas;
    bool kondisi;

    cout << "Jejang Studi\t :";
    cin >> jejang;

    if (jejang == "S1" || jejang == "s1")
    {
        dudiwal = "12";

        cin.ignore();
        cout << "Program Studi\t :";
        getline(cin, prodi);
        if (prodi == "Teknik Kimia")
        {
            koprod = "1";
        }
        else
        {
            if (prodi == "Teknik Industri")
            {
                koprod = "2";
            }
            else
            {
                if (prodi == "Informatika")
                {
                    koprod = "3";
                }
                else
                {
                    if (prodi == "Sistem Informasi")
                    {
                        koprod = "4";
                    }
                }
            }
        }
        cout << "Tahun Masuk\t :";
        cin >> tahmas;
        cout << "NIM\t\t :" << dudiwal << koprod << tahmas[2] << tahmas[3] << "0";
        kondisi = true;
    }
    else if (jejang == "D3" || jejang == "d3")
    {
        dudiwal = "021";
        cout << "tahun Masuk :\t";
        cin >> tahmas;
        cout << "NIM :" << dudiwal << tahmas[2] << tahmas[3] << "0";
        kondisi = true;
    }
}

// masih banyak yang kurang seperti salah input dan lain-lain