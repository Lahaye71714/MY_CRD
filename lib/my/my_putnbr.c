/*
** ETNA PROJECT, 15/03/2021 by pouny_j
** my crd
** File description:
**      function that displays the number given as a parameter. 
**      It must be able to display all the possible values of an int.
*/

#include <unistd.h>
#include "my_list.h"

void my_putnbr(int n)
{
  int a;

  if (n < 0)
  {
    my_putchar('-');
    n = n * -1;
  }
  if (n >= 0)
  {
    if (n >= 10)
    {
	    a = n % 10;
	    n = (n - a) / 10;
	    my_putnbr(n);
	    my_putchar(a + 48);
    } else {
    	my_putchar((n % 10) + 48);
    }
  }
}