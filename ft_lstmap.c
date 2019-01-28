/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-kim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 15:07:40 by min-kim           #+#    #+#             */
/*   Updated: 2019/01/28 15:07:56 by min-kim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*fresh;
	t_list	*tmp;

	if (!lst)
		return (NULL);
	tmp = f(lst);
	fresh = tmp;
	while ((*lst).next)
	{
		lst = (*lst).next;
		if (!((*tmp).next = f(lst)))
		{
			free((*tmp).next);
			return (NULL);
		}
		tmp = (*tmp).next;
	}
	return (fresh);
}
