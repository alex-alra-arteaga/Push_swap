/*
** EPITECH PROJECT, 2022
** my_list.h
** File description:
** MyList
*/

#ifndef MY_LIST_H_
    #define MY_LIST_H_

    #include <stdbool.h>

    #define H_A (**head_a)
    #define H_B (**head_b)

typedef struct linked_list {
int data ;
struct linked_list *next ;
} linked_list_t ;

typedef struct algo_state {
    linked_list_t *list_a;
    linked_list_t *list_b;
    bool last_is_smaller;
    int cnt_num_a;
    int cnt_num_b;
    int rounds;
    int number_of_data;
    int last_element_a;
    int last_element_b;
} algo_state_t;

void algorithm
(algo_state_t *algoState, linked_list_t H_A, linked_list_t H_B, int cnt_num);

void iterate_list_b
(algo_state_t *algoState, linked_list_t **head_a, linked_list_t **head_b);

void iterate_list_a
(algo_state_t *algoState, linked_list_t **head_a, linked_list_t **head_b);

linked_list_t *initialize_head_b(void);

linked_list_t *populate_list_a
(algo_state_t *algoState, int *temp_num_arr, int cnt_num);

int *populate_temp_array(char **num_split, int cnt_num);

bool in_order(linked_list_t *head_a);

int last_element_of_list(linked_list_t *head_b);

void do_sa(linked_list_t **head_a, int i);

void do_sb(linked_list_t **head_b);

void do_pa(linked_list_t **head_a, linked_list_t **head_b);

void do_pb(linked_list_t **head_a, linked_list_t **head_b, int i);

void rra(linked_list_t **head_a, int i);

void rrb(linked_list_t **head_b);

#endif
