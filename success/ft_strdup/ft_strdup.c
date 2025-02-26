#include <unistd.h>

char	*ft_strdup(char *src)
{
	int i = 0;
	char *copy;

	copy = (char *)malloc(sizeof(*src) - 1);
	
	while(src[i])
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);

}
