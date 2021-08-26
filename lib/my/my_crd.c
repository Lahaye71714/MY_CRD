/*
** ETNA PROJECT, 31/03/2021 by pouny_j
** my crd
** File description:
**      Function my_crd
*/

#include "my_list.h"
#include <stdlib.h>

linked_list_t *list = NULL;

void main(void)
{
  char *a;
  char **array;
  linked_list_t *node = list;

	while ((a = my_readline()))
	{
    	array = my_str_to_word_array(a);
    	if (array == NULL)
    	{
			return;
        } else {
			if (array[1] != NULL)
			{
	    		if (array[1][0] == 'D')
				{
					node = removal_node(node, array);
	      		} else if (array[1][0] >= '0' && array[1][0] <= '9') {
	    			node = insert_command(node, array);
	    		}
			} else {
				lookup_cmd(node, array);
			}
    	}
    }
	free(list);
}