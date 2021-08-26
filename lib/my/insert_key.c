/*
** ETNA PROJECT, 29/03/2021 by pouny_j
** my crd
** File description:
**      Function to insert key and value in a linked list
*/

#include <stdlib.h>
#include "my_list.h"

linked_list_t *insert_command (linked_list_t *list, char **array)
{
  int p = -1;
  linked_list_t *node = list;
  int cle = my_getnbr(array[0]);
  int valeur = my_getnbr(array[1]);

  while (node != NULL)
  {
    if (node->key == cle)
    {
      node->value = valeur;
      my_putnbr(cle);
      my_putchar('\n');
      p = 1;
      return (list);
    }
    node = node->next;
  }
  if (p == -1)
  {
    linked_list_t *ins_node;
    ins_node = malloc(sizeof(linked_list_t));
    ins_node->next = list;
    ins_node->value = valeur;
    ins_node->key = cle;
    node = ins_node;
  }
  my_putnbr(cle);
  my_putchar('\n');
  return (node);
}
