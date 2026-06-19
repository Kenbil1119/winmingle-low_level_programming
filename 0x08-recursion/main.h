#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <unistd.h>
#include <stdbool.h>

int _putchar(int c);
void _puts(char *str);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
int _atoi(char *s);
void separator(void);

void print_alphabet(void);
void print_alphabet_x10(void);

int _islower(int c);
int _isupper(int c);
int _isalpha(int c);
int _isdigit(int c);
char *string_toupper(char *);
char *cap_string(char *);

int print_sign(int n);
int _abs(int);

int print_last_digit(int);
long highest_place_value(long);

void jack_bauer(void);
char *leet(char *);
char *rot13(char *);

void times_table(void);
void print_times_table(int n);

int add(int, int);
int mul(int, int);

void print_numbers(void);
void print_number(int);
void more_numbers(void);
void print_most_numbers(void);

void print_to_98(int n);
void reset_to_98(int *n);

void print_line(int n);
void print_diagonal(int n);
void print_square(int size);
void print_triangle(int size);

void swap_int(int *a, int *b);
void print_rev(char *s);
void rev_string(char *s);
void reverse_array(int *a, int n);
void puts2(char *str);
void puts_half(char *str);
long highest_place_value(long num);

char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);
void set_string(char **s, char *to);

void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int is_prime_number(int n);
int is_palindrome(char *s);
int wildcmp(char *s1, char *s2);

#endif
