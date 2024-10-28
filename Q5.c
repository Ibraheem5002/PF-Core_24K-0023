#include <stdio.h>
int main()
{
    int size;
    printf("how many values do you wish to input: ");
    scanf("%d", &size);

    int Values[size];

    printf("input you values:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &Values[i]);
    } // end for

    printf("Horizontal Histrogram\n");
    /*{
        for (int i = 0; i < size; i++)
    {
        printf("Value %d: ", i + 1);
        int Count = Values[i];
        for (int j = 0; j < Count; j++)
        {
            printf("*");
        } // end for
        printf("\n");
    } // end for
    printf("\n");
    } */

    printf("Vertical Histrogram\n");
    {
        int Max = 0;
        // finding the maximum value
        for (int i = 0; i < size; i++)
        {
            if (Max < Values[i])
            {
                Max = Values[i];
            }
        }

        // printing rows
        for (int i = Max; i > 0; i--)
        {
            for (int j = 0; j < size; j++)
            {
                if (Values[j] >= i)
                {
                    printf("* ");
                }
                else
                {
                    printf("  ");
                }
            }
            printf("\n");
        }

        for (int i = 0; i < size; i++)
        {
            printf("%d ", Values[i]);
        }
    }
}