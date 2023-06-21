#include <stdio.h>
#include <string.h>

struct Student {
  int rollno;
  char name[20];
  float marks;
};

void parse_string(char *string, struct Student *students, int n) {
  int i;
  for (i = 0; i < n; i++) {
    // Split the string into three parts: roll number, name, and marks.
    char *token1, *token2, *token3;
    token1 = strtok(string, " ");
    token2 = strtok(NULL, " ");
    token3 = strtok(NULL, " ");

    // Convert the roll number to an integer.
    students[i].rollno = atoi(token1);

    // Copy the name into the structure.
    strcpy(students[i].name, token2);

    // Convert the marks to a float.
    students[i].marks = atof(token3);
  }
}

int main() {
  int n;
  char string[100];
  struct Student students[10];

  // Get the number of inputs from the user.
  printf("Enter the number of inputs: ");
  scanf("%d", &n);

  // Get the input string from the user.
  printf("Enter the input string: ");
  scanf("%s", string);

  // Parse the string and initialize the array of structures.
  parse_string(string, students, n);

  // Print the array of structures.
  for (int i = 0; i < n; i++) {
    printf("Student %d: rollno = %d, name = %s, marks = %.2f\n", i + 1,
           students[i].rollno, students[i].name, students[i].marks);
  }

  return 0;
}