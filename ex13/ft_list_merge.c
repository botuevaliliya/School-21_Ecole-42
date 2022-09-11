/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsilk <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 12:29:09 by hsilk             #+#    #+#             */
/*   Updated: 2021/02/04 21:46:49 by hsilk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list *a;

	a = *begin_list1;
	if (a == 0)
	{
		*begin_list1 = begin_list2;
		return ;
	}
	while (a->next != 0)
	{
		a = a->next;
	}
	a->next = begin_list2;
}
