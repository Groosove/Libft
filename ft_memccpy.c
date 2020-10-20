/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flavon <flavon@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 12:27:34 by flavon            #+#    #+#             */
/*   Updated: 2020/10/20 16:34:21 by flavon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char	*tmp1;
	char	*tmp2;
	size_t	count;

	count = -1;
	tmp1 = (char *)dst;
	tmp2 = (char *)src;
	while (++count < n && tmp2[count] != c)
		tmp1[count] = tmp2[count];
	if (count != n)
	{
		tmp1[count] = tmp2[count];
		return (dst + ++count);
	}
	return (NULL);
}
