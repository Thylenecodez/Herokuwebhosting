#include<stdio.h>

int main()
{
    int radius;
    float pi=3.14;
    int height;
    printf("Enter the radius of Cylinder\n");
    scanf("%d", &radius);

    printf("Enter the Height of Cylinder\n");
    scanf("%d", &height);
  
    printf("The Volume of the cylinder is %f", pi*radius*radius*height);

    return 0;
}