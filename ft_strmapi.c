/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flavon <flavon@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 12:27:34 by flavon            #+#    #+#             */
/*   Updated: 2020/05/27 10:09:12 by flavon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*dst;
	int		index;

	if (s == 0 || f == 0)
		return (0);
	if ((dst = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1))) != 0)
	{
		index = 0;
		while (s[index] != 0)
		{
			dst[index] = f(index, s[index]);
			index++;
		}
		dst[index] = 0;
		return (dst);
	}
	return (0);
}
