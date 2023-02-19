#include <iostream>
#include <stdio.h>
using namespace std;

int j,  i, k,  pilih, temp1, temp2, baris, kolom;
    int barisA, barisB, kolomA, kolomB;
int matriksA[10][10];
int matriksB[10][10];
int MatriksTotal[10][10];
string ulang;

void tampilHasil(){
   for(i=0; i<baris; ++i) {
      for(j=0; j<baris; ++j)
      cout<<MatriksTotal[i][j]<<" ";
      cout<<endl;
   }
}
void inputTambahKurang(){
    cout << "Perhatian Pertambahan dan penjumlahan hanya bisa dilakukan dengan ordo yang sama" << endl;
    cout << "Masukkan banyak baris dan kolom : ";
    cin >> baris;
    cout << "MASUKKAN MATRIKS A" << endl;
    for (i = 0; i < baris; i++)
    {
        for (j = 0; j < baris ;j++)
        {
            cout << "Matriks A " << '[' << i << ']' << '[' << j << ']' << ':';
            cin >> matriksA[i][j] ; 
        }
        
    }
    cout << endl;

        cout << "MASUKKAN MATRIKS B" << endl;
    for (i = 0; i < baris; i++)
    {
        for (j = 0; j < baris; j++)
        {
            cout << "Matriks B " << '[' << i << ']' << '[' << j << ']' << ':';
            cin >> matriksB[i][j] ; 
        }
    }
}
void inputKali(){
    cout << "Perhatian, jumlah kolom matriks pertama harus sama dengan jumlah baris kolom kedua" << endl;
    
    cout << "Masukkan banyak baris A : ";
    cin >> barisA;
    cout << "Masukkan jumlah kolom A : ";
    cin >> kolomA;
    cout << "MASUKKAN MATRIKS A" << endl;
    for (i = 0; i < barisA; i++)
    {
        for (j = 0; j < kolomA; j++)
        {
            cout << "Matriks A " << '[' << i << ']' << '[' << j << ']' << ':';
            cin >> matriksA[i][j] ; 
        }
        
    }
    cout << endl;

    cout << "Masukkan banyak baris B : ";
    cin >> barisB;
    cout << "Masukkan jumlah kolom B : ";
    cin >> kolomB;
    cout << "MASUKKAN MATRIKS B" << endl;
    for (i = 0; i < barisB; i++)
    {
        for (j = 0; j < kolomB; j++)
        {
            cout << "Matriks B " << '[' << i << ']' << '[' << j << ']' << ':';
            cin >> matriksB[i][j] ; 
        }
    }

    for(i = 0; i < barisA; ++i)
        for(j = 0; j < kolomB; ++j)
        {
            MatriksTotal[i][j]=0;
        }

    for(i = 0; i < barisA; ++i)
        for(j = 0; j < kolomB; ++j)
            for(k = 0; k < kolomA; ++k)
            {
                MatriksTotal[i][j] += matriksA[i][k] * matriksB[k][j];
            }

   for(i=0; i<barisA; ++i) {
      for(j=0; j<kolomB; ++j)
      cout<<MatriksTotal[i][j]<<" ";
      cout<<endl;
   }
}
void pertambahan(){
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            MatriksTotal[i][j] = matriksA[i][j] + matriksB[i][j];
        }
        
    }
    tampilHasil();
}
void pengurangan(){
    for ( i = 0; i < baris; i++)
    {
        for ( j = 0; j < baris; j++)
        {
            MatriksTotal[i][j] = matriksA[i][j] - matriksB[i][j];
        }
        
    }
    tampilHasil();
}
void transpos(){
    cout << "Masukkan banyak kolom (mendatar) : ";
    cin >> kolom;
    cout << "Masukkan jumlah baris (turun) : ";
    cin >> baris;
    cout << "MASUKKAN MATRIKS" << endl;
    for (i = 0; i < baris; i++)
    {
        for (j = 0; j < kolom; j++)
        {
            cout << "Matriks " << '[' << i << ']' << '[' << j << ']' << ':';
            cin >> matriksA[i][j] ; 
        }
    }
    cout << endl;
        for( i = 0; i < baris; ++i){
            for( j = 0; j < kolom; ++j) {
        MatriksTotal[j][i] = matriksA[i][j];
        }
    }
    cout<<"Transposnya adalah : "<<endl;
        for( i = 0; i < kolom; ++i) {
            for( j = 0; j < baris; ++j) {
        cout << MatriksTotal[i][j] << " ";
        }
        cout << endl;
        
}
}

int main (){

do {
cout << "SELAMAT DATANG DI KALKULATOR MATRIKS" << endl;
cout << "Silahkan Pilih Menu Kalkulaior" << endl;
cout << "1. Pertambahan Matriks " << endl;
cout << "2. Pengurangan Matriks " << endl;
cout << "3. Perkalian Matriks" << endl;
cout << "4. Matriks Transpos" << endl;
cout << "Pilih : "; cin >> pilih ; 

if (pilih == 1)
{
    inputTambahKurang();
    pertambahan();
} else if ( pilih == 2) {
    inputTambahKurang();
    pengurangan();
} else if (pilih == 3) {
    inputKali();
} else if (pilih == 4) {
    transpos();
}
cout << endl;

cout << "Apakah anda ingin menghitung ulsng? ya/tidak" << endl;
cin >> ulang; 

} while (ulang == "ya");

cout << "terimakasih sudah mencoba" << endl;

return 0; }