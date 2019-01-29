/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-kim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 18:05:22 by min-kim           #+#    #+#             */
/*   Updated: 2019/01/29 22:41:31 by min-kim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		get_len(int n)
{
	int	i;
	int tmp;

	i = 0;
	tmp = n;
	if (tmp == 0)
		return (1);
	while (tmp)
	{
		tmp /= 10;
		i++;
	}
	return (n < 0 ? i + 1 : i);
}

char			*ft_itoa(int n)
{
	char			*str;
	int				len;
	int				m;

	len = get_len(n);
	m = n;
	str = ft_strnew(len);
	if (!str)
		return (0);
	while (len)
	{
		len--;
		if (n < 0)
			str[len] = (-1) * (n % 10) + '0';
		else
			str[len] = (n % 10) + '0';
		n /= 10;
	}
	if (m < 0)
		str[len] = '-';
	return (str);
}
