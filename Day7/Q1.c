#include <stdio.h>
#include <stdlib.h>

int main() {

  char source_file[] = "source.txt";
  char target_file[] = "target.txt";

  FILE *source = fopen(source_file, "r");
  if (source == NULL) {
    printf("Error opening source file.\n");
    exit(1);
  }

  FILE *target = fopen(target_file, "w");
  if (target == NULL) {
    printf("Error opening target file.\n");
    exit(1);
  }

  char ch;
  while ((ch = fgetc(source)) != EOF) {
    fputc(ch, target);
  }

  fclose(source);
  fclose(target);

  printf("File copied successfully.\n");

  return 0;
}