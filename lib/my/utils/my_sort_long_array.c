/*
** EPITECH PROJECT, 2022
** my_sort_int_array
** File description:
** library
*/

void my_swap_long(long *a, long *b);

int compare_and_swap_long(long *array, int temp)
{
    if (array[temp +1] && array[temp] > array[temp +1]) {
        my_swap_long(&array[temp], &array[temp + 1]);
    }
    temp++;
    return (temp);
}

void my_sort_long_array(long *array, int size)
{
    long i = 0;
    long temp = 0;
    long right_len = size - 1;

    while (i < size) {
        while (temp < right_len) {
            temp = compare_and_swap_long(array, temp);
        }
        i++;
    }
}
