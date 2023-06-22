#include <stdio.h>

void print_bits(int n) {
  for (int i = 31; i >= 0; i--) {
    printf("%d", (n & (1 << i)) ? 1 : 0);
  }
}

int main() {
  int n;
  printf("Enter a 32-bit integer: ");
  scanf("%d", &n);
  printf("The binary representation of %d is: ", n);
  print_bits(n);
  printf("\n");
  return 0;
}