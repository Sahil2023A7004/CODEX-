#include<stdio.h>
int main()
{
    int num,fact=1;
    printf("enter number\n");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        fact = fact*i;
    }
    printf("the factorial of given number is %d",num,fact);
    return 0;
}