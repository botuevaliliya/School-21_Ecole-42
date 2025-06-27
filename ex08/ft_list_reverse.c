/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsilk <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 11:25:14 by hsilk             #+#    #+#             */
/*   Updated: 2021/02/04 22:42:20 by hsilk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list *a;
	t_list *p;

	a = 0;
	while (*(begin_list) != 0)
	{
		p = (*begin_list)->next;
		(*begin_list)->next = a;
		a = *begin_list;
		*begin_list = p;
	}
	*begin_list = a;
}
