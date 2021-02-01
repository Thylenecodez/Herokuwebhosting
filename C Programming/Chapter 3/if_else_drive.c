// this one is completed now by using logical operators
#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter your Age\n");
    scanf("%d", &a);

    if(a>=18 && a<=70)
    {
        printf("You can Drive", a);
    }
    else{
        printf("You can't Drive", a);
    }
    // if(a>90){
    //     printf("You're above 90, You can't Drive", a);

    // }

    return 0;
}