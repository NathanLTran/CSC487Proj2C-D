#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int calcMultInv(int, int, int);

int32_t RSA(int message, int eord)
{
    // int p, q, d;
    int p = 7;
    int q = 5;
    int d = 0;
    int n = 0;
    int totn = 0;
    int32_t e = 5;

    // cout << "Enter a prime number for p: ";   //get p, q, and e values
    // cin >> p;
    // cout << "Enter a prime number for q: ";
    // cin >> q;
    // cout << "Enter a value for e (less than Totient(n) & relatively prime to p and q): ";
    // cin >> e;

    n = p*q;                    //calculate n and totn
    totn = (p-1)*(q-1);

    d = calcMultInv(n, totn, e);
    // if (d == 0)
    //     cout << "Error: Invalid e value!" << endl;
    // else
    //     cout << "Multiplicative Inverse: " << d << endl;

    int encrypt = pow(message, e);
    encrypt = fmod(encrypt, n);
    int32_t decrypt = pow(encrypt, d);
    decrypt = fmod(decrypt, n);

    cout << "encyrpt: " << encrypt << endl << "decrypt: " << decrypt << endl;

    if (eord == 0)
    return decrypt;
    else
    return encrypt;
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
