/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flavon <flavon@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 12:27:34 by flavon            #+#    #+#             */
/*   Updated: 2020/10/20 16:30:12 by flavon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_length_nbr(int nbr)
{
	unsigned int length;

	length = (nbr < 0) ? 2 : 1;
	while ((nbr /= 10) != 0)
		length++;
	return (length);
}

char		*ft_itoa(int n)
{
	char			*dst;
	unsigned int	count;
	unsigned int	length;
	unsigned int	number;

	length = ft_length_nbr(n);
	if (!(dst = (char *)malloc(sizeof(char) * (length + 1))))
		return (0);
	if (n == 0)
		dst[0] = '0';
	if (n < 0)
		dst[0] = '-';
	count = length - 1;
	number = (n < 0) ? (unsigned int)(n * -1) : (unsigned int)(n);
	while (number != 0)
	{
		dst[count--] = (number % 10 + '0');
		number /= 10;
	}
	dst[length] = '\0';
	return (dst);
}
