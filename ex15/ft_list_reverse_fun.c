/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsilk <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 12:55:49 by hsilk             #+#    #+#             */
/*   Updated: 2021/02/04 22:26:23 by hsilk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_strcmp(char *a, char *b)
{
	while (*a != '\0' && *b != '\0')
	{
		if (*a != *b)
			return (*a - *b);
		a++;
		b++;
	}
	return (0);
}

void	ft_list_reverse_fun(t_list *begin_list)
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
			if (ft_strcmp(a->data, forme->data) > 0)
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
