/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flavon <flavon@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 12:27:34 by flavon            #+#    #+#             */
/*   Updated: 2020/10/20 16:36:18 by flavon           ###   ########.fr       */
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
		while (length-- != 0)
			cdst[length] = csrc[length];
	else
		while (++index < length)
			cdst[index] = csrc[index];
	return (dst);
}
