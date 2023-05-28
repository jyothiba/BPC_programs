#include<stdio.h>
#include<math.h>
int main() {
   float r, area;
 
   printf("\nEnter the radius of Circle : ");
   scanf("%f", &r);
 
   area = 3.14 * r * r;
   printf("\nArea of Circle : %f", area);
 
   return 0;
}