#include <iostream>
#include <stdio.h>
using namespace std;

int aritmatika (int satu, int dua, int tiga, char operasi){
    int hasil;
    if (operasi == '+')
    {
        hasil = satu + dua + tiga;
        return hasil;
    } else if (operasi == '-')
    {
        hasil = satu - dua - tiga;
        return hasil;
    } else if (operasi == '*')
    {
        hasil = satu * dua * tiga;
        return hasil;
    }
    return 0;
}



int main (){
    int satu, dua, tiga;
    char operasi;
cout << "Masukkan bilangan pertama : "; cin >> satu ; 
cout << "Msukkan bilangan kedua : "; cin >> dua ; 
cout << "Masukkan bilangan ketiga : "; cin >> tiga ; 
cout << endl;

cout << "=========================================================" << endl;
cout << "Mohon hanya memilih operasi pada opsi char yang disediakan" << endl;
cout << "Saya tidak membuat program untuk kesalahan input user, terimakasih" << endl;
cout << "=========================================================" << endl << endl;
cout << "Pilih operasi ( +, -, atau *) : "; cin >> operasi ; 

cout << "Hasilnya adalah : "<< aritmatika(satu, dua, tiga, operasi);



return 0; }