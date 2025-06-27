/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsilk <hsilk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 19:34:27 by hsilk             #+#    #+#             */
/*   Updated: 2022/01/09 13:26:55 by hsilk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strnew(int size)
{
	char	*str;

	str = (char *)malloc(size + 1);
	if (!str)
		return (NULL);
	while (size--)
		str[size] = '\0';
	return (str);
}

int	ft_strlen(const char *s)
{
	int	n;

	n = 0;
	while (s[n] != '\0')
		n++;
	return (n);
}

int	ft_strchr(char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	if (s[i] == c)
		return (i);
	return (-1);
}

char	*ft_strjoin(char *s1, char const *s2, int i)
{
	char	*t;
	int		a;

	if (!s1)
		s1 = ft_strnew(1);
	if (!s2)
		return (NULL);
	a = ft_strlen(s1);
	t = (char *)malloc(a + ft_strlen(s2) + 1);
	if (t == 0)
		return (NULL);
	while (s1[i])
	{
		t[i] = s1[i];
		i++;
	}
	while (s2[i - a])
	{
		t[i] = s2[i - a];
		i++;
	}
	t[i] = '\0';
	free(s1);
	return (t);
}
