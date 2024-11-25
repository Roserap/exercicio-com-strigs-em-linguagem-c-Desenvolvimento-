#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char string[100];
    int i, j;
    int e_palindromo = 1;

    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin);

    string[strcspn(string, "\n")] = '\0';

    int comprimento = strlen(string);

    for (i = 0, j = comprimento - 1; i < j; i++, j--)
    {
        while (i < j && (string[i] == ' ' || !isalpha(string[i])))
        {
            i++;
        }
        while (i < j && (string[j] == ' ' || !isalpha(string[j])))
        {
            j--;
        }

        if (tolower(string[i]) != tolower(string[j]))
        {
            e_palindromo = 0;
            break;
        }
    }

    if (e_palindromo)
    {
        printf("A string é um palíndromo.\n");
    }
    else
    {
        printf("A string não é um palíndromo.\n");
    }

    return 0;
}
