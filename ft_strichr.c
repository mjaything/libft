#include "libft.h"

int	ft_strichr(char *str, int c)
{
	int		i;

	i = 0;
	while (str[i] != (char)c)
	{
		if (str[i] == '\0' && (char)c != '\0')
			return (-1);
		i++;
	}
	return (i);
}
