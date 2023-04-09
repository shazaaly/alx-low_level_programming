#!/bin/bash
gcc -g -Wall -Werror -Wextra -pedantic -c *.c
ar rcs liball.a *.o