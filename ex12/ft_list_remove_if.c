/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabeloos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 12:02:53 by dabeloos          #+#    #+#             */
/*   Updated: 2018/08/30 12:42:15 by dabeloos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *head;
	t_list *previous;

	head = *begin_list;
	previous = NULL;
	while (head != NULL)
	{
		if (cmp(head->data, data_ref) == 0)
		{
			if (previous != NULL)
				previous->next = head->next;
			else
				*begin_list = head->next;
			free(head->data);
			free(head);
			if (previous != NULL)
				head = previous->next;
			else
				head = *begin_list;
			continue ;
		}
		previous = head;
		head = head->next;
	}
}
