#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main (){

char kalimat[255];

cout << "Masukkan Klimat : "; cin.get(kalimat, 255);
int j = strlen(kalimat);

cout << "Hasilnya : ";
for (int i = j-1; i >= 0; i--){
    if (kalimat[i] == 'a' || kalimat[i] == 'A')
    {
        cout << "x";
    } else if (kalimat[i] == 's' || kalimat[i] == 'S')
    {
        cout << "z";
    } else {
        cout << kalimat[i];
    }
}



return 0; }