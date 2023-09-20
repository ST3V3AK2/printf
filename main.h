#ifndef PRINTF_PROTOTYPES
#define PRINTF_PROTOTYPES

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int _putchar(char c);
int _puts(char *str);
int count_int(int n);
void print_num(int n);
int print_int(int n);
int _printf(const char *format, ...);

#endif
