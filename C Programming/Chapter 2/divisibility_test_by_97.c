#include<stdio.h>

int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d", &num);

    printf("Divisibility test returns %d", num%97);

    return 0;
}