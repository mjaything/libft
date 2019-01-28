/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-kim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 15:12:31 by min-kim           #+#    #+#             */
/*   Updated: 2019/01/28 16:02:42 by min-kim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memmove(void *dst, const void *src, size_t len)
{
	void	*buf;

	if (!(buf = (void *)malloc(len * sizeof(void *))))
		return (NULL);
	ft_memcpy(buf, src, len);
	ft_memcpy(dst, buf, len);
	free(buf);
	return (dst);
}
