// zadanie 3.5 Konwersja znaków na systemy liczbowe

#include <stdio.h>
#include <stdlib.h>

int main() {
  int decimalNumber;
  int test;

  printf("Wprowadź liczbę: ");
  scanf("%d", &decimalNumber);

  if (decimalNumber == 0) {
    printf("Liczba nie może być zerem !");
    exit(0);
  } else {
    printf("\n W systemie dziesiętnym: %d", decimalNumber);
    printf("\n W systemie ósemkowym: %o", decimalNumber);
    printf("\n W systemie szesnastkowym:  %x", decimalNumber);
    printf("\n W kodzie ASCII:  %c", decimalNumber);

    return 0;
  }
}