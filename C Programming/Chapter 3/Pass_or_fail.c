#include <stdio.h>

int main()
{
    int English, Mathematics, Science;
    float Total;

    printf("Enter your Marks in English\n");
    scanf("%d", &English);

    printf("Enter your Marks in Mathematics\n");
    scanf("%d", &Mathematics);

    printf("Enter your Marks in Science\n");
    scanf("%d", &Science);

    Total=(English+Mathematics+Science)/3;


    if ((Total<40) || English<16.5 || Mathematics<16.5 || Science<16.5)

    {
        printf("Your Total Percentage is %f and You are Fail\n", Total);
        
    }
    else
    {
        printf("Your Total Percentage is %f and You are Pass\n", Total);
    }

    return 0;
}
