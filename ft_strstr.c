/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-kim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 18:05:50 by min-kim           #+#    #+#             */
/*   Updated: 2019/01/29 16:14:32 by min-kim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;

	i = 0;
	if (needle[i] == '\0')
		return ((char *)haystack);
	while ((*haystack != *needle) && (*haystack != '\0'))
		haystack++;
	if (*haystack == '\0')
		return (NULL);
	while ((haystack[i] == needle[i]) && (needle[i] != '\0'))
		i++;
	if (needle[i] == '\0')
		return ((char *)haystack);
	else
		return (ft_strstr(haystack + 1, needle));
}
