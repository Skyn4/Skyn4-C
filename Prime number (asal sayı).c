#include <stdio.h>
#include <stdlib.h>


/*
  If a number is not divisible by the numbers up to its half,
  it cannot be divisible by any larger number and is therefore prime.
*/
int main()
{
   int x, y;
   x = 0;
   y = 2;

   printf("Please enter a positive number\n");
   scanf("%d", &x);
   if (x < 0) {
       printf("Please enter a positive number\n");
       return 0;
   }
   while (y < x / 2) {
       if (x % y == 0) {
           printf("%d is not a prime number because it is divisible by %d\n", x, y);
       }
       y++;
   }
   printf("The entered number is a prime number\n");

   return 0;
}
//Coded by Skyn4
