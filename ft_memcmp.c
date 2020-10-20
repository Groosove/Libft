/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flavon <flavon@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 12:27:34 by flavon            #+#    #+#             */
/*   Updated: 2020/10/20 16:54:33 by flavon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *arr1, const void *arr2, size_t size)
{
	unsigned char	*tmp1;
	unsigned char	*tmp2;
	int				count;

	count = 0;
	tmp1 = (unsigned char *)arr1;
	tmp2 = (unsigned char *)arr2;
	while (size-- != 0)
	{
		if (tmp1[count] != tmp2[count])
			return (tmp1[count] - tmp2[count]);
		count++;
	}
	return (0);
}
