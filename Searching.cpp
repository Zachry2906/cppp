// #include <iostream>
// #include <stdio.h>
// using namespace std;

// int main (){
// int data[10] = {10, 5, 6, 8, 7, 4, 3, 1, 9};
// int x;
// int i = 0;
// bool status = false;

// cout << "Masukkan angka yang mau dicari : "; cin >> x ; 

// while ((i<10) && (!status))
// {
//     if (data[i] == x)
//     {
//         status = true;
//     }

//     if(status){
//         cout << "data " << x << " telah ditemukan di index ke- " << i << endl;
//     } else {
//         cout << "data " << x << " tidak ditemukan di index ke- " << i << endl;
//         i = i + 1;
//     }
    
// }

// return 0; }

// #include <iostream>
// #include <stdio.h>
// using namespace std;

// int main (){
// int data[11] = {10, 5, 6, 8, 7, 4, 3, 1, 9};
// int nilai;
// int i = 0;
// int assign = 0;

// cout << "Masukkan angka yang mau dicari : "; cin >> nilai ;
// data[10] = nilai; 

// while (( data[i] != nilai))
// {
//     i = i + 1;
//     if( i == 10 ){
//         cout << "data " << nilai << " TIDAK ditemukan di index ke- " << i << endl;
//     } else if (data[i] == nilai) {
//         assign = i;
//     }
// }
//     if(assign != 0){
//     cout << "data " << nilai << " ditemukan di index ke- " << assign << endl;
//     }

// return 0; }

#include <iostream>
#include <stdio.h>
using namespace std;

int main (){

int data[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
int awal = 0, cari, tengah, akhir = 10;
bool silit = false;

cout << "Nilai yang dicari : "; cin >> cari ; 

while ((!silit) && (awal <= akhir))
{
    tengah = (awal + akhir)/2;
    if (cari == data[tengah])
    {
        silit = true;
    } else {
        if (cari < data[tengah])
        {
            akhir = tengah - 1;
        } else {
            awal = tengah + 1;
        }
    }
    if (silit)
    {
        cout << cari << " ditemukan dalam index ke- " << tengah << endl;
    }
}
 if (!silit)
 {
        cout << "tidak ada " << cari << " dalam array";

 }
 

return 0; }