#include <stdio.h>

int main() {

int num1 = 10;     // First number

int num2 = 20;   // Second number

printf("Before swapping:\n");

printf("num1 = %d\n", num1);

printf("num2 = %d\n", num2);

int temp; // Temporary variable to store the value during swapping

// Step 1: Store the value of num1 in the temporary variable

temp = num1;

// Step 2: Assign the value of num2 to num1

num1 = num2;

// Step 3: Assign the value in the temporary variable to num2

num2 = temp;

printf("\nAfter swapping:\n");

printf("num1 = %d\n", num1);

printf("num2 = %d\n", num2);

return 0;

}
