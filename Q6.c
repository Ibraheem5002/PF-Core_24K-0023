#include <stdio.h>
    int function()
{
    int N;

    printf("enter the initial number of sticks: ");
    scanf("%d", &N);

    if (N % 5 == 0)
    {
        printf("-1");
    }
    else
    {
        printf("A pick sicks: %d", N%5);
    }
    
}

    int main()
{
    function();
}
