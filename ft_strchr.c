/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flavon <flavon@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 12:27:34 by flavon            #+#    #+#             */
/*   Updated: 2020/05/10 12:03:47 by flavon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	char			*src;
	unsigned int	index;

	src = (char *)str;
	index = 0;
	while (src[index] != 0)
	{
		if (src[index] == ch)
			return (&src[index]);
		index++;
	}
	if (src[index] == ch)
		return (&src[index]);
	return (0);
}
