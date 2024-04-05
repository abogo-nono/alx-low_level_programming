#ifndef MAIN_H
#define MAIN_H

#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * read_textfile - function that reads a text file
 * and prints it to the POSIX standard output
 *
 * @filename: the name of the file to be read
 * @letters: is the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters);

/**
 * create_file -
 */
int create_file(const char *filename, char *text_content);

/**
 * append_text_to_file -
 */
int append_text_to_file(const char *filename, char *text_content);

#endif /* MAIN_H */