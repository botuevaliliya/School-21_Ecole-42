/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsilk <hsilk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 20:00:28 by hsilk             #+#    #+#             */
/*   Updated: 2021/11/10 19:55:02 by hsilk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*ff;

	if (!s)
		return (NULL);
	i = 0;
	ff = (char *)malloc(sizeof(char const) * ft_strlen(s) + 1);
	if (!ff)
		return (NULL);
	while (s[i])
	{
		ff[i] = f(i, s[i]);
		i++;
	}
	ff[i] = '\0';
	return (ff);
}
