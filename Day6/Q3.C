void display_students(struct Student *students, int n) {
  int i;

  for (i = 0; i < n; i++) {
    printf("Student %d: rollno=%d, name=%s, marks=%.2f\n", i + 1, students[i].rollno, students[i].name, students[i].marks);
  }
}