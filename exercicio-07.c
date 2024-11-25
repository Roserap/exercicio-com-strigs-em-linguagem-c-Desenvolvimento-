#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char string_original[100];
    char string_copiada[100];

    printf("Digite uma string: ");
    fgets(string_original, sizeof(string_original), stdin);

    string_original[strcspn(string_original, "\n")] = '\0';

    strcpy(string_copiada, string_original);

    printf("String original: %s\n", string_original);
    printf("String copiada: %s\n", string_copiada);

    return 0;
}
