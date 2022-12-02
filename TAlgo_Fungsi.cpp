#include <iostream>
#include <cmath>
using namespace std;

void konversi(int bilangan, int *jam, int *menit, int *detik);

int main (){
int bilangan, jam, menit, detik;
cout << "Bilangan : ";
cin >> bilangan ; 

konversi(bilangan, &jam, &menit, &detik);
}

void konversi(int bilangan, int *jam, int *menit, int *detik){
*jam = floor(bilangan / 3600);
*menit = (bilangan % 3600) / 60;
*detik =  (bilangan % 3600) % 60;

cout << "BIlangan = " << bilangan << endl;
cout << bilangan << " detik = " << *jam << " jam " << *menit << " menit " << *detik << " detik";
}