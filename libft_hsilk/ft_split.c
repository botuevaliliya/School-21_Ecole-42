/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsilk <hsilk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 19:58:43 by hsilk             #+#    #+#             */
/*   Updated: 2021/11/10 19:53:43 by hsilk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_free(char **t, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		free(t[i]);
		i++;
	}
	return (t);
}

char	*ft_help_func(char *t, char const *s, int g, int j)
{
	int	q;

	q = 0;
	while (q < j)
	{
		t[q] = s[g + q];
		q++;
	}
	t[q] = '\0';
	return (t);
}

int	ft_count_words(char const *s, char c)
{
	int	i;
	int	f;
	int	n;

	i = 0;
	f = 0;
	n = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && f == 0 && s[i])
			i++;
		if (s[i] != c && s[i] && f == 0)
		{
			f = 1;
			n++;
		}
		while (s[i] != c && f == 1 && s[i])
			i++;
		if ((s[i] == c || !s[i]) && f == 1)
			f = 0;
	}
	return (n);
}

char	**ft_fill(char **t, char const *s, char c, int n)
{
	int		i;
	int		j;
	int		g;

	g = 0;
	i = 0;
	while (i < n)
	{
		j = 0;
		while (s[j + g] && s[j + g] != c)
			j++;
		if (j)
		{
			t[i] = (char *)malloc(j + 1);
			if (!t)
				return (ft_free(t, i));
			ft_help_func(t[i], s, g, j);
			i++;
		}
		g = g + j + 1;
	}
	t[i] = 0;
	return (t);
}

char	**ft_split(char const *s, char c)
{
	char	**t;
	int		n;

	if (!s)
		return (NULL);
	n = ft_count_words(s, c);
	t = (char **)malloc(sizeof(char *) * (n + 1));
	if (!t)
		return (NULL);
	ft_fill(t, s, c, n);
	return (t);
}
