#include <stdio.h>
#include <string.h>

    void BinaryToDecimal(int Num)
{
    int len = 0;
    int Decimal = 0;
    int Raw = Num;
    int Power;

    while (Raw != 0)
    {
        len += 1;
        Raw /= 10;
    }

    for (int i = 0; i <= len; i++)
    {
        Raw = Num % 10;
        
        if (i == 0)
        {
            Power = 1;
            i++;
        }
        else
        {
        Power *= 2;
        // printf("power: %d", Power);
        }    
        
        Decimal += Raw * Power;
        Num /= 10;
    }
    
    printf("your decimal: %d \n", Decimal);
}

    void DecimalToBinary(int Num)
{
   int Quo;
   int Remain;
   int a;

    int Binary[50];

    for (int i = 0; i < 50; i++)
    {
        Binary[i] = 0;
    }

    while (1)
    {
        if (Num == 1)
        {
            break;
        }

        for (int i = 50-1; i >= 0; i--)
        {
            a = i;
            Binary[i] = Num % 2;
            Num /= 2;

            if (Num == 1)
            {
                Binary[i-1] = 1;
                break;
            }   
        }
    }
    
    printf("Binary: ");
    for (int i = 0; i < 50; i++)
    {
        printf("%d", Binary[i]);
    }
    printf("\n");
}

    void DecimalToHexadecimal(int Num)
    {
        int Raw = Num;
        int Remain;
        char Hexa[1][10];

        for (int i = 0; i < 10; i++)
        {
            Hexa[0][i] = '0';
        }
        
        while (1)
        {
            if (Raw <= 0)
            {
                break;
            }
            
            for (int i = 9; i >= 0; i--)
            {
                if (Raw <= 0)
                {
                    break;
                }

                Remain = Raw % 16;
                Raw /= 16;

                switch (Remain)
                {
                case 10:
                    Hexa[0][i] = 'A';
                    break;
                
                case 11:
                    Hexa[0][i] = 'B';
                    break;

                case 12:
                    Hexa[0][i] = 'B';
                    break;

                case 13:
                    Hexa[0][i] = 'C';
                    break;

                case 14:
                    Hexa[0][i] = 'D';
                    break;

                case 15:
                    Hexa[0][i] = 'E';
                    break;

                default:
                    Hexa[0][i] += Remain;
                    break;
                }
                // printf("%d\n", i);
            }
        }
        printf("Hexadecimal: ");
        for (int i = 0; i < 10; i++)
        {
            printf("%c", Hexa[0][i]);
        }
        
    }

    void HexadecimalToDecimal(char Hex[10])
    {
        int len = strlen(Hex);
        int Decimal = 0;

        for (int i = 0; i < len; i++)
        {
            switch (Hex[i])
            {
            case 'A':
                Decimal += 10;
                break;
            
            case 'B':
                Decimal += 11;
                break;

            case 'C':
                Decimal += 12;
                break;
            
            case 'D':
                Decimal += 13;
                break;

            case 'E':
                Decimal += 14;
                break;

            case 'F':
                Decimal += 15;
                break;
            
            default:
                Decimal += Hex[i] - '0';
                break;
            }
        }

        printf("Decimal: %d", Decimal);
    }

    void BinaryToHexadecimal(int Num)
    {
        int Raw1 = Num;
        int len = 0;
        int Raw[len];

        while (Raw1 != 0)
        {
            len += 1;
            Raw1 /= 10;
        }
        Raw1 = Num;
        for (int i = 0; i < len; i++)
        {
            Raw[i] = 0;
        }  
        for (int i = len-1; i >= 0; i--)
        {
            Raw[i] = Raw1 % 10;
            Raw1 /= 10;   
        }

        for (int i = len-1; i >= len; i--)
        {
            int Raw2 = 0;

            Raw2 += Raw[i] * 1;
            Raw2 += Raw[i-1] * 10;
            Raw2 += Raw[i-2] * 100;
            Raw2 += Raw[i-3] * 1000;

            

        }
               

    }

    int main()
{
/*
    // binary to decimal
    int Binary;
    printf("Binary to Decimal\ninput Binary: ");
    scanf("%d", &Binary);

    BinaryToDecimal(Binary);
    printf("\n");
    
    // deciamal to binary
    int Decimal;
    printf("Decimal to Binary\ninput Decimal: ");
    scanf("%d", &Decimal);

    DecimalToBinary(Decimal);


    // decimal to hexadecimal
    int Decimal;
    printf("Decimal to Hexadecimal\ninput Decimal: ");
    scanf("%d", &Decimal);

    DecimalToHexadecimal(Decimal);

    // hexadecimal to decimal
    char Hex[10];
    printf("Hexadecimal to Decimal\ninput Hexadecimal [max 10 characters]: ");
    scanf("%s", Hex);

    HexadecimalToDecimal(Hex);
*/
    // binary to hexadecimal
    int Binary;

    printf("Binary To Hexadeimal\ninput Binary: ");
    scanf("%d", &Binary);

    BinaryToHexadecimal(Binary);
}