/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flavon <flavon@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 12:27:34 by flavon            #+#    #+#             */
/*   Updated: 2020/05/27 10:10:12 by flavon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_nbr_word(char *s, char c)
{
	int count;
	int index;

	index = 0;
	count = 0;
	while (s[index] != 0)
	{
		while (s[index] != 0 && s[index] == c)
			index++;
		if (s[index] != 0 && s[index] != c)
		{
			count++;
			while (s[index] != 0 && s[index] != c)
				index++;
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
	int index;

	index = 0;
	while (dst[index] != 0)
	{
		free(dst[index]);
		index++;
	}
	free(dst);
	return (0);
}

static char		**ft_do_split(char **dst, char *s, char c, int word)
{
	int count;
	int index;
	int i;

	count = 0;
	index = 0;
	while (count < word)
	{
		i = 0;
		while (s[index] != 0 && s[index] == c)
			index++;
		if (!(dst[count] = malloc(sizeof(char) *
			(ft_length((char *)&s[index], c) + 1))))
			return (ft_arr_clear(dst));
		while (s[index] != 0 && s[index] != c)
			dst[count][i++] = s[index++];
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

	if (s == 0)
		return (0);
	length = ft_nbr_word((char *)s, c);
	if ((dst = (char **)malloc(sizeof(char *) * (length + 1))) == 0 || s == 0)
		return (0);
	dst = ft_do_split(dst, (char *)s, c, length);
	return (dst);
}
