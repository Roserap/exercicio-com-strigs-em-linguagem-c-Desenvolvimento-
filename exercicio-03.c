#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    char string[100];
    int i = 0;

    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin);

    while (string[i] != '\0') {
        string[i] = tolower(string[i]);
        i++;
    }

    printf("String em min�sculas: %s", string);

    return 0;
}
