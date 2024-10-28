/*
Muhammad Ibrahim 24K-0023 BAI-1A
19 Oct, 2024; 7:10 PM
*/

#include <stdio.h>
int main()
{
    // declaration
    int Array[5];
    int Element;
    int Smallest = 9999;
    int Small = 9998;

    // inputing the data
    printf("input your data [should be < 9999]:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &Array[i]);

        // applying validation
        while (Array[i] >= 9999)
        {
            printf("invalid input, please input again:\n");
            scanf("%d", &Array[i]);
        } // end while

        // processing, applying the conditions
        if (Array[i] < Smallest)
        {
            Smallest = Array[i];
        } // end if

        else if (Array[i] < Small && Array[i] > Smallest)
        {
            Small = Array[i];
        } // end  else if
    } // end for

    printf("\n");
    // printing the results
    printf("The Second smallest element in the array is: %d", Small);
}