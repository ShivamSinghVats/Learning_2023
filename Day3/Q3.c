#include <stdio.h>

int main() {
  int number;
  int largest_number;
  int i;

  printf("Enter a 4-digit number: ");
  scanf("%d", &number);

  largest_number = number;
  for (i = 0; i < 4; i++) {
    int current_digit = number % 10;
    int next_digit = (number / 10) % 10;

    if (current_digit < next_digit) {
      largest_number = number - current_digit * 10;
    }

    number = number / 100;
  }

  printf("The largest number that can be formed by deleting a single digit from %d is %d.\n", number, largest_number);

  return 0;
}