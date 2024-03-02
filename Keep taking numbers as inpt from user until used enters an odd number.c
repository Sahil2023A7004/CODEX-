#include<stdio.h>
int main()
//Keep taking numbers as inpt from user until used enters an odd number
{
    int a;
    do{
    printf("enter number");
    scanf("%d",&a);
    printf("%d\n",a);
    if(a%2 != 0)
    {
        break;
        }
    }while(1);
    printf("done");
    return 0;
}