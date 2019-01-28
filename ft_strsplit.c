/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-kim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 16:57:08 by min-kim           #+#    #+#             */
/*   Updated: 2019/01/28 18:35:03 by min-kim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		wordcount(char const *str, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] == c)
			i++;
		if (str[i] != c && str[i] != '\0')
			count++;
		while (str[i] != c && str[i] != '\0')
			i++;
	}
	return (count);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**t;

	i = 0;
	j = 0;
	if (!s || !(t = (char **)malloc(sizeof(*t) * (wordcount(s, c) + 1))))
		return (NULL);
	while (i < wordcount(s, c))
	{
		k = 0;
		while (s[j] == c)
			j++;
		while (s[j] != c && s[j] != '\0')
			t[i][k++] = s[j++];
		t[i][k] = '\0';
		i++;
	}
	t[i] = '\0';
	return (t);
}
