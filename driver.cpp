#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include <bitset>
#include <math.h>
#include <stdio.h>
#include "multInverse.cpp"


using namespace std;

int main()
{

  //unsigned char IVarr = 'q';
  //int key[10] = {1,0,1,0,0,1,0,0,1,0};

  //int publicKey = ComputePublicKey(394, 1021, 12);
  //cout << publicKey << endl;

  int32_t x = RSA(9, 0);
  cout << "x = " << x << endl;

//  key = fast_mod_expo(394, 12, 1021);


  /*unsigned char return_val = encrypt('s', key);
  cout << return_val << endl;
  unsigned char return_text = decrypt(return_val, key);
  cout << return_text << endl;
*/
  return 0;
}
