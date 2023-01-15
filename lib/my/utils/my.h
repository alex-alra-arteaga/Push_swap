/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** Contains the prototypes of all the functions in libmy.a
*/

#include <stdbool.h>
#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>
#include <sys/syscall.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <grp.h>
#include <pwd.h>
#include <dirent.h>
#include <unistd.h>
#include <linux/kdev_t.h>
#include <sys/sysmacros.h>
#include <time.h>
#include "mylist.h"

#ifndef MY_H_
    #define MY_H_

int len_ulong_long(char const *str);

char *my_revstr_ulong_long(char *str);

char* my_ulong_long_to_str(unsigned long long num);

char* my_long_to_str(long num);

char* my_int_to_str(int num);

char* my_uint_to_str(unsigned int num);

int if_hexadecimal(char const *str, int cnt_1);

int is_char_alpha(char c);

int num_words(char const *str, int i, int cnt);

char **my_str_to_word_array(char const *str);

int my_putstr_stderr(char const *str);

void my_putchar_stderr(char c);

char **my_split(char const *str, char split);

int number_of_files(char *path);

int string(char const *str);

int change_sign(int sign, int number);

int get_sign_before_int(int i, char const *str, int sign);

int prevent_under_overflow(char *aux, int i, int number, int number1);

char *strlowcase02(char *str);

int compare_and_swap(int *array, int temp);

char *same_strs (char *str, char const *to_find, int index);

int my_compute_power_rec(int nb, int p);

int my_compute_square_root(int nb);

int my_find_prime_sup(int nb);

int my_getnbr(char const *str);

int my_isneg(int n);

int my_printf(char *format, ...);

int my_is_prime(int nb);

void my_putchar(char c);

int my_put_nbr(int nb);

int change_sign(int sign, int number);

int my_getnbr(char const *str);

int get_sign_before_int(int i, char const *str, int sign);

int prevent_under_overflow(char *aux, int i, int number, int number1);

int my_putstr(char const *str);

char *my_revstr(char *str);

int my_arrlen(char **arr);

int my_showmem(char const *str, int size);

int my_showstr(char const *str);

void my_sort_int_array(int *array, int size);

char *my_strcapitalize(char *str);

char *my_strcat(char *dest, char const *src);

char *my_strdup(char const *src);

void my_swap_long(long *a, long *b);

void my_sort_long_array(long *array, int size);

bool includes_any_file(char **argv);

int my_strcmp (char const *s1, char const *s2);

char *my_strcpy(char *dest, char const *src);

int my_str_isalpha(char const *str);

int my_str_islower(char const *str);

int my_str_isnum(char const *str);

int my_str_isprintable(char const *str);

int my_str_isupper(char const *str);

int my_strlen(char const *str);

char *my_strlowcase(char *str);

char *my_strncat(char *dest, char const *src, int nb);

int my_strncmp(char const *s1, char const *s2, int n);

char *my_strncpy(char *dest, char const *src, int n);

char *my_strstr(char *str, char const *to_find);

char *my_strupcase(char *str);

void my_swap(int *a, int *b);

algo_state_t *initialize_pushswap(void);

bool is_num(char c);

bool is_float(char *str);

bool is_only_num(char *str);

char *strcat_malloc(char *dest, char const *src);

int get_nb_width(char *format, int i);

char *handles_precisionss(char *arr, int number);

int get_nb_precision(char *format, int i);

char *get_string_precission(char *string, int nb, int i);

bool is_special_float(char *str, int nb);

char *special_float(char *string, int nb);

char *precision_int(char* string, int nb);

int manage_file_printing(DIR *dir, char **argv, int i, int j);

char **get_dir_file_name(int argc, char *argv[]);

int number_of_files_or_dir_args(int argc, char *argv[]);

int number_of_files(char *path);

int get_index_of_path(int argc, char **argv, int i);

int print_current_dir(DIR *dir);

int error_handling(char **argv);

DIR *print_depending_on_number_of_files(DIR *dir, char **argv, int l, int argc);

void print_file(char **argv, int l, int argc);

int print_file_or_path(DIR *dir, char **argv, int argc, int l);

void print_existent_file(char **argv, int i, struct dirent *entry, int j);

void print_on_stderr(char **argv, int i);

#endif /* MY_H_ */
