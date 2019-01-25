/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-kim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 14:31:36 by min-kim           #+#    #+#             */
/*   Updated: 2019/01/25 14:31:52 by min-kim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*t;
	int		i;

	t = ft_strnew(ft_strlen(s));
	i = 0;
	while (s[i] != '\0')
	{
		t[i] = f(i, s[i]);
		i++;
	}
	return (t);
}
