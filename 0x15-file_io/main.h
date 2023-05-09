#ifndef MAIN_H
#define MAIN_H
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int argc_checker(int argc);
int fd_closer(int fd);
int copy_file(const char *file_from_name, const char *file_to_name);
#endif

