/*
** ETNA PROJECT, 15/03/2021 by pouny_j
** my crd
** File description:
**      function to display character
*/

#include <unistd.h>
#include "my_list.h"

void my_putchar (char c)
{
  write(1, &c, 1);
}