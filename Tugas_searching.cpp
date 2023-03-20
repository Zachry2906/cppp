#include <iostream>
#include <stdio.h>
using namespace std;
int jumlah = 0, tambahan;
int data[100];

void inputData();
void bubble_short (int array[], int size);
void cariData();
void tampilData();
void sequential();
void binary();


int main (){
int pilih;
string ulang;

cout << endl;
do {
    cout << "1. Input / tambah data" << endl;
    cout << "2. Cari data" << endl;
    cout << "3. Tampilkan data" << endl;
    cout << "PILIH MENU : "; cin >> pilih ; 
    cout << endl;
    
        if (pilih == 1)
        {
            inputData();
        } else if (pilih == 2)
        {
            cariData();
        } else if (pilih == 3)
        {
            tampilData();
        }
        cout << endl << "Apakah anda ingin kembali ke menu utama? (ya/tidak) : "; cin >> ulang ;
        cout << endl;
         
} while (ulang == "ya");
cout << "Terimakasih..." << endl;
return 0;
}

void inputData(){
    cout << "Jumlah input  : "; cin >> tambahan ; 
        for (int i = jumlah; i < jumlah+tambahan; i++)
        {
            cout << "Data ke-" << i+1 << " : ";
            cin >> ::data[i];
        }
        bubble_short(::data, jumlah+tambahan);

        jumlah = jumlah + tambahan;

}

void bubble_short (int array[], int size){
    int temp, i, j;

    for ( i = 0; i < size-1; i++)
    {
        for ( j = 0; j < size-1-i; j++)
        {
            if (array[j] > array[j+1])
            {
                temp = array[j];
                array[j] = array [j+1];
                array[j+1] = temp;
            }
            
        }
        
    }
    
    cout << "data yang sudah diurutkan : " << endl;
    for ( i = 0; i < size; i++)
    {
        cout << ::data[i] << " ";
    }
    
}


void cariData(){
    int menu2;
    cout << "Pilih Metode Search :  " << endl;
    cout << "2.1. Sequential Search" << endl;
    cout << "2.2. Binary Search" << endl;
    cout << "Pilih menu search : "; cin >> menu2 ; 
    cout << endl;
    
    if (menu2 ==1)
    {
        sequential();
    } else if (menu2)
    {
        binary();
    }
    
}

void sequential(){
    int x;
    int i = 0;
    bool status = false;

    cout << "Masukkan angka yang mau dicari : "; cin >> x ; 
        while ((i<jumlah) && (!status))
        {
            if (::data[i] == x)
            {
                status = true;
            }

            if(status){
                cout << "data " << x << " [telah] ditemukan di index ke- " << i << endl;
            } else {
                cout << "data " << x << " tidak ditemukan di index ke- " << i << endl;
                i = i + 1;
            }
            
        }
}

void binary(){
    int awal = 0, cari, tengah, akhir = jumlah;
    bool status = false;

    cout << "Nilai yang dicari : "; cin >> cari ; 

    while ((!status) && (awal <= akhir))
    {
        tengah = (awal + akhir)/2;
            if (cari == ::data[tengah])
            {
                status = true;
            } else {
                if (cari < ::data[tengah])
                {
                    akhir = tengah - 1;
                } else {
                    awal = tengah + 1;
                }
            }
            if (status)
            {
                cout << cari << " ditemukan dalam index ke- " << tengah << endl;
            }
    }
    if (!status)
    {
            cout << "tidak ada " << cari << " dalam array";
    }
}

void tampilData(){
    if (jumlah == 0)
    {
        cout << "Belum ada data!" << endl;
    }
    cout << "Menampilkan data" << endl << endl;
        for (int i = 0; i < jumlah; i++)
        {
            cout << "Data ke-" << i+1 << " : ";
            cout << ::data[i] << endl;
        }
}
