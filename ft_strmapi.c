#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char    *t;
    int     i;

    t = ft_strnew(ft_strlen(s));
    i = 0;
    while (s[i] != '\0')
    {
        t[i] = f(i, s[i]);
        i++;
    }
    return (t);
}
