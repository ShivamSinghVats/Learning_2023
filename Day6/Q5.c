int search_student_by_name(struct Student *students, int n, char *name) {
  int i;

  for (i = 0; i < n; i++) {
    if (strcmp(students[i].name, name) == 0) {
      return i;
    }
  }

  return -1;
}