/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabeloos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 12:56:36 by dabeloos          #+#    #+#             */
/*   Updated: 2018/08/30 20:01:20 by dabeloos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list *head;
	t_list *previous;

	if (*begin_list == NULL)
		return ;
	previous = *begin_list;
	head = (*begin_list)->next;
	while (head != NULL)
	{
		if (cmp(previous->data, head->data) > 0)
		{
			previous->next = head->next;
			head->next = *begin_list;
			*begin_list = head;
		}
		previous = head;
		head = head->next;
	}
}
