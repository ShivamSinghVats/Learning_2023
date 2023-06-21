void initialize_structures(struct word *words, int number_of_words) {
  for (int i = 0; i < number_of_words; i++) {
    words[i].word = malloc(words[i].length + 1);
    memset(words[i].word, 0, words[i].length + 1);
  }
}