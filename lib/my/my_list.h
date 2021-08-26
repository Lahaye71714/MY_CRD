/*
** ETNA PROJECT, 31/03/2021 by pouny_j
** my crd
** File description:
**      My crd library
*/

#ifndef MY_LIST_H
#define MY_LIST_H

typedef struct linked_list_s
{
  struct linked_list_s *next;
  int value;
  int key;
} linked_list_t;
linked_list_t *insert_command (linked_list_t *list, char **array);
void display_value(int valeur);
void my_putnbr(int n);
void display_null(void);
void my_putchar (char c);
linked_list_t *removal_node (linked_list_t *list, char **array);
char *my_readline(void);
char **my_str_to_word_array(const char *str);
int my_getnbr(char *str);
void lookup_cmd (linked_list_t *list, char **array);

#endif