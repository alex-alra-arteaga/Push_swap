/*
** EPITECH PROJECT, 2022
** pushswap
** File description:
** Sorting algorithm for linked lists with limited functions
*/

#include <stdlib.h>
#include <stddef.h>
#include <sys/stat.h>
#include "lib/my/utils/mylist.h"
#include "lib/my/utils/my.h"

int last_element_of_list(linked_list_t *head_b)
{
    linked_list_t *node = head_b;
    if (node == NULL) {
        return (84);
    }
    while (node->next != NULL) {
        node = node->next;
    }
    return (node->data);
}

bool in_order(linked_list_t *head_a)
{
    linked_list_t *current = head_a;
    int prev_data;

    prev_data = current->data;
    current = current->next;
    while (current != NULL) {
        if (current->data < prev_data) {
            return (false);
        }
        prev_data = current->data;
        current = current->next;
    }
    return (true);
}

int *populate_temp_array(char **argv, int cnt_num)
{
    int j = 1;
    int *temp_num_arr = malloc(sizeof(int) * (cnt_num + 1));
    while (j < cnt_num) {
        temp_num_arr[j] = my_getnbr(argv[j]);
        j++;
    }
    return (temp_num_arr);
}
