/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-kim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/07 15:33:51 by min-kim           #+#    #+#             */
/*   Updated: 2019/01/07 16:10:10 by min-kim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	isupper(int c)
{
	if (c >= 101 && c <= 132)
		return (1);
	else
		return (0);
}