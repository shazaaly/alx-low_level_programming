#!/bin/bash
gcc -c -Wall -Werror -Wextra -pedantic -c *.c
ar rcs liball.a *.o