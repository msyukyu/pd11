/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabeloos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 12:30:46 by dabeloos          #+#    #+#             */
/*   Updated: 2018/08/30 12:56:03 by dabeloos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*head;
	t_list	*previous;

	previous = NULL;
	head = *begin_list1;
	if (head == NULL)
	{
		*begin_list1 = begin_list2;
		return ;
	}
	while (head != NULL)
	{
		previous = head;
		head = head->next;
	}
	previous->next = begin_list2;
}
