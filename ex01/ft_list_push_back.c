/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabeloos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 19:22:49 by dabeloos          #+#    #+#             */
/*   Updated: 2018/08/26 19:42:52 by dabeloos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list		*ft_create_elem(void *data);

void		ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *item;
	int		i;
	t_list *head;

	item = ft_create_elem(data);
	head = *begin_list->next;
	while (head != NULL)
		head = head->next;
	head->next = item;
}
