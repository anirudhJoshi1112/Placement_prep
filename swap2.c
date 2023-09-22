#include <stdio.h>

int main() {

int num1, num2; // Declare variables to hold the two numbers

printf("Enter the first number: ");

scanf("%d", &num1); // Read the first number from user

printf("Enter the second number: ");

scanf("%d", &num2); // Read the second number from user

printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2); // Display the values of numbers before swapping

// Swap the values of the two numbers using arithmetic operations

num1 = num1 + num2;

num2 = num1 - num2;

num1 = num1 - num2;

printf("After swapping: num1 = %d, num2 = %d\n", num1, num2); // Display the values of numbers after swapping

return 0; // Indicate successful execution of the program

}
