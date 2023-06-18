#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{

    char password[7]; char *codex = NULL;
    int i;

    codex = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";

    srand(time(NULL));

    for (i = 0; i < 6; i++) {
        password[i] = codex[rand() % 64];
    }

    password[6] = '\0';
    printf("%s\n", password);

    return (0);
}
