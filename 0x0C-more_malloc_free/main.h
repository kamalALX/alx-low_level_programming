#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

#define min(x, y) (((x) < (y)) ? (x) : (y))

unsigned int my_len(char *p);
int _putchar(char c);
void *malloc_checked(unsigned int b);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int _atoi(char *s);
void check_int(int argc, char *argv[]);

#endif /*MAIN_H*/
