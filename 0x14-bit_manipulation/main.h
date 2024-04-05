#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 *
 * @b: is pointing to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b);

/**
 * print_binary -  a function that prints the binary representation of a number.
 *
 * @n: the number to print
 */
void print_binary(unsigned long int n);

/**
 * get_bit - a function that returns the value of a bit at a given index.
 *
 * @n: the number
 * @index: is the index, starting from 0 of the bit you want to get
 *
 * Return: the value of the bit at index index or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index);

/**
 * set_bit - a function that sets the value of a bit to 1 at a given index.
 *
 * @n: the number
 * @index: is the index, starting from 0 of the bit you want to set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index);

/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index
 *
 * @n: the number
 * @index: is the index, starting from 0 of the bit you want to set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index);

/**
 * flip_bits - a function that returns the number of bits you would need to flip
 * to get from one number to another.
 *
 * @n: the number
 * @m: the number of bits to flip
 *
 * Return: the number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m);

/**
 * _putchar - a function that prints a character to the standard output
 * 
 * @c: the character to print
 * 
 * Return: the character printed
*/
int _putchar(char c);

#endif
