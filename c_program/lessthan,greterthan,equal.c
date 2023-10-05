#include<stdio.h>
void main()
{
    int a;
    printf("Enter the a value ");
    scanf("%d",&a);
    if(a>10)
    {
        printf("large number =%d",a);
    }
    else if(a<10)
    {
        printf("small number =%d",a);
    }
    else if(a==10)
    {
        printf("number is equal to equal ");
    }
    else
    {
	printf("number is not in range");
    }
}


