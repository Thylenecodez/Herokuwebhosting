#include <stdio.h>

int main()
{
    int Marks;

    printf("Enter your Marks (0-100) \n");
    scanf("%d", &Marks);

    switch (Marks/10)
    {
    case 10:
    case 9:
        printf("Your Grade is A");
        break;
    case 8:
        printf("Your Grade is B");
        break;
    case 7:
        printf("Your Grade is C");
        break;
    case 6:
        printf("Your Grade is D");
        break;
    default:
        printf("Your Grade is F");
        break;

    }

    return 0;
}