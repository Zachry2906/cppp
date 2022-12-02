#include <iostream>
#include <iomanip>
#include <stdio.h>

using namespace std;
int main()
{

    string nama, analogous, complementary, split, triadic, tetrad;
    string huruf;
    int nim, nomor;
    bool kondisi;

    // IDENTITAS
    cout << setfill('-') << setw(110) << "\n";
    cout << "\t\t\t Nama  :";
    getline(cin, nama);
    cout << "\t\t\t Nim : ";
    cin >> nim;
    cout << setfill('-') << setw(110) << "\n";

    // KATALOG WARNA
    cout << "Program Menetukan Notasi, Sifat Warna, dan Perpaduan Warna Harmonis Warna-warna :" << endl;
    cout << setfill(' ') << setw(10) << "\t1. Orange" << setw(10) << "\t2. Red-Orange" << setw(10) << "\t3. Red" << endl;
    cout << setw(10) << "\t4. Red-Violet" << setw(10) << "\t5. Violet" << setw(10) << "\t\t6. Blue-Violet" << endl;
    cout << setw(10) << "\t7. Blue" << setw(10) << "\t\t8. Blue-Green" << setw(10) << "\t\t9. Green" << endl;
    cout << setw(10) << "\t10. Yellow-Green" << setw(10) << "11. Yellow" << setw(10) << "\t\t12. Yellow-Orange" << endl
         << endl;

    // PEMILIHAN SIFAT WARNA
    cout << "Pilihan Warna Nomor :";
    cin >> nomor;

    // PERULANGAN JIKA NILAI YANG DIMASUKKAN BUKAN ANGKA
    do
    {
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(100, '\n');
            cout << "Mohon Masukkan Angka" << endl;
            cout << "Masukkan Nomor antara 1-12 untuk memilih Warna";
            cin >> nomor;
            kondisi = false;
        }
        else
        { // PERULANGAN JIKA NILAI YANG DIMASUKKAN >12
            if (nomor > 12)
            {
                cout << "Nomor yang tersedia hanya 1 Hingga 12" << endl;
                cout << "Masukkan Nomor antara 1-12 untuk memilih Warna" << endl;
                cin >> nomor;
                kondisi = false;
            }
            else
            {
                kondisi = true;
            }
        }
    } while (kondisi == false);

    // NOTASI WARNA, SIFAT WARNA, DAN DEKLARASI HARMIONISASI WARNA
    if (nomor == 1)
    {
        cout << "Notasi warna : Sekunder" << endl;
        cout << "Sifat warna : Hangat" << endl;
        analogous = "2,3 atau 11,12 atau 2,12";
        complementary = "7";
        split = "6,8";
        triadic = "5,9";
        tetrad = "4,7,10";
    }
    else
    {
        if (nomor == 2)
        {
            cout << "Notasi warna : Tersier" << endl;
            cout << "Sifat warna : Hangat" << endl;
            analogous = "3,4 atau 1,12 atau 1,3";
            complementary = "8";
            split = "7,9";
            triadic = "6,10";
            tetrad = "5,8,11";
        }
        else
        {
            if (nomor == 3)
            {
                cout << "Notasi warna : Primer" << endl;
                cout << "Sifat warna : Hangat" << endl;
                analogous = "4,5 atau 1,2 atau 2,4";
                complementary = "9";
                split = "8,10";
                triadic = "7,11";
                tetrad = "6,9,12";
            }
            else
            {
                if (nomor == 4)
                {
                    cout << "Notasi warna : Primer" << endl;
                    cout << "Sifat warna : Sejuk" << endl;
                    analogous = "2,3 atau 5,6 atau 3,5";
                    complementary = "10";
                    split = "9,11";
                    triadic = "8,12";
                    tetrad = "1,7,10";
                }
                else
                {
                    if (nomor == 5)
                    {
                        cout << "Notasi warna : Tersier" << endl;
                        cout << "Sifat warna : Sejuk" << endl;
                        analogous = "3,4 atau 6,7 atau 4,6";
                        complementary = "11";
                        split = "10,12";
                        triadic = "1,9";
                        tetrad = "2,8,11";
                    }
                    else
                    {
                        if (nomor == 6)
                        {
                            cout << "Notasi warna : Sekunder" << endl;
                            cout << "Sifat warna : Sejuk" << endl;
                            analogous = "4,5 atau 7,8 atau 5,7";
                            complementary = "12";
                            split = "1,11";
                            triadic = "2,10";
                            tetrad = "3,9,12";
                        }
                        else
                        {
                            if (nomor = 7)
                            {
                                cout << "Notasi warna : Primer" << endl;
                                cout << "Sifat warna : Sejuk" << endl;
                                analogous = "5,6 atau 8,9 atau 6,8";
                                complementary = "1";
                                split = "2,12";
                                triadic = "3,11";
                                tetrad = "1,4,10";
                            }
                            else
                            {
                                if (nomor = 8)
                                {
                                    cout << "Notasi warna : Tersier" << endl;
                                    cout << "Sifat warna : Sejuk" << endl;
                                    analogous = "6,7 atau 9,10 atau 7,9";
                                    complementary = "2";
                                    split = "1,3";
                                    triadic = "4,12";
                                    tetrad = "2,5,11";
                                }
                                else
                                {
                                    if (nomor = 9)
                                    {
                                        cout << "Notasi warna : Sekunder" << endl;
                                        cout << "Sifat warna : Sejuk" << endl;
                                        analogous = "7,8 atau 10,11 atau 8,10";
                                        complementary = "3";
                                        split = "2,4";
                                        triadic = "1,5";
                                        tetrad = "3,6,12";
                                    }
                                    else
                                    {
                                        if (nomor = 10)
                                        {
                                            cout << "Notasi warna : Tersier" << endl;
                                            cout << "Sifat warna : Sejuk" << endl;
                                            analogous = "8,9 atau 11,12 atau 9,11";
                                            complementary = "4";
                                            split = "3,5";
                                            triadic = "2,6";
                                            tetrad = "1,4,7";
                                        }
                                        else
                                        {
                                            if (nomor = 11)
                                            {
                                                cout << "Notasi warna : Primer" << endl;
                                                cout << "Sifat warna : Sejuk" << endl;
                                                analogous = "9,10 atau 1,12 atau 10,12";
                                                complementary = "5";
                                                split = "4,6";
                                                triadic = "3,7";
                                                tetrad = "2,8";
                                            }
                                            else
                                            {
                                                if (nomor = 12)
                                                {
                                                    cout << "Notasi warna : Teriser" << endl;
                                                    cout << "Sifat warna : Sejuk" << endl;
                                                    analogous = "10,11 atau 1,2 atau 1,11";
                                                    complementary = "6";
                                                    split = "5,7";
                                                    triadic = "4,8";
                                                    tetrad = "3,6,9";
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    // LIST PERPADUAN WARNA HARMONIS
    cout << "\n\nPerpaduan Warna Harmonis" << endl;
    cout << "a. Perpaduan Warna Analogus" << endl;
    cout << "b. Perpaduan Warna Complementary" << endl;
    cout << "c. Perpaduan Warna Split Complementary" << endl;
    cout << "d. Perpaduan Warna Triadic Complementary" << endl;
    cout << "e. Perpaduan Warna Tetrad Complementary" << endl;

    // PEMILIHAN PERPADUAN WARNA HARMONIS
    cout << "Pilihan Warna : ";
    cin >> huruf;

    // Koreksi data yang di input
    do
    { // PERULAGAN JIKA YANG DIMASUKKAN adalah angka
        if (huruf.length() != 1)
        {
            cin.clear();
            cin.ignore(100, '\n');
            cout << "Input salah, anda memasukkan angka" << endl;
            cout << "Silahkan memilih huruf a, b, c, d, atau e :";
            cin >> huruf;
            kondisi = false;
        }
        else
        { // PERULANGAN JIKA NILAI YANG DIMASUKKAN bukan a,b,c,d atau e
            if (huruf != "a" && huruf != "b" && huruf != "c" && huruf != "d" && huruf != "e")
            {
                cout << "Mohon Hanya Masukkan Huruf yang Tersedia" << endl;
                cout << "Pilih huruf a, b, c, d, atau e : ";
                cin >> huruf;
                kondisi = false;
            }
            else
            {
                kondisi = true;
            }
        }
    } while (kondisi == false);

    if (huruf == "a")
    {
        cout << "Perpaduan Warna Analogus Dengan Warna Nomor :\n"
             << analogous;
    }
    else
    {
        if (huruf == "b")
        {
            cout << "Perpaduan Warna Complementary Dengan Warna :\n"
                 << complementary;
        }
        else
        {
            if (huruf == "c")
            {
                cout << "Perpaduan Warna Split Complementary :\n"
                     << split;
            }
            else
            {
                if (huruf == "d")
                {
                    cout << "Perpaduan Warna Triadic Complemantary :\n"
                         << triadic;
                }
                else
                {
                    if (huruf == "e")
                    {
                        cout << "Perpaduan Warna Tetrad Complementary :\n"
                             << tetrad;
                    }
                }
            }
        }
    }
}