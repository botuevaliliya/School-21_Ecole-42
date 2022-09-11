/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsilk <hsilk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 20:01:34 by hsilk             #+#    #+#             */
/*   Updated: 2021/11/10 19:41:17 by hsilk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*t;
	size_t	i;

	if (!s)
		return (NULL);
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	t = (char *)malloc(len + 1);
	if (t == 0 || !s)
		return (NULL);
	i = 0;
	while (i < len && start + i < ft_strlen(s))
	{
		t[i] = s[start + i];
		i++;
	}
	t[i] = '\0';
	return (t);
}
