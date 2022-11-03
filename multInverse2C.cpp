#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int calcMultInv(int, int, int);

int main()
{
    int p, q, d;
    int n = 0;
    int totn = 0;
    int e = 0;

    cout << "Enter a prime number for p: ";
    cin >> p;
    cout << "Enter a prime number for q: ";
    cin >> q;
    cout << "Enter a value for e (less than Totient(n) & relatively prime to p and q): ";
    cin >> e;

    n = p*q;
    totn = (p-1)*(q-1);

    d = calcMultInv(n, totn, e);
    if (d == 0)
        cout << "Error: Invalid e value!" << endl;
    else
        cout << "Multiplicative Inverse: " << d << endl;

    return d;
}

int calcMultInv(int n, int totn, int e)
{
    if (e < n && e < totn){
        for (int d = 1; d < totn; d++)
                if (((e % totn) * (d % totn)) % totn == 1)
                    return d;
    }
    return 0;

}