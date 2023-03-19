#include<stdio.h>
int main()
{
    int num,n1=0,n2=1,n3,i= 3;
    printf("enter the number:\n");
    scanf("%d",&num);
    printf(" fibo series:\n %d \n %d",n1,n2);
    while(i<=num)
    {
        n3= n1+n2;
        printf("\n %d",n3);
        n1= n2;
        n2= n3;
        i=i+1;
    }
}