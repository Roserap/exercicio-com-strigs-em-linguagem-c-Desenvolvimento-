#include <stdio.h>
#include <stdlib.h>

int main() {
    char string[100];
    int contador = 0;

    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin);

    while (string[contador] != '\0') {
        if (string[contador] == '\n') {
            break;
        }
        contador++;
    }

    printf("N�mero de caracteres na string: %d\n", contador);

    return 0;
}
