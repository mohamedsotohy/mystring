// 97 to 122  small
// 65 to 90  Cap
// 32   diff

#include <mystring.h>

// #include <iostream>

int getlength(char* word) {
  int count = 0;
  while (word[count] != '\0') count++;

  return count;
}

void makeUpper(char* word) {
  int i = 0;
  while (word[i] != '\0') {
    if (word[i] <= 122 && word[i] >= 97) word[i] -= 32;
    i++;
  }
}

void makeLower(char* word) {  // cant edit in place
  int i = 0;
  while (word[i] != '\0') {
    if (word[i] <= 90 && word[i] >= 65) word[i] += 32;
    i++;
  }
}

bool strCmp(char* word1, char* word2) {
  if (getlength(word1) != getlength(word2)) return false;
  for (int i = 0; i < getlength(word1); i++) {
    if (word1[i] != word2[i]) return false;
  }

  return true;
}

void stringCopy(char* src, char* dest) {
  if (getlength(src) != getlength(dest)) return;
  for (int i = 0; i < getlength(src) && src[i] != '\0'; i++) {
    dest[i] = src[i];
  }
}
