#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int ft_count(long nbr)
{
  int count = 0;
  if(nbr <= 0)
    count++;
  while(nbr != 0)
  {
    count++;
    nbr /= 10;
  }
  return count;
}

char *ft_itoa(int nbr)
{
  long num = nbr;
  int len = ft_count(num);
  char *arr;
  
  arr = malloc(sizeof(char *) * (len + 1));
  if(!arr)
    return NULL;
  arr[len] = '\0';
  if(num == 0)
    arr[0] = '0';
  if(num < 0)
  {
    arr[0] = '-';
    num = -num;
  }

  while (num > 0)
  {
    arr[--len] = (num % 10) + '0';
    num /=10;
  }
  return arr;
}
