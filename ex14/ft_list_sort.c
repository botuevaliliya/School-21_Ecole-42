/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsilk <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 12:32:21 by hsilk             #+#    #+#             */
/*   Updated: 2021/02/04 21:58:52 by hsilk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*forme;
	void	*temp;
	t_list	*a;

	a = *begin_list;
	if (a == 0)
		return ;
	while (a->next != 0)
	{
		forme = a->next;
		while (forme != 0)
		{
			if ((*cmp)(a->data, forme->data) > 0)
			{
				temp = a->data;
				a->data = forme->data;
				forme->data = temp;
			}
			forme = forme->next;
		}
		a = a->next;
	}
}
