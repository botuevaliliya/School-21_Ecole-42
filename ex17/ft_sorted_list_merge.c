/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsilk <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 13:06:08 by hsilk             #+#    #+#             */
/*   Updated: 2021/02/04 22:57:33 by hsilk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2, int (*cmp)())
{
	while (*begin_list != 0)
	{
		if ((*cmp)(begin_list1->data, begin_list2->data) > 0 && (*cmp)(begin_list1->next->data, begin_list2->data) <= 0)
		{
			forme->data = begin_list2->data;
			forme->next = begin_list1->next->next;
			begin_list1->next = forme;
			begin_list2 = begin_list2->next;
		}
		begin_list1 = begin_list->next;
	}
}
