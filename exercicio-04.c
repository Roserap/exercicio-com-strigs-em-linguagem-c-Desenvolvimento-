#include <stdio.h>
#include <stdlib.h>

int main() {
    char string[100];
    char caractere;
    int contador = 0;

    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin);

    printf("Digite um caractere para contar suas ocorrências: ");
    scanf("%c", &caractere);

    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] == caractere) {
            contador++;
        }
    }

    printf("O caractere '%c' aparece %d vezes na string.\n", caractere, contador);

    return 0;
}
