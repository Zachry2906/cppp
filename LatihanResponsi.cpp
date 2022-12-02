//masih ada yang salah tidak bisa cin nama 2 kata dan nilai keluaran salah, hanya 1

#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <string.h>
using namespace std;

int m=0;

//PROTOTYPE
void baliknama();
//PROTOTYPE

//FUNCTION IPK
string ipkf(float nilai){
    if(nilai == 4.0){
        return "A";
    }else if(nilai <= 3.9 && nilai >=3){
        return "B";
    }else if(nilai <= 2.9 && nilai >=2){
        return "C";
    }else if(nilai <= 1.9 && nilai >=1){
        return "D";
    }else if(nilai <= 0.9 && nilai >=0){
        return "E";
    }
    return 0;
}
//FUNCRION IPK
int main (){
    int user, pilih, maha, max1, max2;
    max1 = 0;
    max2 = 0;
    float ratar, jumpk;
    jumpk = 0;
    bool userr, passs, jmaha, ipkk, kembalii;
    char kembali[30];
    array<string, 10> kelas;
    array<string, 10> nmaha;
    array<int, 10> nim;
    array<float, 10> ipk;
    string pass, nmax1, nmax2;

//BIODATA
cout << "Masukkan Username : "; cin >> user ; 
do {
if (user != 123)
{   
    userr = false;
    cout << "Username salah, silahkan coba lagi : "; cin >> user; 

} else {
    userr = true;
}
} while (userr == false);

cout << "Masukkan Password : "; cin >> pass ; 
do
{
    if (pass != "077")
{   
    passs = false;
    cout << "Password salah, silahkan coba lagi : "; cin >> pass; 
} else {
    passs = true;
}
} while (passs == false);
//BIODATA

//MENU
do {
cout << "============================================" << endl;
cout << "\t\tSELAMAT DATANG" << endl;
cout << "============================================" << endl;
cout << "MENU :" << endl;
cout << "1. Input Data Mahasiswa" << endl;
cout << "2. Tampilan Data Mahasiswa" << endl;
cout << "3. Nama Terbalik" << endl;
cout << "Pilihan : "; cin >> pilih ; 
if (pilih == 1)
{
    cout << "==== INPUT DATA ====" << endl;
    cout << "Masukkan jumlah mahasiswa : "; cin >> maha ; 
        do
        { 
        if (maha >= 3)
        {
        jmaha = true;
        for (int i = m; i < maha+m; i++)
        {   
        cout << "Mahasiswa ke-" << i+1 << endl;
        cin.ignore();
        cout << "Nama Mahasiswa\t : "; getline(cin, nmaha[i]);
        cout << "NIM Mahasiswa\t : " ; cin >> nim[i] ;
        cout << "Kelas Mahasiswa\t : ";cin >> kelas[i] ;
        do {
        cout << "IPK Mahasiswa\t : "; cin >> ipk[i] ;
        if (ipk[i] > 4 || ipk[i] < 0)
        {
            ipkk = false;
            cout << "Nilai IPK yang anda masukkan salah!" << endl;
            cout << "Masukkan nilai IPK antara 0-4 : ";
            cout << endl;
            
        } else {
            ipkk = true;
        } } while (ipkk == false); 
        cout << endl;
        }
        m = m+maha;
        }
        else if (maha < 3)
        { 
            jmaha = false;
            cout << "Jumlah mahasiswa yang dimasukkan minimal 3" << endl;
            cout << "Masukkan Jumlah mahasiswa : "; cin >> maha ; 
        }
        } while (jmaha == false);

//TAMPILAN MAHASISWA
}else if (pilih == 2){
        if(nmaha[1] == ""){
        cout << "Maaf data mahasiwa belum diisi" << endl;
        } else {
        cout << "==== TAMPILAN DATA ====" << endl;
        for (int i = 1; i <= maha; i++)
        {   
        cout << "Mahasiswa ke-" << i << endl;
        cout << "Nama Mahasiswa\t : " << nmaha[i] << endl;
        cout << "NIM Mahasiswa\t : " << nim[i] << endl;
        cout << "Kelas Mahasiswa\t : " <<  kelas[i] << endl;
        cout << "IPK Mahasiswa\t : " << ipk[i];
        cout << " (" << ipkf(ipk[i]) << ")";
        if (ipk[i] > max1)
        {
            max1 = ipk[i];
            nmax1 = nmaha[i];
        } else if (ipk[i] < max1)
        {
            max2 = ipk[i];
            nmax2 = nmaha[i];
        }
        jumpk = jumpk + ipk[i];
        cout << endl << endl;
        }
        ratar = jumpk / maha;
        cout << "IPK TERBESAR PERTAMA : " << nmax1 << endl;
        cout << "IPK TERBESAR KEDUA : " << nmax2 << endl;
        cout << "RATA-RATA IPK : " << ratar << endl;
        
        }
//TAMPILAN MAHASISWA

}else if (pilih == 3)
{
    baliknama();
}
//MENU

//PERULANGAN MENU
cout << endl;
cout << "Kembali ke menu? (Y/N) : "; cin >> kembali;
if (strcmp(kembali, "Y") == 0)
{
    kembalii = true;
} else {
    kembalii = false;
}
} while (kembalii == true);
//PERULANGAN MENU

return 0; 
} 

//FUNGDI BALIKNAMA
void baliknama () {
    int i,j, count;
    char nama[30];

    cout << "==== PROGRAM BALIK NAMA ====" << endl;
    cout << "\n\nMasukkan nama Anda = "; cin.ignore (); cin.getline(nama,sizeof(nama));
    cout << endl;
    for (i=0; i<=nama[i] ; i++)
    {
    count = i+1;
    }
    cout << "Nama terbalik anda = "; 
    for (j = count; j >= 0; j--)
    {
        if (nama[j] == 'a')
    {
        cout << "x";
    } else if (nama[j] == 's')
    {
        cout << "z";
    } else {
    cout << nama[j];
    }
    }
}
//FUNGSI BALIKNAMA