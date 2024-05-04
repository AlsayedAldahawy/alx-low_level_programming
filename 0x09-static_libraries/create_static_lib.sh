#!/usr/bin/env bash
# shellcheck disable=SC2035

gcc -c -Wall -Werror -pedantic *.c
ar -rc liball.a *.o
ranlib libmy.a 
