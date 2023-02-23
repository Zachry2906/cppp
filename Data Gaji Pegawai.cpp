#include <iostream>
#include <string>

using namespace std;

struct gaji {
    string nama;
    int nip;
    int hariKerja;
    int gajiPerhari;
};

int main()
{
    gaji pegawai;
    cout<<"DATA GAJI PEGAWAI"<< endl;
    cout<<"nama \t\t: "; getline(cin, pegawai.nama);
    cout<<"nip \t\t: "; cin >> pegawai.nip;
    cout<<"Hari Kerja \t: "; cin >> pegawai.hariKerja;
    cout<<"Gaji Perhari \t: "; cin >> pegawai.gajiPerhari;
    cout<< endl;
    
    cout<<"Total gaji : " << pegawai.hariKerja * pegawai.gajiPerhari;
    return 0;
}