/*
** ETNA PROJECT, 18/03/2021 by pouny_j
** my crd
** File description:
**      Function to return en integer
*/

int find_integer (const char *str)
{
  int i = 0;
  int a = -1;
  
  while ((str[i] != '\0') && (a == -1))
    {
      if ((str[i] >= 48) && (str[i] <= 57)) 
        {
	  a = i;
        }
      i++;
    }
  return a;
}

int get_number (const char *str, int posi, int arret)
{
  int i = posi;
  int val = 0;
  int t = arret - 1;
  
  while(i <= t) 
    {
      val = val + (str[i] - 48);
      if (i < t) 
        {
	  val = val * 10;
        }
      i++;
    }
  return val;
}

int get_taille (const char *str, int t)
{
  int i = t;
  int a;
  int b = -1;
  
  while ((str[i] != '\0') && (b < 1))
    {
      if ((str[i] < '0') || (str[i] > '9')) 
        {
	  b = 10;
        }
      a = i;
      i++;
    }
  return a;
}

int my_getnbr(const char *str)
{
  int val = 0;
  int a = find_integer(str);
  int p, taille;
  int n = 1;
  
  if (a < 0) 
  {
    return val;
  } else {
    p = get_taille(str, a) + 1;
    taille = p - a;
    if (p > 0)
    {
	    if (str[a - 1] == '-')
	    {
	      n = -1;
	    }
	    if (taille <= 2417483647)
	    {
	      val = get_number(str, a, p);
	      return val * n;
	    } else {
	      return val = 0;
	    }
    } else {
      return (val = 0);
    }
  }
}