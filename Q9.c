#include <stdio.h>
#include <stdlib.h>
#include <time.h>

    int main()
{
    // declaring
    char Input = '0';
    int Num;
    char Map[5][5];
    int X = 0;
    int Y = 0;
    int X1 = 0;
    int Y1 = 0;

    // creating map
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {   
        int Num = (rand() % 3) + 1;
            switch (Num)
           {
            case 1:
                Map[i][j] = ' ';
                break;
                
            case 2:
                Map[i][j] = 'X';
                break;

            case 3:
                Map[i][j] = ' ';
                break;

            default:
                break;
            }
        }
    }
    Map[0][0] = '*';
    Map[4][4] = 'P';

    // printing the initial map
    printf("Your Map:\n");
    printf(" ==========\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (j == 0) {printf("|");}
            printf("%c ", Map[i][j]);
            if (j == 4 ) {printf("|");}
        }
        printf("\n");
    }
    printf(" ==========\n");

    // printig the instructions
    printf("You are *\n");
    printf("Your Objective: reach destination 'P'\n");
    printf("Controls:\n");
    printf("W: up, S: down, A: left, D: right, Q: quit");
    printf("\n");

    // main game
    while (1)
    {
        // taking input
        printf("enter your input: ");
        scanf("%c", &Input);

        // validation
        while (Input != 'W' && Input != 'A' && Input != 'S' && Input != 'D' && Input != 'Q')
        {
            printf("invalid input: ");
            scanf(" %c", &Input);
        }

        // ending the loop
        if (Input == 'Q')
        {
            break;
        }

        // setting the coordinates
        switch (Input)
        {
        case 'W':
            if (Y > 0)
            {
                X1 = X, Y1 = Y;;
                Y -= 1;
                printf("%d %d\n", Y, X);
            }
            // printf("W");
            break;
        
        case 'S':
            if (Y < 4)
            {
                X1 = X, Y1 = Y;
                Y += 1;
                printf("%d %d\n", Y, X);
            }
            // printf("S");
            break;

        case 'A':
            if (X > 0)
            {
                X1 = X, Y1 = Y;
                X -= 1;
                printf("%d %d\n", Y, X);
            }
            // printf("A");
            break;

        case 'D':
            if (X < 4)
            {
                X1 = X, Y1 = Y;
                X += 1;
                printf("%d %d\n", Y, X);
            }
            // printf("D");
            break;

        default:
            break;
        }

        if (Map[Y][X] == 'X')
        {
            printf("You cannot pass through here.\n");
            X = X1, Y = Y1;
        }
        else
        {
            Map[Y][X] = '*';
            Map[Y1][X1] = ' ';
        }

        // printing the updated map
        printf("Your Map:\n");
        printf(" ==========\n");
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                if (j == 0) {printf("|");}
                printf("%c ", Map[i][j]);
                if (j == 4) {printf("|");}
            }
            printf("\n");
        }
        printf(" ==========\n");

        if (Map[4][4] == '*')
        {
            printf("you've won");
        }
    }
}