/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsilk <hsilk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 19:57:25 by hsilk             #+#    #+#             */
/*   Updated: 2021/11/10 19:52:32 by hsilk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void		*d;
	const void	*s;

	if (!dst && !src && len)
		return (NULL);
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (d < s)
		while (len-- > 0)
			*(unsigned char *)d++ = *(unsigned char *)s++;
	else
	{
		d += len - 1;
		s += len - 1;
		while (len-- > 0)
			*(unsigned char *)d-- = *(unsigned char *)s--;
	}
	return (dst);
}
