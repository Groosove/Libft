/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flavon <flavon@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 12:27:34 by flavon            #+#    #+#             */
/*   Updated: 2020/10/20 17:02:14 by flavon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_nbr_word(char *s, char c)
{
	int count;

	count = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
	}
	return (count);
}

static int		ft_length(char *s, char c)
{
	int index;

	index = 0;
	while (s[index] != 0 && s[index] != c)
		index++;
	return (index);
}

static char		**ft_arr_clear(char **dst)
{
	while (*dst)
		free(*dst++);
	free(dst);
	return (0);
}

static char		**ft_do_split(char **dst, char *s, char c, int word)
{
	int count;
	int i;

	count = 0;
	while (count < word)
	{
		i = 0;
		while (*s != 0 && *s == c)
			s++;
		if (!(dst[count] = malloc(sizeof(char) * (ft_length(s, c) + 1))))
			return (ft_arr_clear(dst));
		while (*s != 0 && *s != c)
			dst[count][i++] = *s++;
		if (i != 0)
			dst[count++][i] = 0;
	}
	dst[count] = 0;
	return (dst);
}

char			**ft_split(char const *s, char c)
{
	char	**dst;
	int		length;

	length = ft_nbr_word((char *)s, c);
	if (!(dst = (char **)malloc(sizeof(char *) * (length + 1))) || s == 0)
		return (0);
	dst = ft_do_split(dst, (char *)s, c, length);
	return (dst);
}
