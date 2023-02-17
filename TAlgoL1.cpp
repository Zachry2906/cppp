#include <iostream>
#include <stdio.h>
using namespace std;

int j,  i, k,  pilih, temp1, temp2;
int matriksA[3][3];
int matriksB[3][3];
int MatriksTotal[3][3];

void tampilHasil(){
    cout << MatriksTotal[0][0] << ' ' << MatriksTotal[0][1] << ' ' << MatriksTotal[0][2] << endl;
    cout << MatriksTotal[1][0] << ' ' << MatriksTotal[1][1] << ' ' << MatriksTotal[1][2] << endl;
    cout << MatriksTotal[2][0] << ' ' << MatriksTotal[2][1] << ' ' << MatriksTotal[2][2] << endl;
}
void inputMatriks(){
    cout << "MASUKKAN MATRIKS A" << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << "Matriks A " << '[' << i << ']' << '[' << j << ']' << ':';
            cin >> matriksA[i][j] ; 
        }
        
    }
    cout << endl;

        cout << "MASUKKAN MATRIKS B" << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << "Matriks B " << '[' << i << ']' << '[' << j << ']' << ':';
            cin >> matriksB[i][j] ; 
        }
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
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            MatriksTotal[i][j] = matriksA[i][j] - matriksB[i][j];
        }
        
    }
    tampilHasil();
}
void perkalian(){
    for(i=0; i<3; ++i)
        for(j=0; j<3; ++j) {
            MatriksTotal[i][j] = 0;
    }
        for(i=0; i<3; ++i)
            for(j=0; j<3; ++j)
                for(k=0; k<3; ++k) {
                    MatriksTotal[i][j]+= matriksA[i][k] * matriksB[k][j];
    }
    tampilHasil();
	}
void transpos(){
    cout << "MASUKKAN MATRIKS" << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << "Matriks " << '[' << i << ']' << '[' << j << ']' << ':';
            cin >> matriksA[i][j] ; 
        }
        
    }
    temp1 = matriksA[0][1];
    matriksA[0][1] = matriksA[1][0];
    matriksA[1][0] = temp1;

    temp2 = matriksA[0][2];
    matriksA[0][2] = matriksA[2][0];
    matriksA[2][0] = temp2;

    cout << matriksA[0][0] << ' ' << matriksA[0][1] << ' ' << matriksA[0][2] << endl;
    cout << matriksA[1][0] << ' ' << matriksA[1][1] << ' ' << matriksA[1][2] << endl;
    cout << matriksA[2][0] << ' ' << matriksA[2][1] << ' ' << matriksA[2][2] << endl;
}

int main (){
cout << "SELAMAT DATANG DI KALKULATOR MATRIKS 3x3" << endl;
cout << "Silahkan Pilih Menu Kalkulaior" << endl;
cout << "1. Pertambahan Matriks" << endl;
cout << "2. Pengurangan Matriks" << endl;
cout << "3. Perkalian Matriks" << endl;
cout << "4. Matriks Transpos" << endl;
cout << "Pilih : "; cin >> pilih ; 

if (pilih == 1)
{
    inputMatriks();
    pertambahan();
} else if ( pilih == 2) {
    inputMatriks();
    pengurangan();
} else if (pilih == 3) {
    inputMatriks();
    perkalian();
} else if (pilih == 4) {
    transpos();
}


return 0; }