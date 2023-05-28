#include<stdio.h>
#include<math.h>
int main ()
{
  int num1, num2;
    printf("Enter two integers :");
    scanf("%d%d", &num1, &num2);

  if (num1 == num2)
    printf("both are equal");
  else if (num1 > num2) 
    printf("%d is greater", num1);
  else
    printf("%d is greater", num2);

  return 0;
}