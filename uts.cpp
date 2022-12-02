#include <iostream>
#include <stdio.h>
using namespace std;

int main (){
int nomenu, noporsi, harga, hartot, makanditempat, totpes, jumlah, kembalian, bayar;
string pajak, nama, nopesanan, idpembeli, diskon1;

cout << "Nama : ";
cin >> nama ; 
cout << "id pembeli : ";
cin >> idpembeli;
cout << "no pesanan : " ;
cin >> nopesanan;
cout << endl;

cout << "Pilih menu makanan :" << endl;
cout << "1. Cap cay goreng" << endl;
cout << "2. Kakap asam manis" << endl;
cout << "3. Ayam goreng" << endl << endl;
cout << "No menu : ";
cin >> nomenu ; 
    cout << endl;
if (nomenu == 1)
{
    cout << "1. Porsi kecil : 15.000" << endl;
    cout << "2. Porsi sedang : 20.000" << endl;
    cout << "3. Porsi besar : 25.000" << endl;
    cout << "Masukkan nomor porsi : ";
    cin >> noporsi;
        cout << endl;
    if (noporsi == 1)
    {
        harga = 15000;
    } else if (noporsi == 2)
    {
        harga = 20000;
    } else if (noporsi == 3)
    {
        harga = 25000;
    }

} else if (nomenu == 2)
{
    cout << "1. Porsi kecil : 30.000" << endl;
    cout << "2. Porsi sedang : 40.000" << endl;
    cout << "3. Porsi besar : 50.000" << endl;
    cout << "Masukkan nomor porsi : ";
    cin >> noporsi; 
        cout << endl;
    if (noporsi == 1)
    {
        harga = 30000;
    } else if (noporsi == 2)
    {
        harga = 40000;
    } else if (noporsi == 3)
    {
        harga = 50000 * 0.05;
        diskon1 = "5%";
    } 

}
else if (nomenu == 3)
{
    cout << "1. Porsi kecil : 10.000" << endl;
    cout << "2. Porsi sedang : 15.000" << endl;
    cout << "3. Porsi besar : 20.000" << endl;
    cout << "Masukkan nomor porsi : ";
    cin >> noporsi; 
        cout << endl;
    if (noporsi == 1)
    {
        harga = 10000;
    } else if (noporsi == 2)
    {
        harga = 15000;
    } else if (noporsi == 3)
    {
        harga = 20000;
    } 
}
    cout << "banyak pesanan :" ;
    cin >> jumlah ; 
    

    cout << "Apakah anda makan ditempat? " << endl;
    cout << "1. IYA" << endl;
    cout << "2. TIDAK" << endl;
    cout << "No : ";
    
    cin >> makanditempat ; 
    if (makanditempat == 1)
    {
        cout << "diskon = 10%" << endl;
        pajak = "10%";
        hartot = harga * 0.1 * jumlah;
    } else if (makanditempat == 2)
    {
        hartot = harga * jumlah; 
        pajak = "0%";
    } 
    cout << "Total Pembayaran : ";
    cin >> bayar ; 
    kembalian = bayar - hartot;


    cout << "Total Harga : " << hartot <<endl;
    cout << "Pajak : " << pajak <<endl;
    cout << "Diskon : " << diskon1 <<endl;
    cout << "Bayar : " << bayar <<endl;
    cout << "Kembalian : " << kembalian << endl;
    


return 0;
} 