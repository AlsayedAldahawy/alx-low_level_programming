#ifndef FUNC_PTR_H
#define FUNC_PTR_H


void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif /*FUNC_PTR_H*/
