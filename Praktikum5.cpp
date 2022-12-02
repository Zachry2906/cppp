#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int invers (int x){
    int temp = x;
    int ret = 0;

    while (temp > 0)
    {
        ret = (ret * 10) + (temp % 10);
        temp = temp / 10;
    }
    return ret;
}

int main (){
    int a,b, hasil, hasil2, hasiltotal, hasiltotal2;
    cin >> a;
    cin >> b;
    hasil = invers(a);
    hasil2 = invers(b);
    cout << endl;
    
    cout << hasil << " " << hasil2;

    hasiltotal = hasil + hasil2;

    cout << hasiltotal << endl;

    hasiltotal2 = invers(hasiltotal);

    cout << hasiltotal2 << endl;
    

    


    
return 0; }

