#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int soal2 (int n){
    return ((2 * n - 1) * pow(-1, n - 1));
}

float soal4 (float y){
    if (remainder(y, 4.0f) == 0)
    {
        return (1 * (1/(2 * y)));
    } else {
        return (-1 * (1/(2 * y)));
    }
}

int main (){
/*
2.   S = 1 - 3 + 5 - 7 + 9 - 11 + ... + (2 x i-1) x (-1)^(i-1)
4.   S = -1/2 - 1/4 - 1/6 + 1/8 - ... - ... - ... + ...
*/

    int x;
    float y;
    cout << "Bilangan x : " ; cin >> x ; 
    cout << "hasil soal 2 : " << soal2(x) << endl;
    cout << "Bilangan y : " ; cin >> y ; 
    cout << "hasil soal 4 : " << soal4(y) << endl;

return 0; }