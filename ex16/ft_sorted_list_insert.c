/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsilk <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 12:59:23 by hsilk             #+#    #+#             */
/*   Updated: 2021/02/04 23:37:06 by hsilk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list *forme;
	t_list *a;
	t_list *parent;

	parent = 0;
	a = *begin_list;
	while (a != 0)
	{
		if ((*cmp)(a->data, data) > 0)
		{
			forme = ft_create_elem(data);
			forme->next = a;
			if (parent == 0)
				*begin_list = forme;
			else
				parent->next = forme;
			return ;
		}
		parent = a;
		a = a->next;
	}
	parent->next = ft_create_elem(data);
	if (a == 0)
		a = ft_crete_elem(data);
}
