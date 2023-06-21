#include <stdio.h>
struct student {
    char firstName[50];
    int roll;
    float marks;
} s[];

int main() {
    int i;
    int n;
    printf("Enter number of students:\n");
    scanf("%d", &n);

    printf("Enter data of students:\n");
    for (i = 0; i < n; ++i) {
        s[i].roll = i + 1;
        printf("\nFor roll number%d,\n", s[i].roll);
        printf("Enter first name: ");
        scanf("%s", s[i].firstName);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }
    printf("\nDisplaying data:\n");

    for (i = 0; i < n; ++i) {
        printf("\nRoll number: %d\n", i + 1);
        printf("First name: ");
        puts(s[i].firstName);
        printf("Marks: %.1f", s[i].marks);
        printf("\n");
    }
    return 0;
}