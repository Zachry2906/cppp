#include <iostream>
#include <string>

using namespace std;

int jumlah = 0, tambahan; 

struct penduduk {
    string nama, alamat, agama, golDarah, status, TTL; 
    int umur; 
};

penduduk info[100]; 


void inputPenduduk(){
    cout << endl;
    
    cout << "Masukkan jumlah penduduk yang akan diinput : ";
    cin >> tambahan;
    for(int i = jumlah; i < jumlah+tambahan; i++){ 
        cout<<"DATA PENDUDUK " << i+1 << endl; 
        cin.ignore();
        cout<<"nama \t\t: "; getline(cin, info[i].nama);
        cout<<"alamat \t\t: "; cin >> info[i].alamat;
        cout<<"umur \t\t: "; cin >> info[i].umur;
        cout<<"agama \t\t: "; cin >> info[i].agama;
        cout<<"gologan darah \t: "; cin >> info[i].golDarah;
        cout<<"status \t\t: "; cin >> info[i].status;
        cout<<"TTL \t\t: "; cin >> info[i].TTL;
        cout<< endl;
    }
    jumlah = jumlah + tambahan; 
}

void outputPenduduk(){
    if (jumlah == 0) {
        cout << "Belum ada data";
    }
    cout  << endl;
    
    for(int i = 0; i < jumlah; i++){
    cout<<"DATA PENDUDUK " << i+1 << endl;
    cout<<"nama \t\t\t: " << info[i].nama << endl;
    cout<<"alamat \t\t\t: " << info[i].alamat << endl;
    cout<<"umur \t\t\t: " << info[i].umur << endl;
    cout<<"agama \t\t\t: " << info[i].agama << endl;
    cout<<"gologan darah \t\t: " <<info[i].golDarah << endl;
    cout<<"status \t\t\t: " << info[i].status << endl;
    cout<<"tempat tanggal lahir \t: " << info[i].TTL << endl;
    cout<< endl;
    }
}


int main()
{   
    bool menu;
    string kembali;
    do {
    int no;
    
    menu = false;                

    cout << "1.  Menambah data penduduk" << endl;
    cout << "2.  Menampilkan data penduduk" << endl;
    cout << "Pilih menu yang ingin digunakan : "; cin >> no;
    
    if (no == 1) {
        inputPenduduk();
    } else if (no == 2) {
        outputPenduduk();
    } else {
        cout << "Input salah, silahkan coba lagi";
        
    }
    
    
    cout << "Apakah anda ingin kembali ke menu? ya/tidak : ";
    cin >> kembali;
    if (kembali == "ya"){
        menu = true;
    } else {
        menu = false;
    }
    } while (menu == true);
    

    
    return 0;
}