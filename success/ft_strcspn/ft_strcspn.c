#include <unistd.h>

size_t  ft_strcspn(const char *s, const char *reject)
{
	int i = 0;
	int j = 0;

	while(s[i])
	{
		if(s[i] == reject[j])
			return i;
		i++;
	}
	return i;
}
