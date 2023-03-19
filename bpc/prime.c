#include<stdio.h>
#include<math.h>
int main()
{
    int i=1,count=0,num;
    printf("enter the nos:\n");
    scanf("%d",&num);
    do
    {
        if(num%i==0)
        count++;
        i++;
    }
    while(i<=num);
    if(num==2)
        printf("num is prime.\n");
        else
        printf("num is not prime.\n");

}
