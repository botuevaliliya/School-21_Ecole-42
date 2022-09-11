/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsilk <hsilk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 19:57:38 by hsilk             #+#    #+#             */
/*   Updated: 2021/11/10 19:52:22 by hsilk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	void	*d;

	d = dst;
	if (!dst && !src && n)
		return (NULL);
	while (n > 0)
	{
		*(unsigned char *)d++ = *(unsigned char *)src++;
		n--;
	}
	return (dst);
}
