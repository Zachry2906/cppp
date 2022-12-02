#include <iostream>
#include <stdio.h>
using namespace std;

int faktorialIterasi(int a){
    int hasil = 1;
    for (int i = 0; i = a; i++)
    {
        hasil =  hasil * (a);
    }
    return hasil;
}
int main (){
    int a;
    cout << "masukkan a :";
    cin >> a ; 
    
    cout << "hasil : " << faktorialIterasi(a) << endl;
    

return 0; }