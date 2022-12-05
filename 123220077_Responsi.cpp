#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

	string nama[30];
	int harga[30];
	int menu;
    int banyak[30], mana[30];
    int mahal = 0;
    int murah = 0;
    string status = " ";
    int j = 1;
    int beli;
    int total = 0;

void tambahmenu(){
    cout << endl;
    cout << "Masukkan Jumlah Menu Yang ingin Ditambahkan : "; cin >> menu ; 
    for (int i = 1; i <= menu; i++)
    {
    cin.ignore();
    cout << "Nama : "; getline(cin, nama[i]) ; 
    cout << "Harga :"; cin >> harga[i] ; 
    if (harga[i] > mahal)
    {
        mahal = harga[i];
    }
    if (i == 1)
    {
        if (harga[i] > murah)
    {
        murah = harga[i];
    }
    } else {
        if (harga[i] < murah)
        {
            murah = harga[i];
        }
    }
    

    cout << endl;
    }
    cout << "Produk Ditambahkan!" << endl;
}

void tampilmenu(){
    cout << endl;
    for (int i = 1; i <= menu; i++)
    {
    cout << i  << ". \t\t" << nama[i] << status << endl;
    cout << "\t\tRp. " << harga[i] << endl;
    }
    cout << "Berapa menu yang ingin dibeli : "; cin >> beli ;
    
    for (int j = 1; j <= beli; j++)
    {
    cout << "Pilih \t: "; cin >> mana[j]; 
    cout << "Banyak \t: "; cin >> banyak[j];
    total = total + harga[mana[j]]*banyak[j];
    cout << endl;
    }
    cout << "Total Harga : Rp." << total << endl;
    cout << "Pembelian Berhasil!" << endl;
}

void nilaibesar(){
    cout << endl;
    for (int i = 1; i <= menu; i++)
    {
    cout << i << ". \t\t" << nama[i];
    if (mahal == harga[i])
    {
        cout << " [ PRODUK PALING MAHAL ]" << endl;
    }
    cout << "\t\tRp. " << harga[i] << endl;
    } 
}

void nilaikecil (){
    cout << endl;
    
    for (int i = 1; i <= menu; i++)
    {
    cout << i  << ". \t\t" << nama[i];
    if (murah == harga[i])
    {
        cout << " [ PRODUK PALING MURAH ]" << endl;
    }
    cout << "\t\tRp. " << harga[i] << endl;
    } 
}



int main (){
    string username, password;
    bool login, ok, pilih1;
    int pilih;
    char utama;

do{
cout << "Siliahkan Login Untuk Mengakses menu" << endl;
cout << "Username : ";
cin >> username ; 
cout << "Password : ";
cin >> password ; 
if (password == "123" && username == "123")
{
    cout << "Login Berhasil" << endl;
    login = true;
} else {
    cout << "Login gagal, silahkan ulangi lagi" << endl;
    login = false;
}
} while (login == false);

do {
cout << endl;
cout << "\t\tBURJO KEREN" << endl;
cout << "1. Tambah Menu" << endl;
cout << "2. Pembelian" << endl;
cout << "3. Produk Termahal" << endl;
cout << "4. Produk Termurah" << endl;
cout << "Pilih : "; cin >> pilih ; 
do {
if (pilih == 1)
{
    tambahmenu();
    pilih1 = true;
} else if (pilih == 2)
{
    tampilmenu();
    pilih1 = true;
} else if (pilih == 3)
{
    nilaibesar();
    pilih1 = true;
} else if (pilih == 4)
{
    nilaikecil();
    pilih1 = true;
} else {
    cout << "Pilihan salah, coba lagi" << endl;
    pilih1 = false;
    cout << "Pilih :"; cin >> pilih;
}
} while ( pilih1 == false);

cout << "Apakah Anda ingin ualng ke menu utama? (y/n)";
cin >> utama ; 
if (utama == 'y')
{
    ok = true;  
} else if (utama == 'n'){
    cout << "Terimakasih" << endl;
    ok = false;
}

} while (ok == true);


return 0; }
