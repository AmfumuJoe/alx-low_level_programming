#ifndef FUCTION_POINTERS_H
#define FUCTIONS_POINTERS_H

#include <stdio.h>

void printf_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void(*action)(int))
int int_index(int *array, int size, int (*cmp)(int));

#endif
