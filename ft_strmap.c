#include "libft.h"

char    *ft_strmap(char const *s, char (*f)(char))
{
    char    const   *t;
    int             i;

    t = ft_strnew(ft_strlen(s));
    i = 0;
    while (s[i] != '\0')
    {
        t[i] = f(s[i]);
        i++;
    }
    return (t);
}
