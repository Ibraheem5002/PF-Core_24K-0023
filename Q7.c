#include <stdio.h>
#include <string.h>
    int main()
{
    char Array [6][5] = {
        {'W','E','T','Y','I'},
        {'E','P','F','E','J'},
        {'S','X','V','S','W'},
        {'T','A','G','T','Q'},
        {'W','F','A','T','S'},
        {'0','0','2','3','H'}
    };

    char Input[1][10];
    int len;
    int Score = 0;
    char Word[10] = "";
    int Present = 0;

    while (1)
    {
        // taking the input of the word
        printf("enter your string [in all Caps] [enter 'END' to end]: ");
    	scanf("%s", &Input[0]);
    	// assuming data entered is correct

        // exiting the code
        if (strcmp (Input[0], "END") == 0)
        {
            break;
        }
    	
        len = strlen(Input[0]);

        for (int i = 0; i < 6; i++)
        {
            printf("i ");
            for (int j = 0; j < 5; j++)
            {
                printf("j ");
                for (int k = 0; k <= len; k++)
                {
                    printf("k\n");

                    char temp[2] = { Array[i][j+k], '\0' };
                    strcat(Word, temp);

                    if (strcmp (Input[0], Word) == 0)
                    {
                        Present = 1;
                        printf("present: %d\n", Present);
                        printf("%s %s\n", Input[0], Word);
                    }
                    else
                    {
                        Present = 0;
                        printf("present: %d\n", Present);
                        printf("%s %s\n", Input[0], Word);
                    }
                }   
                printf("k end\n");
            }
            printf("j end\n");
        }
        printf("i end\n");

        if (Present == 1)
        {
            Score += 1;
            printf("%s is present. Score: %d", Input[0],Score);
        }
        else
        {
            Score -= 1;
            printf("%s is not present. Score: %d", Input[0],Score);
        }
        
        
    }
    printf("end.");
}