// zadanie 3.6 - operator sizeof()

#include <stdio.h>

int main() {
  int intType;
  short int shortintType;
  unsigned short int unsignedShortIntType;
  float floatType;
  double doubleType;
  char charType;
  unsigned char unsignedchar;

  printf(" ### Rozmiar typów prostych ### \n");
  printf(" \n");
  printf("Rozmiar int to: %zu bajty\n", sizeof(intType));
  printf("Rozmiar short int to: %zu bajty\n", sizeof(shortintType));
  printf("Rozmiar unsigned short int to: %zu bajty\n",
         sizeof(unsignedShortIntType));
  printf("Rozmiar float to: %zu bajty\n", sizeof(floatType));
  printf("Rozmiar double to: %zu bajtów\n", sizeof(doubleType));
  printf("Rozmiar char to: %zu bajt\n", sizeof(charType));
  printf("Rozmiar unsigned char to: %zu bajt\n", sizeof(unsignedchar));

  return 0;
}