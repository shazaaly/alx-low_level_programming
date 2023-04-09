#!/bin/bash
gcc -c *.c -std=gnu99 -Wall -Werror -Wextra -pedantic
ar rcs liball.a *.o

