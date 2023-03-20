#include <iostream>
#include <stdio.h>
using namespace std;

int jumlahSo = 0, tambahanSohibul;

void sohibulQurban();
void daftarSohibul();
void tampilkanSohibul();
void cariSohibul();
// void penerimaQurban();
// void daftarPenerima();
// void tampilkanPenerima();
// void cariPenerima();
// void panitiaQurban();
// void daftarPanitia();
// void tampilkanPanitia();

struct infoSohibul {
    string nama, jenisQurban, pekerjaan; 
    int umur, jumlah, RT, noRumah; 
};

infoSohibul sohibul[100]; 

int main (){
    int menuUtama;
    string ulang;

do {
    cout << "MENU UTAMA" << endl;
    cout << "1. Sohibul Qurban" << endl;
    cout << "2. Penerima Qurban" << endl;
    cout << "3. Panitia Qurban" << endl;
    cout << "Pilih menu : ";
    cin >> menuUtama ; 
    cout << endl;
    
    if (menuUtama == 1)
    {
        sohibulQurban();
    } else if (menuUtama == 2)
    {
        // penerimaQurban();
    } else if (menuUtama == 3)
    {
        // panitiaQurban();
    }

cout << "Apakah anda ingin kembali ke menu utama? (ya/tidak) : ";
cin >> ulang ; 

} while (ulang == "ya");

cout << "Terimakasih sudah mencoba" << endl;

return 0; 
}





void sohibulQurban() {
    int menuSohibul;
    string ulangSo;

do {
    cout << "Pilih menu untuk ditampilkan" << endl;
    cout << "1. Daftar Sohibul Qurban" << endl;
    cout << "2. Tampilkan daftar Sohibul Qurban" << endl;
    cout << "3. Cari daftar Sohibul Qurban" << endl;
    cout << "Pilih Menu : ";
    cin >> menuSohibul ;
    cout << endl;
    
    if (menuSohibul == 1)
    {
        daftarSohibul();
    } else if (menuSohibul == 2)
    {
        tampilkanSohibul();
    } else if (menuSohibul == 3)
    {
        cariSohibul();
    }

cout << "Apakah anda ingin kembali ke menu Sohibul Qurban? (ya/tidak) : ";
cin >> ulangSo;
cout << endl;


} while (ulangSo == "ya");
}

void daftarSohibul(){
    cout << "Masukkan jumlah sohibul yang akan diinput : ";
    cin >> tambahanSohibul;
    for(int i = jumlahSo; i < jumlahSo+tambahanSohibul; i++){ 
        cout<<"DATA SOHIBUL " << i+1 << endl; 
        cin.ignore();
        cout<<"nama \t\t: "; getline(cin, sohibul[i].nama);
        cout<<"umur \t\t: "; cin >> sohibul[i].umur;
        cout<<"pekerjaan \t: "; cin >> sohibul[i].pekerjaan;
        cout<<"RT \t\t: "; cin >> sohibul[i].RT;
        cout<<"No Rumah \t: "; cin >> sohibul[i].noRumah;
        cout<<"jenis Qurban \t: "; cin >> sohibul[i].jenisQurban;
        cout<<"jumlah \t\t: "; cin >> sohibul[i].jumlah;
        cout<< endl;
    }
    jumlahSo = jumlahSo + tambahanSohibul; 
}

void tampilkanSohibul(){
    if (jumlahSo == 0) {
        cout << "Belum ada data";
    }
    cout  << endl;

    for(int i = 0; i < jumlahSo; i++){ 
        cout<<"DATA SOHIBUL " << i+1 << endl; 
        cin.ignore();
                cout<<"nama \t\t: " << sohibul[i].nama << endl;
                cout<<"umur \t\t: " << sohibul[i].umur << endl;
                cout<<"pekerjaan \t: " << sohibul[i].pekerjaan << endl;
                cout<<"RT \t\t: " << sohibul[i].RT << endl;
                cout<<"No Rumah \t: " << sohibul[i].noRumah << endl;
                cout<<"jenis Qurban \t: " << sohibul[i].jenisQurban << endl;
                cout<<"jumlah \t\t: " << sohibul[i].jumlah ;
        cout<< endl;
    }
}

void cariSohibul(){
    string x;
    int i = 0;
    bool status = false;

    cout << "Masukkan nama sohibul yang mau dicari : "; cin >> x ; 
        while ((i<jumlahSo) && (!status))
        {
            if (sohibul[i].nama == x)
            {
                status = true;
            }

            if(status){
                cout<<"nama \t\t: " << sohibul[i].nama << endl;
                cout<<"umur \t\t: " << sohibul[i].umur << endl;
                cout<<"pekerjaan \t: " << sohibul[i].pekerjaan << endl;
                cout<<"RT \t\t: " << sohibul[i].RT << endl;
                cout<<"No Rumah \t: " << sohibul[i].noRumah << endl;
                cout<<"jenis Qurban \t: " << sohibul[i].jenisQurban << endl;
                cout<<"jumlah \t\t: " << sohibul[i].jumlah ;
            } else {
                i = i + 1;
            }
            
        }
}
