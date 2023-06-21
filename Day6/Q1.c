#include <stdio.h>
#include <string.h>

struct word {
  char *word;
  int length;
};

int parse_string(char *string, struct word *words, int max_words) {
  int i = 0;
  char *token;

  token = strtok(string, " ");
  while (token != NULL && i < max_words) {
    words[i].word = token;
    words[i].length = strlen(token);
    i++;
    token = strtok(NULL, " ");
  }

  return i;
}

int main() {
  char *string = "This is a test string.";
  struct word words[10];
  int number_of_words;

  number_of_words = parse_string(string, words, 10);

  for (int i = 0; i < number_of_words; i++) {
    printf("Word: %s, Length: %d\n", words[i].word, words[i].length);
  }

  return 0;
}