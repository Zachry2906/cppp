#include <iostream>
#include <stdio.h>
using namespace std;

float vtabung (int a, int b){
    float phi = 3.14;
float volume = phi * a * a * b;
    return volume;
}
float vkerucut (int a, int b){
    float phi = 3.14;
    float volume = 0.333 * phi * a * a * b;
    return volume;
}

float lsegitiga (float a, float b){
    float luas = 0.5 * a * b;
    return luas;
}
int ksegitiga (int a, int b, int c){
    int keliling = a + b + c;
    return keliling;
}
int lperpan (int a, int b){
    int luas = a * b;
    return luas;
}
int kperpan (int a, int b){
    int keliling = a * 2 + b * 2;
    return keliling;
}

//FUNGSI MINMAX
int Max (int a[], int n)
{
	int i, max;
	max = a[0];
	for( i = 1; i < n; i++)
	{
		if ( a[i] > max) 
			max = a[i];
	}
	return max;
}

int Min(int a[],int n)
{	
	int i, min;
	min = a[0];
for (i = 1 ; i < n; i++)
	{
		if ( a[i] < min)
			min = a[i];
	}
	return min;
}

int fibonaci (int n){
    if (n == 0 || n == 1) 
    return n;
    else {
        return fibonaci(n-1) + fibonaci(n-2); 
    }
}

int main (){
    int prog, j, t, program, p1, p2;
    float p, ti;
    int value, ulang;

    cout << endl;
    do {
    cout << "LIST PROGRAM FUNCTION" << endl;
    cout << "1. PROGRAM HITUNG VOLUME, LUAS, DAN KELILIMG" << endl;
    cout << "2. PROGRAM MIN MAX VALUE" << endl;
    cout << "3. PROGRAM FIBBONACHI" << endl;
    cin >> program; 
    
    if (program==1)
    {
    cout << "1. Menentukan Luas, volume, dan keliling menggunakan fungsi." << endl << endl;
    cout << "1. Volume Tabung" << endl;
    cout << "2. Volume Kerucut" << endl;
    cout << "3. Keliling dan luas segitiga" << endl;
    cout << "4. Keliling dan luas persegi panjang" << endl;
    cout << "Pilih Program : ";
    cin >> prog ; 

    if (prog == 1)
    {
        cout << "Masukkan jari-jari :";
cin >> j ; 
        cout << "Masukkan Tinggi :";
        cin >> t ; 
        
        cout << vtabung(j , t);
    } else if (prog == 2)
    {
        cout << "Masukkan jari-jari :";
        cin >> j ; 
        cout << "Masukkan Tinggi :";
        cin >> t ; 
        
        cout << vkerucut(j , t);
    } else if (prog == 3)
    {
        cout << "Masukkan panjang alas : ";
        cin >> p ; 
        cout << "Masukkan sisi miring 1 : ";
        cin >> p1 ;
        cout << "Masukkan sisi miring 2 : ";
        cin >> p2 ;
        cout << "Masukkan Tinggi :";
        cin >> ti ; 
        cout << "Hasilnya adalah luas : " << lsegitiga(p,ti) << " dan kelilingnya : " << ksegitiga(p, p1, p2);
    } else if (prog == 4)
    {
        cout << "Masukkan panjang :";
        cin >> j ; 
        cout << "Masukkan lebar :";
        cin >> t ; 
        cout << "Hasilnya adalah luas : " << lperpan(j,t) << " dan kelilingnya : " << kperpan(j, t);
    }
    cout << endl << endl;
    } else if (program==2)
    {
        //MAX AND MIN VALUE
    cout << "2. Mencari nilai terbesar dan terkecil" << endl;
	int i, array[50], size, max, min;

	cout<<"Input angka : ";
	cin>> size;

	cout<< "Masukkan "<< size << " angka\n";
	for( i = 0 ; i < size ; i++)
cin>> array[i];

	max = Max(array,size);
	min = Min(array,size); 

	cout<<"Nilai Maksimumnya adalah : " << max << "\n";
	cout<<"Nilai Minimumnya adalah : " << min << "\n";

    } else if (program == 3)
    {
            // FIBONNACHI
    cout << "3. Bilangan Fibonachi. " << endl;
    cout << "Jumlah deret :  "; 
    cin  >> j;
    cout << endl;
    cout << "Fibonacci " << j << " deret : " << endl;
    cout << "";

    for (int i = 0; i < j; i++){
    cout << fibonaci(i) << " ";
    }
    cout << endl;
    }
        cout << "Apaakh anda ingin kembali ke menu utama? ( YA = 1 / TIDAK = 0)" << endl;
    cin >> ulang ; 
    if (ulang == 1)
    {
      value = 1;
    }
    else {
      value = 0;
    }
} while (value == 1);

    cout << endl << endl;
return 0; 
}
