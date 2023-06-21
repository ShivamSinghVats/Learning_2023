#include <stdio.h>
int main() {
   int n, i;
   int diff =0;
   int even=0;
   int odd=0;

   printf("Enter the size of array");
   scanf("%d", &n);
   int arr[n];

   printf("Enter the elements of an array");
   for(int i=0; i<n; i++)
   {
    scanf("%d", &arr[i]);
   }

   for(i=0; i<n; i++)
   {
    if(arr[i]%2==0)
    even = even + arr[i];
    else if(arr[i]%2 != 0)
    odd = odd + arr[i];
   }
   diff=odd-even;
   printf("\nThe difference between even and odd numbers of this array: %d",diff);
   return 0;
}
