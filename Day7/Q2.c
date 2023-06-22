#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void copy_file(char *source_file, char *target_file, char *option) {
  FILE *source, *target;
  char ch;

  source = fopen(source_file, "r");
  if (source == NULL) {
    printf("Error opening source file.\n");
    exit(1);
  }

  target = fopen(target_file, "w");
  if (target == NULL) {
    printf("Error opening target file.\n");
    exit(1);
  }

  if (strcmp(option, "u") == 0) {
    while ((ch = fgetc(source)) != EOF) {
      fputc(toupper(ch), target);
    }
  } else if (strcmp(option, "l") == 0) {
    while ((ch = fgetc(source)) != EOF) {
      fputc(tolower(ch), target);
    }
  } else if (strcmp(option, "s") == 0) {
    while ((ch = fgetc(source)) != EOF) {
      if (ch == ' ') {
        fputc(' ', target);
      } else {
        fputc(toupper(ch), target);
      }
    }
  } else {
    while ((ch = fgetc(source)) != EOF) {
      fputc(ch, target);
    }
  }

  fclose(source);
  fclose(target);
}

int main(int argc, char *argv[]) {
  char *source_file, *target_file, *option;

  if (argc != 4) {
    printf("Usage: %s source_file target_file option\n", argv[0]);
    exit(1);
  }

  source_file = argv[1];
  target_file = argv[2];
  option = argv[3];

  copy_file(source_file, target_file, option);

  return 0;
}