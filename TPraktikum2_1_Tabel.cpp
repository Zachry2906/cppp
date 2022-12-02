#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    string nama;
    int nim, plug;

    cout << "Masukkan :";

    cout << "\nNama\t\t\t:";
    getline(cin, nama);
    cout << "Nim \t\t\t:";
    cin >> nim;
    cout << "plug \t\t\t:";
    cin >> plug;

    cout << "\n\nInilah data anda:" << endl;
    cout << "nama \t\t\t:" << nama << endl;
    cout << "nim \t\t\t:" << nim << endl;
    cout << "plug \t\t\t:" << plug << endl;

    cout << "\n\nDalam bentuk tabel :" << endl;

    cout << setfill('=') << setw(55) << "\n";

    cout << "| " << setiosflags(ios::left) << setfill(' ')
         << setw(14) << "NIM"
         << setw(20) << "| NAMA"
         << setw(26) << "| Plug";

    cout
        << setfill('=') << setw(55) << "\n"
        << setfill(' ') << "\n";

    cout << "| " << setiosflags(ios::left) << setw(14) << nim;
    cout << "| " << setiosflags(ios::left) << setw(18) << nama;
    cout << "| " << setiosflags(ios::left) << setw(24) << plug;

    cout << setfill('-') << setw(55) << "\n"
         << endl;

    return 0;
}
