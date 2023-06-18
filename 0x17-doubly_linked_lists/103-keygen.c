#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char *input_str = NULL;
    char *password = NULL;
    int i, len;

    if (argc < 2) {
        printf("Usage: %s <input string>\n", argv[0]);
        return (1);
    }

    input_str = argv[1];
    len = strlen(input_str);

    password = malloc((len + 1) * sizeof(char));

    for (i = 0; i < len; i++) {
        password[i] = input_str[i] + 1;
    }

    for (; i < 8; i++) {
        password[i] = 'A' + i;
    }

    password[9] = '\0';

    printf("%s\n", password);

    free(password);

    return (0);
}
