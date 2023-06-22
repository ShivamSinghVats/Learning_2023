#include <stdio.h>
#include <stdlib.h>
#include<string.h>

struct Student {
  int rollno;
  char name[20];
  float marks;
};

void parse_string(char *str, struct Student *students, int n) {
  char *token;
  int i;

  for (i = 0; i < n; i++) {
    token = strtok(str, " ");
    students[i].rollno = atoi(token);
    token = strtok(NULL, " ");
    strcpy(students[i].name, token);
    token = strtok(NULL, " ");
    students[i].marks = atof(token);
  }
}

void initialize_students(struct Student *students, int n) {
  int i;

  for (i = 0; i < n; i++) {
    students[i].rollno = 0;
    strcpy(students[i].name, "");
    students[i].marks = 0.0;
  }
}

int main() {
  int n;
  struct Student *students;
  char str[100];

  printf("Enter the number of students: ");
  scanf("%d", &n);

  students = malloc(n * sizeof(struct Student));
  initialize_students(students, n);

  printf("Enter the student details (rollno name marks): ");
  scanf("%s", &str);

  parse_string(str, students, n);

  for (int i = 0; i < n; i++) {
    printf("Student %d: rollno=%d, name=%s, marks=%.2f\n", i + 1, students[i].rollno, students[i].name, students[i].marks);
  }

  free(students);

  return 0;
}