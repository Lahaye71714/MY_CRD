/*
** ETNA PROJECT, 30/03/2021 by pouny_j
** my crd
** File description:
**      Function to find a value
*/

#include "my_list.h"
#include <stdlib.h>

void lookup_cmd (linked_list_t *list, char **array)
{
  linked_list_t *node = list;
  int cle = my_getnbr(array[0]);
  int valeur;

  while(node != NULL)
  {
    if (node->key == cle)
    {
	    valeur = node->value;
	    display_value(valeur);
	    return;
    }
    node = node->next;
  }
  display_null();
}