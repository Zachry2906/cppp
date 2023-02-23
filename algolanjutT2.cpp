#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int banyak, i, j;

struct Komp {
    int no;
    string nama;
    int skor;
    };


struct  mahasiswa{
    int noMhs;
    string nama;
    string MTKul;
    Komp komp[10];
};

int main()
{
    int banyak1;
    cout << "Input banyaknya mahasiswa : "; cin >> banyak1 ; 
    mahasiswa mhs[banyak1];

	for( i=0; i<banyak1; i++){
	    cout << "mhs[" << i << "].noMhs : ";
		cin >> mhs[i].noMhs;
		cout << "mhs[" << i << "].nama : ";
    	cin.ignore();
		getline(cin, mhs[i].nama);
		cout << "mhs[" << i << "].MTKul : ";
		getline (cin, mhs[i].MTKul);
		cout << "mhs[" << i << "].BanyakKomponen : ";
    	cin >> banyak;
    	mhs[i].komp[banyak];
	
	for( j=0; j<banyak; j++){
	    cout << "mhs[" << i << "].komp[" << j << "].No : ";
	    cin >> mhs[i].komp[j].no;
	    cout << "mhs[" << i << "].komp[" << j << "].nama : ";
	    cin >> mhs[i].komp[j].nama;
	    cout << "mhs[" << i << "].komp[" << j << "].skor : ";
	    cin >> mhs[i].komp[j].skor;
}
}
	system("cls");
	
	for( int k = 0; k < banyak1; k++){
	    cout  << endl;
	    cout << "No. mhs : " << mhs[k].noMhs << endl;
	    cout << "Nama : " << mhs[k].nama << endl;
	    cout << "Mata Kuliah : "<< mhs[k].MTKul << endl;
	    cout << "\tNo " << " \tNama Komponen " << " \tNilai " << endl;
	        for (int l = 0; l < banyak; l++ ){
	            cout << "\t" <<mhs[k].komp[l].no << " \t\t" << mhs[k].komp[l].nama << " \t" << mhs[k].komp[l].skor << endl;
	            }
	    }
}