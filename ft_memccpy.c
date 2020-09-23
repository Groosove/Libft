/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flavon <flavon@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 12:27:34 by flavon            #+#    #+#             */
/*   Updated: 2020/05/05 21:17:39 by flavon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char	*tmp1;
	char	*tmp2;
	char	value;
	size_t	count;

	count = 0;
	tmp1 = (char *)dst;
	tmp2 = (char *)src;
	value = (char)c;
	while (count < n && tmp2[count] != value)
	{
		tmp1[count] = tmp2[count];
		count++;
	}
	if (count != n)
	{
		tmp1[count] = tmp2[count];
		count++;
		return (dst + count);
	}
	return (NULL);
}
