/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flavon <flavon@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 12:27:34 by flavon            #+#    #+#             */
/*   Updated: 2020/10/20 17:15:14 by flavon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*dst;
	size_t	size;
	size_t	i;

	i = 0;
	dst = (char *)big;
	if (!(size = ft_strlen(little)))
		return (dst);
	if (*big == 0 || len == 0)
		return (0);
	while (i++ <= len - size && *dst != 0)
	{
		if ((*dst == *little) && (!ft_strncmp(dst, little, size)))
			return (dst);
		dst++;
	}
	return (0);
}
