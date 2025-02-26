#include <stdio.h>

int		max(int* tab, unsigned int len)
{
  int i = 0;
  int max = tab[0];
  while(i < len)
  {
    if(max < tab[i])
      max = tab[i];
    i++;
  }
  return max;
}
