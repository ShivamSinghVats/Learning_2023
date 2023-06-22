#include <stdio.h>

int main() {
  int n, smallest_digit = 9, largest_digit = 0;
  int number, digit;

  printf("Enter the number of numbers: ");
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    printf("Enter a number: ");
    scanf("%d", &number);

    while (number > 0) {
      digit = number % 10;
      if (digit < smallest_digit) {
        smallest_digit = digit;
      } else if (digit > largest_digit) {
        largest_digit = digit;
      }
      number /= 10;
    }
  }

  printf("The smallest digit is: %d\n", smallest_digit);
  printf("The largest digit is: %d\n", largest_digit);

  return 0;
}