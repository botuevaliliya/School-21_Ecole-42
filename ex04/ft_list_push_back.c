/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsilk <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 10:44:19 by hsilk             #+#    #+#             */
/*   Updated: 2021/02/04 23:25:40 by hsilk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *a;

	a = *begin_list;
	if (a == 0)
	{
		*begin_list = ft_create_elem(data);
		return ;
	}
	while (a->next != 0)
	{
		a = a->next;
	}
	a->next = ft_create_elem(data);
}
