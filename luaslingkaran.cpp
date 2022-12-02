#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    float keliling, luas, phi=3.14;
    int r;

    cout<<"MENGHITUNG KELILING DAN LUAS LINGKARAN";
    cout<<"Masukkan jari-jari lingkaran: ";
    cin>>r;

    keliling= 2*phi*r;
    luas = phi*r*r;

    cout<< "keliling = "<<keliling<<endl;
    cout<< "Luas Lingkaran = "<<luas<<endl;

    getch();
}