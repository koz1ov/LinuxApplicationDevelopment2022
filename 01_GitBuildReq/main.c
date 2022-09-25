#include <stdio.h>
#include <stdlib.h>

int main() {
    char *input = calloc(1, sizeof(char));
    int input_cap = 1;
    int input_size = 0;
    int ch;
    while (1) {
        ch = getchar();
        if (ch == EOF || ch == '\n')
            break;

        if (input_size + 1 >= input_cap) {
            input_cap = input_cap * 2 + 1;
            input = realloc(input, input_cap);
        }

        input[input_size++] = ch;
    }

    input[input_size] = 0;
    printf("Hello, %s!", input);
    free(input);
    return 0;
}
