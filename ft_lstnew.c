/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-kim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 15:11:16 by min-kim           #+#    #+#             */
/*   Updated: 2019/01/28 15:11:56 by min-kim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new;

	if (!(new = (t_list *)malloc(sizeof(*new))))
		return (NULL);
	if (!content)
	{
		(*list).content = NULL;
		(*list).content_size = 0;
	}
	else
	{
		if (!((*list).content = malloc(content_size)))
			return (NULL);
		ft_memcpy((*list).content, content, content_size);
		(*list).content_size = content_size;
	}
	(*list).next = NULL;
	return (new);
}
