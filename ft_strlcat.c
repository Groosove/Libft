/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flavon <flavon@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 12:27:34 by flavon            #+#    #+#             */
/*   Updated: 2020/05/05 12:27:39 by flavon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	count;
	unsigned int	index;
	size_t			res;

	count = 0;
	index = 0;
	while (dst[count] != 0)
		count++;
	res = ft_strlen(src) + ((size <= count) ? size : count);
	while (src[index] != 0 && count + 1 < size)
	{
		dst[count] = src[index];
		count++;
		index++;
	}
	dst[count] = 0;
	return (res);
}
