#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char *line = NULL;
    size_t len = 0;
    ssize_t read;

    fp = fopen("data.csv", "r");
    if (fp == NULL) {
        fprintf(stderr, "Could not open file\n");
        exit(1);
    }

    while ((read = getline(&line, &len, fp)) != -1) {
        printf("%s\n", line);
    }

    fclose(fp);
    free(line);

    return 0;
}