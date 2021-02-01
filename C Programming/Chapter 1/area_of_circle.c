#include<stdio.h>

int main()
{
    int radius;
    float pi=3.14;

    printf("Enter the radius of the circle\n");
    scanf("%d", &radius);
    
    printf("The Area of the circle is %f", pi*radius*radius);

    return 0;
}