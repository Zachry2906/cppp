#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

string nama[30];
int anak[30];
string kontak[30];
int gaji[30];
string namaanak[30];
int karya;

void isidata(){
    cout << ">>>;>>>>>Silahkan INput Data Dengan Benar<<<<<<<<<<<" << endl;
    cout << "===================================================" << endl;
    cout << "Input Jumlah Karyawan : ";
    cin >> karya ; 
    for (int i = 1; i <= karya; i++)
    {
        cout << "Karaywan " << i << endl;
        cout << "INput nama \t: "; cin >> nama[i] ; 
        cout << "Kontak \t\t: " ; cin >> kontak[i] ;
        cout << "Jumlah anak\t : "; cin >> anak[i] ; 
        for (int j = 1; j <= anak[i]; j++)
        {
            cout << "\t Anak " << j << " \t: "; cin >> namaanak[i] ;
        }
        cout << endl;
    }
}

void tampildata(){
    cout << ">>>>>>>>>Berikut Daya Yang Telah Di INput <<<<<<<<<<<" << endl;
    cout << "===================================================" << endl;
    cout << "Total Karyawan: ";
    cout << karya << endl; 
    for (int i = 1; i <= karya; i++)
    {
        cout << "Karaywan " << i << endl;
        cout << "INput nama \t: "; cout << nama[i] << endl;
        cout << "Kontak \t\t: " ; cout <<kontak[i] << " ";
        string r = kontak[i].substr(0, 4);
        if (r == "0823")
        {
            cout << " [Kartu As Lama]" << endl;
        } else if (r == "0822")
        {
            cout << "[Simpati]" << endl;
        } else if (r == "0852")
        {
            cout << "[Kartu As Baru]" << endl;
        } else if (r == "0851")
        {
            cout << "[by.U]" << endl;
        } else if (r == "088")
        {
            cout << "[Smartfren]" << endl;
        } else if (r == "087")
        {
            cout << "[XL]" << endl;
        } else {
            cout << "[UNKOWN]" << endl;
        }
        
        cout << "Jumlah anak\t : "; cout <<anak[i] << endl; 
        for (int j = 1; j <= anak[i]; j++)
        {
            cout << "\t Anak " << j << " \t: "; cout << namaanak[j] << endl;
        }
    }
}

void tampilgaji(){
    for (int i = 1; i <= karya; i++)
    {
        cout << "Karaywan " << i << endl;
        cout << "Nama\t\t\t \t: "; cout << nama[i] << endl;
        cout << "Jumlah Tanggungan \t\t: " ; cout << anak[i] << endl; 
        gaji[i] = (5000000 * (anak[i] * 0.01)) + 5000000;
        cout << "Gaji\t\t\t \t: "; cout <<gaji[i] << endl; 
        cout << endl;
        
    }
}



int main (){
    int input;
    char ulang[2];
    bool kembalii;
    do {
    cout << "===========================================" << endl;
    cout << "|\t\t\t\t|" << endl;
    cout << "|\t \tPROGRAM KARYAWAN \t\t|" << endl;
    cout << "|\t\t KARYAWAN PT. INDAH \t\t|" << endl;
    cout << "|\t\t\t\t|" << endl;
    cout << "===========================================" << endl;
    cout << "1. INput data" << endl;
    cout << "2. Lihat Data" << endl;
    cout << "3. Perhitungan Gaji" << endl;
    cout << "4. Exit" << endl;
    cout << "Pilih Menu : " ; cin >> input ; 
    if (input == 1)
    {
        isidata();
    } else if (input == 2)
    {
        tampildata();
    } else if (input == 3){
        tampilgaji();
    } else if (input == 4)
    {
        cout << "Terimakasih sudah bermain!" << endl;
    }
    
    cout << endl;
    cout << "Kembali ke menu? (Y/N) : "; cin >> ulang;
    if (strcmp(ulang, "Y") == 0)
    {
    kembalii = true;
    } else {
    kembalii = false;
    }
    } while (kembalii == true);
    
return 0; }