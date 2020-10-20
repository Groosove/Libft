/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flavon <flavon@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 12:27:34 by flavon            #+#    #+#             */
/*   Updated: 2020/10/20 17:17:12 by flavon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int				index;
	char			*dst;

	if (!s)
		return (0);
	if (ft_strlen(s) <= start || len == 0)
		return (ft_strdup(""));
	if (ft_strlen(&s[start]) < len)
		len = ft_strlen(&s[start]);
	index = 0;
	if ((dst = (char *)malloc(sizeof(char) * (len + 1))) != 0)
		while (len-- != 0 && s[start] != 0)
			dst[index++] = s[start++];
	if (index == 0)
		return (0);
	dst[index] = 0;
	return (dst);
}
