#include<stdio.h>
int main(){
   int base, expo;
   double value = 1;
   printf("Enter a base value:");
   scanf("%d", &base);
   printf("Enter an exponent value: ");
   scanf("%d", &expo);
   while (expo != 0)
   {
      value *= base;
      --expo;
   }
   printf("result = %lf", value);
   return 0;
}