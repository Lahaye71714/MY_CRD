/*
** ETNA PROJECT, 30/03/2021 by pouny_j
** my crd
** File description:
**      Function to remove key
*/

#include "my_list.h"
#include <stdlib.h>

linked_list_t *removal_node (linked_list_t *list, char **array)
{
  linked_list_t *node = list;
  int cle = my_getnbr(array[0]);
  int valeur;
  
	if (node != NULL)
	{
    	if (node->key == cle)
    	{
			valeur = node->value;
			display_value(valeur);
			node = node->next;
			return (node);
        } else {
			while (node != NULL)
			{
	    		if (node->next->key == cle)
	    		{
					valeur = node->value;
					display_value(valeur);
					node->next = node->next->next;
					return (list);
	    		}
	    		node = node->next;
			}
			display_null();
			return (list);
      	}
    }
	display_null();
	return list;
}