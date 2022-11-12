// zadanie 3.4 Konwersja znaku stdin do kodu

#include <stdio.h>

int main(void)
{
    char value;
    printf("\n");
    printf(" ## Konwerter znaków stdin do kodu ASCII ## \n");
    printf("\n");
    printf("Wpisz znak do konwertowania : \n");
    scanf("%c", &value);
    printf("Znak %c w kodzie dziesiętnym ASCII to: %d\n", value, value);
    return 0;
}