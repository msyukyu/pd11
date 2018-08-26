/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabeloos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 19:47:28 by dabeloos          #+#    #+#             */
/*   Updated: 2018/08/26 19:47:30 by dabeloos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list		*ft_create_elem(void *data);

void		ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *item;
	int		i;
	t_list *head;

	item = ft_create_elem(data);
	item->next = *begin_list;
	begin_list = &item;
}
