/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsilk <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 09:51:50 by hsilk             #+#    #+#             */
/*   Updated: 2021/02/04 22:12:04 by hsilk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list *p;

	p = (t_list*)malloc(sizeof(t_list));
	if (!p)
		return (0);
	p->data = data;
	p->next = 0;
	return (p);
}
