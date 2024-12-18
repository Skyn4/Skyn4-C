#include <stdio.h>
#include <stdlib.h>

int main()
{
    // A four-digit number is special if the square of the sum of its first two digits and last two digits is equal to the number itself.
    printf("Welcome to the program that checks whether the entered number is a special number.\n");
    printf("Please enter a four-digit number: ");

    int number1, number2;

    scanf("%d", &number1);

    number2 = (number1 / 100 + number1 % 100) * (number1 / 100 + number1 % 100);

    if (number1 == number2) {
        printf("This number is a special number.");
    } else {
        printf("This number is not a special number.");
    }

    return 0;
}
//Coded by Skyn4
