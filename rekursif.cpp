#include <iostream>
#include <stdio.h>
using namespace std;

// int fibonaci (int n){
//     if (n == 0 || n == 1) 
//     return 1;
//     else {
//         return fibonaci(n-1) + fibonaci(n-2); 
//     }
// }

// int main (){

// int j;
//     cout << "Bilangan Fibonachi" << endl;
//     cout << "Jumlah baris :  "; 
//     cin  >> j;
//     cout << endl;
//     cout << "Fibonacci " << j << " baris : " << endl;
//     cout << "";

//     for (int i = 0; i < j; i++){
//     cout << fibonaci(i) << " ";
//     }

    double rekusi (short n) {
        if (n == 1)
        {
            return  -1 * 3;
        } else if (n%5 == 0)
        {
            return 3 * n + rekusi (n-1);
        } else  {
            return -1 * 3 * n + rekusi(n-1);
        }
            }

int main(){

    short x;
    cout << "Bilangan x : " ; cin >> x ; 
    cout << "hasilnya : ";

    for (int i = 1; i <= x; i++)
    {
           cout << " ," << rekusi(i);
    }
    


    
    


return 0; }