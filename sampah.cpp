#include <iostream>
#include <stdio.h>
using namespace std;

int main (){
int i,j;
int x[4];

for ( i = 0; i <= 4; i++)
{
    cout << "masukkan nim anda : ";
    cin >> x[i] ; 
}
i = 0;
while (i <= 4)
{
    j = i;
    while (j >= 0)
    {
    cout << x[j] << " ";
    j = j - 1;
    }
    i = i + 1;
    cout << endl;
    
}




return 0; }