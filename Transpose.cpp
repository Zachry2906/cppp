#include <iostream>
#include <stdio.h>
using namespace std;

int i, j, kolom, baris;
int matriksA[10][10];
int MatriksTotal[10][10];

int main (){

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

return 0; }