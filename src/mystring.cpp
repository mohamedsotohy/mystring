// 97 to 122  small
// 65 to 90  Cap
// 32   diff

#include <mystring.h>

// #include <iostream>

int getLength(const char* word) {
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

bool strCmp(const char* word1, const char* word2) {
  const int LENGTH = getLength(word1);
  if (LENGTH != getLength(word2)) return false;
  for (int i = 0; i < LENGTH; i++) {
    if (word1[i] != word2[i]) return false;
  }

  return true;
}

void stringCopy(const char* src, const char** dest) {
  int size = getLength(src);
  char* temp = new char[size + 1];
  for (int i = 0; i < size; i++) {
    temp[i] = src[i];
  }
  temp[size] = '\0';
  *dest = temp;
}