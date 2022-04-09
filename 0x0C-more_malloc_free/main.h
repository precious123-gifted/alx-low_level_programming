
#ifndef MAIN_FILE
#define MAIN_FILE

#include <stdlib.h>
#include <stdio.h>

int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void errors(void);
int _strdigit(char *s);
void _puts(char *s);
void rev_num_str(int start, int end, char *ns);
int _strlen(char *s);
char *strmul(char *a, char *b);
int main(int argc, char *argv[]);
int is_digit(char *s);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
#endif
