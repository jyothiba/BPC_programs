#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("enter the number:");
    scanf("%d", &n);

    switch(n%2 == 1)
    {
       case 1 : printf("is an even nos");
        break;
        default : exit(0);
    }
   
}