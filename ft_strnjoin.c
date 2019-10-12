#include "libft.h"
#include <stdlib.h>

char*	ft_strnjoin(char const *s1, char const *s2, int n)
{
	char	*str;
	
	if (!s1 || !s2)
		return (NULL);
	str = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	if (!str)
		return (NULL);
	ft_strcpy(str, s1);
	ft_strncat(str, s2, n);
	return (str);
}
