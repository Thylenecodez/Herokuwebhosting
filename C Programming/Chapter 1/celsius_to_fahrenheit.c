#include <stdio.h>

int main()
{
    float celsius, far;
    
    printf("Enter the temperature in celsius\n");
    scanf("%f", &celsius);
    far = (celsius * 9 / 5) + 32;
    printf("The temperature in Fahrenheit will be %f", far);

    return 0;
}