/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsilk <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 11:19:59 by hsilk             #+#    #+#             */
/*   Updated: 2021/02/04 22:41:29 by hsilk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	i;

	i = 0;
	if (begin_list == 0)
		return (0);
	while (i < nbr)
	{
		if (begin_list->next != 0)
		{
			i++;
			begin_list = begin_list->next;
		}
		else
			return (0);
	}
	return (begin_list);
}
