/*
** ETNA PROJECT, 23/03/2021 by pouny_j
** my crd
** File description:
**      Return the pointer of each word
*/

#include <stdlib.h>
#include "my_list.h"

int my_strlen_word(const char *str, int p)
{
  int i = p;

  while (str[i] != '\0' && str[i] != ' ')
  {
    i++;
  }
  return i;
}

int nb_word (const char *str)
{
  int i = 0;
  int word = 0;

  while (str[i] != '\0')
  {
    if (str[i] == ' ') 
    {
	    word = word + 1;
    }
    i++;
  }
  return word; 
}

char **my_str_to_word_array(const char *str)
{
  int x = 0; //dimension 1 : pointeur
  int y = 0; //dimension 2 : mot
  int posi_point = 0;
  int nb_w = nb_word(str) + 1;
  char **dest = malloc(sizeof(char *) * (nb_w + 1));

  while (x < nb_w)
  {
    y = 0;
    dest[x] = malloc(sizeof(char) * my_strlen_word(str, posi_point) + 1);
    while (str[posi_point] != '\0' && str[posi_point] != ' ')
    {
	    dest[x][y] = str[posi_point];
	    posi_point++;
	    y++;
    }
    posi_point++;
    dest[x][y] = '\0';
    x++;
  }
  dest[x] = NULL;
  return (dest);
}