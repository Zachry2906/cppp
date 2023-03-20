#include <iostream>
using namespace std;

float S(int n);

int main ()
{
    cout << "\nS(3) " ;
    cout << " = " << S(3);

return 0; 
}

//output = S(3) 6/10 + 4/7 + 2/4 = 1.67143

float S(int n) {
    float p, q, x;
    if (n == 1) {
        p = 2 * n;
        q = 3 * n + 1;
        cout << p << "/" << q << " ";
        return p/q;

    } else {
        p = 2 * n;
        q = 3 * n + 1;
        x = p/q;
        cout << p << "/" << q << " + ";
        
        return x + S(n - 1);
    }
}
