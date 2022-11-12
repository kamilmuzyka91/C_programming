// Kalkulator pola trójkąta na podstawie wzoru Herona z dokładnością do 2 miejsc
// po przecinku

#include <math.h>
#include <stdio.h>
int main() {
  float a, b, c, score;

  printf(" \n");
  printf(" ## Kalkulator pola trójkąta na podstawie wzoru Herona ## \n");
  printf(" \n");
  printf("Podaj dlugosc bokow trojkata: ");

  scanf("%f %f %2f", &a, &b, &c);
  score = a * b * c / 2;

  printf("Pole trojkata wynosi: %0.2f", score);

  return 0;
}