/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsilk <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 10:51:59 by hsilk             #+#    #+#             */
/*   Updated: 2021/02/04 22:38:17 by hsilk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*array;
	t_list	*p;
	int		i;

	i = 0;
	array = 0;
	while (i < size)
	{
		p = ft_create_elem(strs[i]);
		p->next = array;
		array = p;
		i++;
	}
	return (array);
}
