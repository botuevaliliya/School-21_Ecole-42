/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsilk <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 12:12:35 by hsilk             #+#    #+#             */
/*   Updated: 2021/02/04 23:25:59 by hsilk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(),
void (*free_fct)(void *))
{
	t_list *a;

	a = *begin_list;
	while (a != 0)
	{
		if ((*cmp)(a->data, data_ref) == 0)
		{
			free_fct(a->data);
			a->next = a->next->next;
			free_fct(a);
		}
		a = a->next;
	}
}
