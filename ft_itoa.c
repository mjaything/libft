/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-kim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 18:05:22 by min-kim           #+#    #+#             */
/*   Updated: 2019/01/28 18:25:52 by min-kim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		get_len(int n)
{
	int	i;

	i = 1;
	while (n /= 10)
		i++;
	return (i);
}

char			*ft_itoa(int n)
{
	char			*str;
	int				len;
	unsigned int	m;

	len = get_len(n);
	m = n;
	if (n < 0)
	{
		m = -n;
		len++;
	}
	if (!(str = ft_strnew(len)))
		return (NULL);
	while (m > 0)
	{
		str[--len] = m % 10 + '0';
		m /= 10;
	}
	if (n < 0)
		str[len] = '-';
	return (str);
}
