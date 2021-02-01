#include<stdio.h>

int main()
{
    int principal,rate,time;
    
    printf("Enter the principal amount\n");
    scanf("%d", &principal);

    printf("Enter the Rate of the interest \n");
    scanf("%d", &rate);

    printf("Enter the Time period\n");
    scanf("%d", &time);

    int SimpleInterest= (principal*rate*time)/100;
    printf("The Simple Interest is %d", SimpleInterest);
    return 0;
}