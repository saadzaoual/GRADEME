#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int word_len(char *str)
{
  int i = 0;
  while(str[i] && str[i] != ' ' && !(str[i] >= '\t' && str[i] <= '\r'))
      i++;
  return i;
    
}
char *word_dupe(char *str)
{
  int i = 0;
  int len = word_len(str);
  char *word = malloc(sizeof(char) * (len + 1));
  if(!word)
    return NULL;

  word[len] = '\0';

  while(i < len)
  {
    word[i] = str[i];
    i++;
  }
  return word;
}
void  fill_words(char **arr, char *str)
{
  int word_index = 0;
  int i = 0;

  while(str[i] == ' ' || str[i] >= '\t' && str[i] <= '\r')
      i++;
  while(str[i])
  {
    arr[word_index] = word_dupe(str + 1);
    word_index++;
    while(str[i] && str[i] != ' ' && !(str[i] >= '\t' && str[i] <= '\r'))
      i++;
    while(str[i] == ' ' || str[i] >= '\t' && str[i] <= '\r')
      i++;
  }
}
int count_word(char *str)
{
  int i = 0;
  int count_word = 0;

  while(str[i])
  {
    while(str[i] && str[i] == ' ' || str[i] >= '\t' && str[i] <= '\r')
      i++;
    if(str[i])
      count_word++;
    
    while(str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
      i++;
  }
  return count_word;
}
char **ft_split(char *str)
{
  int num_word = count_word(str);
  char **arr;

  arr = malloc(sizeof(char *) * (num_word + 1));
  arr[num_word] = '\0';
  if(!arr)
    return NULL;
  fill_words(arr,str);
  return arr;
}
