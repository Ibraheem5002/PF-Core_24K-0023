#include <stdio.h>
#include <string.h>
    int main ()
{
    int Repeated = 0;
    char Word[1][20];

    printf("enter your word: ");
    fgets(Word[0], sizeof(Word[0]), stdin);

    for (int i = 0; i < strlen(Word[0]); i++)
    {
        if (Word[0][i] != Word[0][i+1])
        {
            printf("%c", Word[0][i]);
        }
        else
        {
            Repeated += 1;
        }
    }

    printf("characters removed: %d", Repeated);
    
}