#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#define EI_NIDENT 16
int _putchar(char c);
int main(int argc, char *argv[]);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
#endif