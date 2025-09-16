#include <stdio.h>
#include <stdlib.h>

void InsertionSort(char *vogais, int qtd)
{
    for (int j = 1; j < qtd;j++)
    {
        char key = vogais[j];
        int i = j - 1;
        while (i >= 0 && vogais[i] > key)
        {
            vogais[i + 1] = vogais[i];
            i = i - 1;
        }
        vogais[i + 1] = key;
    }
}

void printA(char *vogais, int qtd)
{
    for (int i = 0; i < qtd; i++)
    {
        printf("%c ", vogais[i]);
    }
}   
int main()
{
    char *vogais=(char *)malloc(6 * sizeof(char));
    if (vogais == NULL)
    {
        printf("Erro de alocacao de memoria\n");
        return 1;
    }
    
    vogais[0] = 'u';
    vogais[1] = 'o';
    vogais[2] = 'a';
    vogais[3] = 'i';
    vogais[4] = 'e';
    vogais[5] = '\0';
    InsertionSort(vogais, 6);
    printf("\n\n");
    printA(vogais, 6);
    printf("\n\n");
    free(vogais);
    return 0;
}