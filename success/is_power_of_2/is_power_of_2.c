#include <stdio.h>
#include <unistd.h>

int is_power_of_2(unsigned int n)
{
  int i = 2;
  if(n == 0)
    return 0;
  while(n % 2 == 0)
    n /= 2;
  return n == 1;
}
