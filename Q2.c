#include <stdio.h>
#include <string.h>
    int main()
{
    char Slogans[1][20];
    
    // input
    printf("enter your slogans: ");
    fgets(Slogans[0], sizeof(Slogans[0]), stdin);

    int len = strlen(Slogans[0]);
    int Num[len];
    int Repeat;
    int Print[len];

    // setting up the array(s)
    for (int i = 0; i < len; i++)
    {
        Num[i] = 1;
        Print[len] = 0;
    }

    // counting the characters
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
        {
            if (Slogans[0][i] == Slogans[0][j] && i != j)
            {
                Num[i] += 1;
            }
        }
    }

    // output
    printf("{");
    for (int i = 0; i < len; i++)
    {
        if (Num > 1)
        {
            printf("'%c':%d, ", Slogans[0][i], Num[i]);
        }
        
    }
    printf("\b\b\b\b }");
    int i;
    printf("'%c':%d, ", Slogans[0][i], Num[i]);
}