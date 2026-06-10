#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int _putchar(int c);
void _puts(char *str);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
void separator(void);

void print_alphabet(void);
void print_alphabet_x10(void);

int _islower(int c);
int _isupper(int c);
int _isalpha(int c);
int _isdigit(int c);

int print_sign(int n);
int _abs(int);

int print_last_digit(int);
long highest_place_value(long);

void jack_bauer(void);

void times_table(void);
void print_times_table(int n);

int add(int, int);
int mul(int, int);

void print_numbers(void);
void print_number(long);
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
void puts2(char *str);
void puts_half(char *str);
long highest_place_value(long num);

#endif
