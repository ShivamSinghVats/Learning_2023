void initialize_students(struct Student *students, int n) {
  int i;

  for (i = 0; i < n; i++) {
    students[i].rollno = 0;
    strcpy(students[i].name, "");
    students[i].marks = 0.0;
  }
}