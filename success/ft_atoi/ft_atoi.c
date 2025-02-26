#include <unistd.h>
#include <stdio.h>
int     ft_atoi(const char *str)
{
	int result = 0;
	int i = 0;
	int sign = 1;

	while(str[i])
	{
		if(str[i] == ' ' || str[i] == '\t')
			i++;
		else if(str[i] == '-')
		{
			sign = -1;
		}
		while(str[i] == '-' || str[i] == '+')
			i++;
		while(str[i] >= '0' && str[i] <= '9')
		{
			result = result * 10;
			result = result + str[i] - 48;
			i++;
		}
		i++;
		return (result * sign);
	}
}
