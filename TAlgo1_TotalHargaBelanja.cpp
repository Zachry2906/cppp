#include <iostream>
#include <string.h>
#include <iomanip>

using namespace std;
int main(){
	
    string nim, nama;
    array<string, 10> diskon;
    array<string, 10> namaBarang;
    array<int, 10> jumlahBarang;
    array<int, 10> hargaBarang;
    array<int, 10> totalHargaI;
    array<int, 10> totalHargaII;

    diskon[0]="15/100";
    diskon[1]="10/100";
    diskon[2]="5/100";

    cout << "PROGRAM KASIR" << endl;
    cout << "NIM :";						getline(cin, nim);
    cout << "NAMA :";						getline(cin, nama);

    cout << setfill('-') << setw(110) << "\n";

    cout << "Nama barang 1 :";				getline(cin, namaBarang[0]);
    cout << "Jumlah barang 1 :";			cin >> jumlahBarang[0];
    cout << "Harga tiap barang 1 :";		cin >> hargaBarang[0];

    totalHargaI[0] = jumlahBarang[0] * hargaBarang[0] * 15/100;
    totalHargaII[0] = jumlahBarang[0] * hargaBarang[0] - totalHargaI[0];
    
    cout << "Total harga setelah diskon 15%: Rp" << totalHargaII[0] << endl;
    cin.ignore();
    
    cout << "\nNama barang 2 :";			getline(cin, namaBarang[1]);
    cout << "jumlah barang 2 :";			cin >> jumlahBarang[1];
    cout << "Harga tiap barang 2 :";		cin >> hargaBarang[1];

    totalHargaI[1] = jumlahBarang[1] * hargaBarang[1] * 10/100;
    totalHargaII[1] = jumlahBarang[1] * hargaBarang[1] - totalHargaI[1];
    
    cout << "Total harga setelah diskon 10%: Rp" << totalHargaII[1] << endl;
    cin.ignore();

    cout << "\nNama barang 3 :";			getline(cin, namaBarang[2]);
    cout << "jumlah barang 3 :";			cin >> jumlahBarang[2];
    cout << "Harga tiap barang 3 :";		cin >> hargaBarang[2];
    
    totalHargaI[2] = jumlahBarang[2] * hargaBarang[2] * 5/100;
    totalHargaII[2] = jumlahBarang[2] * hargaBarang[2] - totalHargaI[2];
    cout << "Total harga setelah diskon 5%: Rp" << totalHargaII[2] << endl;


	//TABEL
    cout << "\nPEMBELIAN :" << endl;
    cout << setfill('-') << setw(110) << "\n";

    cout << "| " << setiosflags(ios::left) 
		 << setfill(' ')
         << setw(5) << "No"
         << setw(20) << "| Nama Barang"
         << setw(26) << "| Jumlah Barang"
         << setw(20) << "| Harga Tiap Barang"
         << setw(15) << "| Diskon"
         << setw(20) << "| Total Harga ";
    cout << setfill('-') << setw(110) << "\n"
         << setfill(' ') << "\n";

    for (int i = 0; i < 3; i++) {
        cout << "| " << setiosflags(ios::left) << setw(5) << i + 1;
        cout << "| " << setiosflags(ios::left) << setw(18) << namaBarang[i];
        cout << "| " << setiosflags(ios::left) << setw(24) << jumlahBarang[i];
        cout << "| " << setiosflags(ios::left) << setw(18) << hargaBarang[i];
        cout << "| " << setiosflags(ios::left) << setw(13) << diskon[i];
        cout << "| " << setiosflags(ios::left) << setw(18) << totalHargaII[i] << "|\n"; }

    cout << setfill('-') << setw(110) << "\n" << endl;
    cout << setiosflags(ios::left) << setfill(' ') << setw(83) << "| Total Pembayaran (Rp)" 
		 << setiosflags(ios::left) << setw(35) << totalHargaII[0] + totalHargaII[1] + totalHargaII[2];
    cout << setfill('-') << setw(110) << "\n" <<endl;

    cout << "Kasir" << "\n"  << "\n" << "\n" << "\n" << nama << "\n" << nim;
    return 0;
}
