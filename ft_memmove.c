/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flavon <flavon@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 12:27:34 by flavon            #+#    #+#             */
/*   Updated: 2020/05/16 12:34:53 by flavon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t length)
{
	char	*cdst;
	char	*csrc;
	size_t	index;

	csrc = (char *)src;
	cdst = (char *)dst;
	if (dst == 0 && src == 0)
		return (0);
	index = -1;
	if (dst > src)
		while (length != 0)
		{
			cdst[length - 1] = csrc[length - 1];
			length--;
		}
	else
		while (++index < length)
			cdst[index] = csrc[index];
	return (dst);
}
