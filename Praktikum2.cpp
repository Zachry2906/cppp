// #include <iostream>
// #include <limits>

// using namespace std;

// int main()
// {
//     cout << "ukuran sebuah 'short' :" << sizeof(short) << "byte" << endl;
//     cout << "min nilai 'short' : " << numeric_limits<short>::min() << endl;
//     cout << "max nilai 'short' : " << numeric_limits<short>::max() << endl
//          << endl;
//     cout << "ukuran sebuah 'int' :" << sizeof(short) << "byte" << endl;
//     cout << "min nilai 'int' : " << numeric_limits<int>::min() << endl;
//     cout << "max nilai 'int' : " << numeric_limits<int>::max() << endl
//          << endl;
//     cout << "ukuran sebuah 'long long' :" << sizeof(short) << "byte" << endl;
//     cout << "min nilai 'long long' : " << numeric_limits<long long>::min() << endl;
//     cout << "max nilai 'long long' : " << numeric_limits<long long>::max() << endl
//          << endl;

// Pertemuan 2 Peart 2
// cin gabsa buat 2 kata pake getline buat 2 kata atau lebih, cin.ignore unruk membatasi biar ga auto kebawah

// #include <stdio.h>

// int main()
// {

//     int angka;
//     printf("Masukkan angka: ");
//     scanf("%d", &angka);
//     printf("Angka=%d", angka);

//     return 0;
// }

#include <iostream>

using namespace std;

int main()
{

    int a, b, hasil1, hasil2;

    // cout << "masukkan a :";
    // cin >> a;
    // cout << "masukkan b :";
    // cin >> b;

    // jumlah = a + b;
    // cout << "Hasilny adalah " << jumlah << endl;

    cout << "pembagian" << endl;
    cin >> a >> b;
    hasil1 = a / b;
    cout << hasil1;

    cout << "sisa" << endl;
    cin >> a >> b;
    hasil1 = a % b;
    cout << hasil2;

    cout << "Hasil pembagian" << hasil1 << endl;
    cout << "Hasil sisa" << hasil2 << endl;

    return 0;
}
