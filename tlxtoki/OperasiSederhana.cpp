#include <iostream>
#include <stdio.h>
using namespace std;

int main (){
int X,Y, Z;
bool xsxs;

    cin >> X;
    cin >> Y ;
    cout << endl;
    
if (X < 0|| Y < 0)
{
    cout << "Wrong Input, TryAgain";
    xsxs = false;
} else
{
Z = X + Y;
cout << Z << endl;
Z = X - Y;
cout << Z << endl;
Z = X * Y;
cout << Z << endl;
Z = X / Y;
cout << Z << endl;
Z = X % Y;
cout << Z << endl;

}
return 0; }