# include <stdio.h>
# include <stdlib.h>
int main()
{
    int ageD, ageM, ageY;
    int curD, curM, curY;
    printf("\n Enter the current date in the following format - dd/mm/yyyy : ");
    scanf("%d%d%d", &curD, &curM, &curY);
    int day, month, year;
    printf ("\nEnter your date of birth in the following format - dd/mm/yyyy : ");
    scanf ("%d%d%d", &day, &month, &year);
    if (curM == 2 || 3 || 5 || 7 || 8 || 10 || 12)
    {
        if (curD < day)
        {
            curD += 30;
            curM -= 1;
        }
        if (curM < month)
        {
            curM += 12;
            curY -= 1;
        }
    }
    else if (curM == 4 || 6 || 9 || 11)
    {
        if (curD < day)
        {
            curD += 31;
            curM -= 1;
        }
        if (curM < month)
        {
            curM += 12;
            curY -= 1;
        }
    }
    else
    {
        if (curD < day)
        {
            if (curY % 4 != 0)
            {
                curD += 28;
                curM -= 1;
            }
            else
            {
                curD += 29;
                curM -= 1;
            }
            if (curM < month)
            {
                curM += 12;
                curY -= 1;
            }
        }
    }
    ageD = curD - day;
    ageM = curM - month;
    ageY = curY - year;
    printf("\n\nYour current age is: %d years %d months %d days.\n\n", ageY, ageM, ageD);
    if (ageY >= 18)
    {
        printf("You are an adult now!\n\n");
    }
    else
    {
        printf("You are not an adult yet.\n\n");
    }
    return 0;
}
