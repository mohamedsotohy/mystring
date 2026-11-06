#include <mystring.h>

#include <iostream>
using namespace std;

int main() {
  char myword[] = "aaaa";
  char myword2[] = "aAaa";
  char myword3[] = "";
  char myword4[] = "zzZZ";
  char myword5[] = "ZZAARY";

  // toUpper(myword,);
  // makeUpper(myword);
  // makeUpper(myword2);
  // makeUpper(myword3);
  // makeUpper(myword4);
  // makeUpper(myword5);

  // makeLower(myword);
  // makeLower(myword2);
  // makeLower(myword3);
  // makeLower(myword4);
  // makeLower(myword5);

  // cout << myword << endl;
  // cout << myword2 << endl;
  // cout << myword3 << endl;
  // cout << myword4 << endl;
  // cout << myword5 << endl;

  // cout << strCmp(myword, myword2) << endl;
  // cout << strCmp(myword2, myword3) << endl;
  // cout << strCmp(myword4, myword4) << endl;

  stringCopy(myword, myword4);
  cout << myword4;

  return 0;
}