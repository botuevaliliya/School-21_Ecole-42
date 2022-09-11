/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsilk <hsilk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 19:58:22 by hsilk             #+#    #+#             */
/*   Updated: 2021/10/27 02:32:44 by hsilk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_abs1(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

int	ft_sign1(int n)
{
	if (n <= 0)
		return (1);
	return (0);
}

void	ft_putnbr_fd(int n, int fd)
{
	char			c[12];
	int				x;
	int				i;
	unsigned int	nb;

	nb = ft_abs1(n);
	x = 0;
	while (nb > 0)
	{
		x++;
		nb = nb / 10;
	}
	x = x + ft_sign1(n);
	c[x] = '\0';
	i = x;
	nb = ft_abs1(n);
	while (x--)
	{
		c[x] = nb % 10 + 48;
		nb = nb / 10;
	}
	if (n < 0)
		c[0] = '-';
	write(fd, c, i);
}
