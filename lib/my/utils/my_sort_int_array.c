/*
** EPITECH PROJECT, 2022
** my_sort_int_array
** File description:
** library
*/

#include "my.h"

void my_swap(int *a, int *b);

int compare_and_swap(int *array, int temp)
{
    if (array[temp] > array[temp + 1]) {
        my_swap(&array[temp], &array[temp + 1]);
    }
    temp++;
    return (temp);
}

void my_sort_int_array(int *array, int size)
{
    int i = 0;
    int temp = 0;
    int right_len = size -1;

    while (i < size) {
        temp = 0;
        while (temp < right_len) {
            temp = compare_and_swap(array, temp);
        }
        i++;
    }
}
/*
int main(void)
{
    int *temp = malloc(sizeof(int) *4);
    temp[0] = 3;
    temp[1] = 2;
    temp[2] = 8;
    temp[3] = 6;
    my_sort_int_array(temp, 4);
    printf("1: %d\n", temp[0]);
    printf("1: %d\n", temp[1]);
    printf("1: %d\n", temp[2]);
    printf("1: %d\n", temp[3]);
}*/
