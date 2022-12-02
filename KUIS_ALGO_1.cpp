#include <iostream>
#include <stdio.h>
using namespace std;

int main (){
    float menu, luaslingkaran, luassegitiga, luas, submenuluas, alas, tinggi, r, lebar, panjang ;
    float bayar, hartot, ipk, durasi, phi;
    cout << "=========================" << endl;
    cout << "======== MENU UTAMA =====" << endl;
    cout << "=========================" << endl;
    
    cout << "1. LUAS BANGUN DATAR" << endl;
    cout << "2. CEK KELULUSANN" << endl;
    cout << "3. DISKON OK JEK" << endl;
    cout <<endl;
    cout << "Pilih Mneu (1-3) : ";
    cin >> menu ; 
    cout << endl;

    if (menu == 1) {
		cout << "=============================" << endl;
        cout << "======LUAS BANGUN DATAR======" << endl;
        cout << "=============================" << endl << endl;
        cout << "1. Segitiga" << endl;
        cout << "2. Persegi Panjang" << endl;
        cout << "3. Lingkaran" << endl;
        cout << "4. Love" << endl;
        cout << "Pilih submenu (1-4) : ";
        cin >> submenuluas; 
        cout << endl;
        if (submenuluas == 1) {
            cout << "LUAS SEGITIGA" << endl;
            cout << endl;
            cout << "Masukkan Alas : ";
            cin >> alas ; 
            cout << "Masukkan Tinggi : " ;
            cin >> tinggi ; 
            luassegitiga = alas * tinggi / 2;
            cout << "Luas Segitiga : " << luassegitiga << endl;
        } else if (submenuluas == 2) {
            cout << "LUAS PERSEGI PANJANG" << endl;
            cout << endl;
            cout << "Masukkan Panjang : ";
            cin >> panjang ; 
            cout << "Masukkan Lebar : ";
            cin >> lebar ; 
            luas = lebar * panjang;
            cout << "Luas Persegi Panjang : " << luas << endl;
        } else if ( submenuluas == 3) {
            cout << "LUAS LINGKARAN" << endl;
            cout << endl;
            cout << "Masukkan Jari-jari : ";
            cin >> r ; 
            phi = 3.14;
            luaslingkaran = phi * r * r;
            cout << "Luas Lingkaran : " << luaslingkaran << endl;
        } else if (submenuluas == 4) {
            cout << "LUAS LOVE" << endl;
            cout << endl;
            cout << "Masukkan jari-jari : ";
            cin >> r; 
            phi = 3.14;
            luaslingkaran = phi * r * r;
            d = 2*r;
            cout << "Masukkan Tinggi : ";
            cin >> tinggi ; 
            luassegitiga = tinggi * d;
            cout << "Luas LOVE : " << luassegitiga + luaslingkaran << endl;
        } else {
            cout << "Slah input nomor" << endl;
        }
    } else if ( menu == 2) {
        cout << "=========================" << endl;
        cout << "======CEK KELULUSAN======" << endl;
        cout << "=========================" << endl << endl;
        cout << "MASUKKAN IPK  : ";
        cin >> ipk ; 
        cout << "Masukkan Durasi (Tahun) : ";
        cin >> durasi ; 
        cout << "Hasil : ";
        
        if ( (durasi >= 3.5 && durasi <= 4) && (ipk >=3.5)){
            cout << "SANGAT MEMUASKAN" << endl;
        } else if ((ipk >= 3 && ipk < 3.5 ) && (ipk >= 3.5 && durasi > 4)) {
            cout << "MEMUASKAN" << endl;
        } else if (ipk < 3  && ipk > 0) && ( durasi > 7) {
            cout << "CUKUP MEMUASKAN" << endl;
        } else if ((ipk < 0 || ipk > 4) || (durasi > 7 || durasi < 3.5)) {
            cout << "TIDAK VALID" << endl;
        }
    } else  if ( menu == 3) { 
        cout << "=========================" << endl;
        cout << "======DISKON OK JEK======" << endl;
        cout << "=========================" << endl << endl;
        
        cout << "Maudukkan total harga : ";
        cin >> hartot ; 
        if (hartot >= 50000) {
            bayar = hartot * 80/100;
            cout << "Diskon : 20%" << endl;   
        } else {
            bayar = hartot;
        }
        cout << "Total yang harus dibayar : " << bayar << endl; 
    }
    
return 0; }
