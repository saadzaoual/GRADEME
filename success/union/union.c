#include <unistd.h>

void  ft_union(char *s1, char *s2)
{
  int i = 0;
  char seen[256] = {0};

  while(s1[i])
  {
      if(!seen[(unsigned char)s1[i]])
      {
          seen[(unsigned char)s1[i]] = 1;
          write(1,&s1[i],1);
      }
      i++;
  }
  i = 0;
  while(s2[i])
  {
    if(!seen[(unsigned char)s2[i]])
    {
        seen[(unsigned char)s2[i]] = 1;
        write(1,&s2[i],1);
    }
    i++;
  }
  write(1,"\n",1);
}

int main(int ac, char **av)
{
  if(ac == 3)
  {
    ft_union(av[1],av[2]);  
  }
  write(1,"\n",1);
}
