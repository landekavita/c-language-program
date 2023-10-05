#include<stdio.h>
void main()
{
    int a,b,c;
    printf(" Enter the number ");
    scanf("%d",&a);
    printf(" Enter the second number ");
    scanf("%d",&b);
    printf(" swaping the numbers \n a=%d,b=%d\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("swapping a and b =\n a=%d,b=%d",a,b);
}
