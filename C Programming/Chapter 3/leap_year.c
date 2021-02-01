#include <stdio.h>

int main()
{

    int Year;

    printf("Enter the Year\n");
    scanf("%d", &Year);

    if ((Year / 4 == 0))
    {
        if ((Year / 100==0))
        {
            if ((Year / 400==0))
            {
                printf("The Year is a leap year, It has 366 Days%d\n", Year);
            }
        }
    }
    // if((Year/4 ==0) || (Year/100==0) || (Year/400==0))
    // {
    //     printf(" The year is a leap year, it has 366 days\n");
    // }
    else
    {
    printf("The Year is not a Leap Year/n");
    }

return 0;
}