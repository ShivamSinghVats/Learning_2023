#include<stdio.h>
struct shape{
   float length;
   float width;
   float height;
   float areabox;
   float volumebox;
};
int main(){
   struct shape s;
   float pi = 3.14;
   //taking the input from user
   printf("Enter the length : ");
   scanf("%f",&s.length);
   printf("Enter the width : ");
   scanf("%f",&s.width);
   printf("Enter the height : ");
   scanf("%f",&s.height);
   //area of circle
   s.areabox = (float)(2*s.length*s.width)+(2*s.length*s.height)+(2*s.height*s.width);
   s.volumebox = (float)(s.length*s.height*s.width);
   printf("Total surface area of Area of box : %.2f\n", s.areabox);
   printf("Volume of box : %.2f", s.volumebox);
   return 0;
}