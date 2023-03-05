#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int i;

int soal2(int n) {
    if (n == 1) {
        return 1;
    } else {
        int prev = soal2(n - 1);
        if (n % 2 == 0) {
            return prev - (2 * n - 1) - prev;
        } else {
            return prev + (2 * n - 1) - prev;
        }
    }
}

int soal4 (int i){
    if (i==1)
    {
        return 2;
    } else {
        return soal4(i-1)+2;
    }
    
}

int main (){
/*
2.   S = 1 - 3 + 5 - 7 + 9 - 11 + ... + (2 x i-1) x (-1)^(i-1)
4.   S = -1/2 - 1/4 - 1/6 + 1/8 - ... - ... - ... + ...
*/

    int x;
    int y;
    int menu;
    string ulang;


do{
    cout << endl;
    
cout << "PILIH MENU REKURSIF " << endl;
cout << "1. Soal no 2 : S = 1 - 3 + 5 - 7 + 9 - 11 + ..." << endl;
cout << "2. Soal no 4 : S = -1/2 - 1/4 - 1/6 + 1/8 - ... " << endl;
cout << "Menu : "; cin >> menu ; 
cout << endl;

    if (menu == 1)
    {
    cout << "Bilangan x : " ; cin >> x ; 
    cout << "hasil soal 2 : ";
    for ( i = 1; i <= x; i++)
    {
        cout << soal2(i) << ' ';
    }
    } else if (menu == 2){
    cout << "Bilangan y : " ; cin >> y ; 
    cout << "hasil soal 4 : ";
    for (int i = 1; i <= y; i++)
    {
        if (i % 4 == 0)
        {
            cout << "1/" << soal4(i) << " ";
        } else {
            cout << "-1/" << soal4(i) << " ";
        }
    }
    } else {
        cout << "Saya tidak membuat error handling" << endl;
    }
    cout << endl;
    
    cout << "Apakah anda ingin mengulang menu (ya/tidak): " ;
    cin >> ulang ; 
    
} while (ulang == "ya");

return 0; }