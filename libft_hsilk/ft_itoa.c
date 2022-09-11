/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsilk <hsilk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 19:55:30 by hsilk             #+#    #+#             */
/*   Updated: 2021/11/10 19:47:54 by hsilk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

int	ft_sign(int n)
{
	if (n <= 0)
		return (1);
	return (0);
}

char	*ft_itoa(int n)
{
	char			*c;
	int				x;
	unsigned int	nb;

	nb = ft_abs(n);
	x = 0;
	while (nb > 0)
	{
		x++;
		nb = nb / 10;
	}
	x = x + ft_sign(n);
	c = (char *)malloc(x + 1);
	if (!c)
		return (NULL);
	c[x] = '\0';
	nb = ft_abs(n);
	while (x--)
	{
		c[x] = nb % 10 + 48;
		nb = nb / 10;
	}
	if (n < 0)
		c[0] = '-';
	return (c);
}
