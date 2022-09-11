/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsilk <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 11:47:45 by hsilk             #+#    #+#             */
/*   Updated: 2021/02/04 22:49:10 by hsilk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *), void
*data_ref, int (*cmp)())
{
	while (begin_list != 0)
	{
		if ((*cmp)(begin_list->data, data_ref) == 0)
		{
			(*f)(begin_list->data);
		}
		begin_list = begin_list->next;
	}
}
