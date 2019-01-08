/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-kim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 18:05:50 by min-kim           #+#    #+#             */
/*   Updated: 2019/01/08 18:28:48 by min-kim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int j;
	int k;

	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0')
	{
		j = 0;
		k = 0;
		while (needle[k] != '\0' && haystack[j] == needle[k])
		{
			j++;
			k++;
		}
		if (needle[k] == '\0')
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}
