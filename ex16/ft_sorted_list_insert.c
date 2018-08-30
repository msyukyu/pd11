/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabeloos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 15:16:00 by dabeloos          #+#    #+#             */
/*   Updated: 2018/08/30 15:34:35 by dabeloos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list	*item;
	t_list	*head;
	t_list	*previous;

	item = ft_create_elem(data);
	head = *begin_list;
	previous = NULL;
	while (head != NULL && cmp(head->data, data) < 0)
	{
		previous = head;
		head = head->next;
	}
	if (head == NULL)
	{
		if (previous == NULL)
			*begin_list = item;
		else
			previous->next = item;
	}
	else
	{
		previous->next = item;
		item->next = head;
	}
}
