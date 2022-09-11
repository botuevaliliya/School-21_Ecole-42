/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsilk <hsilk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 19:59:46 by hsilk             #+#    #+#             */
/*   Updated: 2021/11/10 19:54:37 by hsilk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*t;
	size_t	i;

	if (!s1 || !s2)
		return (NULL);
	t = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (t == 0)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s1))
	{
		t[i] = s1[i];
		i++;
	}
	while (i < ft_strlen(s1) + ft_strlen(s2))
	{
		t[i] = s2[i - ft_strlen(s1)];
		i++;
	}
	t[i] = '\0';
	return (t);
}
