#!/bin/bash/

gcc -c -Wall -Werror -pedantic *.c
ar -rc liball.a *.o
ranlib libmy.a 
