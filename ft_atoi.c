#include "libft.h"

int ft_atoi(const char *str)
{
    int i;
    int j;
    int k;

    i = 0;
    number = 0;
    sign = 0;
    if (str[i] == '-')
    {
        sign = -1;
        i++;
    }
    else if (str[i] == '+')
        i++;
    while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
        i++;
    while (str[i] != '\0')
    {
        if (str[i] >= '0' && str[i] <= '9')
            number = number * 10 + str[i] - '0';
        else
            break;
        i++;
    }
    return (sign * number)
}
