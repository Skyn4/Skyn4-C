#include <stdio.h>
#include <stdlib.h>

//This program is coded to add the digits of an entered 4-digit number.

int main()
{
    int TheNumber,sum,remainder,first,second,third,fourth;
    printf("Welcome to program please enter a 4 digit number.\n");
    scanf("%d",&TheNumber);


    //For find the first number.
    first=TheNumber/1000;
    remainder=TheNumber% 1000;

    //For find the second number.
    second=remainder/ 100;
    remainder=remainder% 100;

    //For find third and fourth number.
    third=remainder/ 10;
    fourth=remainder% 10;

    sum=first+second+third+fourth;

    printf("The sum of the digits of the 4-digit number you entered is %d",sum);
    printf("\n\n");

    //Coded by Skyn4
    getch();
    return 0;
}
