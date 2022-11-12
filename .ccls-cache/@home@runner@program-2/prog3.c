// zadanie 3.3 - Kalkulator dodawanie, odejmowanie , mnnożenie,  dzielenie

#include <stdio.h>

int main() {

  char operator;
  double num1;
  double num2;
  printf(" \n");
  printf(
      " ## Kalkulator - dodawanie, odejmowanie , mnnożenie,  dzielenie ## \n");
  printf("\n");
  printf(" ### WYBIERZ OPERATOR  (+, -, *, /): ");
  scanf("%c", &operator);
  printf(" ### Wprowadz liczby do dzialania: ");
  scanf("%lf"
        "%lf",
        &num1, &num2);

  switch (operator) {
  case '+':
    printf(" ###W ynik dodawania: ");
    printf("%0.1lf + %0.1lf = %0.1lf", num1, num2, num1 + num2);
    break;

  case '-':
    printf(" ### Wynik odejmowania: ");
    printf("%0.1lf - %0.1lf = %0.1lf", num1, num2, num1 - num2);
    break;

  case '*':
    printf(" ### Wynik mnożenia: ");
    printf("%0.1lf * %0.1lf = %0.1lf", num1, num2, num1 * num2);
    break;

  case '/':
    printf(" ### Wynik dzielenia: ");
    printf("%0.1lf / %0.1lf = %0.1lf", num1, num2, num1 / num2);
    break;
  default:
    printf(" ### Wprowadzono niepoprawny operator !");
  }

  return 0;
}