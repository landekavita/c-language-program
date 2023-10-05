#include<stdio.h>
void main()
{
    int a,b,c,total;
    float avg;
    printf("Enter the number ");
    scanf("%d",&a);
    
    printf("Enter the number ");
    scanf("%d",&b);
    
    printf("Enter the number ");
    scanf("%d",&c);
    total=a+b+c;
    avg=total/3;
    if(avg>=60)
    {
        printf("Gread a");
    }
    else if(avg>=50 && avg<=59)
    {
        printf("gread b");
    }
    else if(avg>=40 && avg<=50)
    {
        printf("gread c");
    }
    else
    {
        printf("your are fail");
    }
} 
