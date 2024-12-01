#include <stdio.h>
#include <string.h>

    struct Employee
{
    int employee_ID;
    char employee_Name[69];
    int Date_Of_Joining;
};

    char* Name_Input()
{
    static char Name[69];
    printf("enter your name: ");
    fgets(Name, 69, stdin);

    return Name;
}

    int ID_Input()
{
    int ID;
    printf("enter your ID: ");
    scanf("%d", ID);

    return ID;
}

    int Date_Input()
{
    int Date;
    printf("enter your date of joining.[YYYY]: ");
    scanf("%d", &Date);

    return Date;
}

    int Tenure_Check(int Current_Date, struct Employee s)
{
    static int Count = 0;
    if ((Current_Date - s.Date_Of_Joining) > 3)
    {
        printf("ID: %d, Name: %s, Date of Joining: %d", s.employee_ID,s.employee_Name,s.Date_Of_Joining);
        Count++;
    }
    return Count;
}

    int main()
{
    int Count;
    int Current_Date;
    printf("enter current date: ");
    scanf("%d", &Current_Date);

    struct Employee Array[4];

    for (int i = 0; i < 4; i++)
    {
        snprintf(Array[i].employee_Name, sizeof(Array[i].employee_Name), Name_Input());
        Array[i].employee_ID = ID_Input();
        Array[i].Date_Of_Joining = Date_Input();
        
        Count = Tenure_Check(Current_Date, Array[i]);
    }
    printf("Count of employees matching the Tenure: %d", Count);
}