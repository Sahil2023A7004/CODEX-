#include<stdio.h>
int main()
//Print the sum of first n natural numbers and the numbers in reverse order
{
    int n;
    int sum=0;
    printf("enter the value of n");
    scanf("%d",&n);
    int i=1;
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    
    printf("sum is %d\n",sum);
    for(int i=n;i>=1;i--){
        printf("%d\n",i);
    }
    return 0;
}