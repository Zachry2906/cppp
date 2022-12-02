#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    float C, F, R, K;
    cout << "Masukkan Celcius :";
    cin >> C;
    cout << "\n";

    // Farenheit
    cout << "Farenheit \t: ";
    F = ((9.0 * C) / 5.0) + 32;
    cout << F << " derajat Farenheit" << endl;

    // Kelvin
    cout << "Kelvin \t\t: ";
    K = 237 + C;
    cout << K << " derajat Kelvin" <<endl;
    
    
    cout << "Reamur \t\t: ";
    R = (4.0 * C)/ 5.0;
    cout << R << " derajat Reamur" << endl;

    cout << "\nC merupakan derajat Celcius";
}
