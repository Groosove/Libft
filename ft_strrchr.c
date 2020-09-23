/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flavon <flavon@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 12:27:34 by flavon            #+#    #+#             */
/*   Updated: 2020/05/10 12:05:29 by flavon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *src, int ch)
{
	int		i;
	char	*dst;

	i = 0;
	dst = 0;
	while (src[i] != 0)
	{
		if (src[i] == ch)
			dst = (char *)&src[i];
		i++;
	}
	if (src[i] == ch)
		return ((char *)&src[i]);
	return (dst);
}
