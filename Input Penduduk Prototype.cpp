#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int jumlah;

struct penduduk {
    string nama;
    string alamat;
    int umur;
    string agama;
    string golDarah;
    string status;
    string TTL;
};

int main()
{   
    bool menu;
    string kembali;

    do {
    int no;
    
        cout << "Masukkan jumlah penduduk yang akan diinput : ";
        cin >> jumlah;
        penduduk info[jumlah];
            for(int i = 0; i < jumlah; i++){
            cout<<"DATA PENDUDUK " << i+1 << endl;
            cin.ignore();
            cout<<"nama \t\t: "; getline(cin, info[i].nama);
            cout<<"alamat \t\t: "; getline(cin, info[i].alamat);
            cout<<"umur \t\t: "; cin >> info[i].umur;
            cout<<"agama \t\t: "; cin >> info[i].agama;
            cout<<"gologan darah \t: "; cin >> info[i].golDarah;
            cin.ignore();
            cout<<"status \t\t: "; getline(cin, info[i].status);
            cout<<"TTL\t\t: "; getline(cin, info[i].TTL);
            cout<< endl;
        }
        system("cls");
			cout << "===================================================================" << endl;
			cout << "Output" << endl;
            for(int j = 0; j < jumlah; j++){
            cout<<"DATA PENDUDUK " << j+1 << endl;
            cout<<"nama \t\t\t: " << info[j].nama << endl;
            cout<<"alamat \t\t\t: " << info[j].alamat << endl;
            cout<<"umur \t\t\t: " << info[j].umur << endl;
            cout<<"agama \t\t\t: " << info[j].agama << endl;
            cout<<"gologan darah \t\t: " <<info[j].golDarah << endl;
            cout<<"status \t\t\t: " << info[j].status << endl;
            cout<<"tempat tanggal lahir \t: " << info[j].TTL << endl;
            cout<< endl;
            }
            
    cout << "Apakah anda ingin kembali ke menginput? ya/tidak : "; cin >> kembali;
    if (kembali == "ya"){
        menu = true;
    } else {
        menu = false;
    }
    } while (menu == true);
    
    return 0;
}
