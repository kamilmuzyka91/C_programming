// zadanie 3.1 - Pole i obwód koła
#include <math.h>
#include <stdio.h>

int main() {
  int radius;
  float field_score;
  float perimeter_score;

  printf("\n");
  printf(" ## Kalkulator pola i obwodu koła ## \n");
  printf("\n");
  printf("Wprowadz promien: ");
  scanf("%d", &radius);

  field_score = M_PI * (pow(radius, 2));
  perimeter_score = 2 * M_PI * radius;

  printf("Pole kola wynosi %0.2f\n", field_score);
  printf("Obwod kola wynosi %0.2f\n", perimeter_score);

  return 0;
}