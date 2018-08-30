/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabeloos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 15:35:28 by dabeloos          #+#    #+#             */
/*   Updated: 2018/08/30 16:42:08 by dabeloos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2,
			int (*cmp)())
{
	t_list	*head1;
	t_list	*head2;
	t_list	*previous;

	head1 = *begin_list1;
	head2 = begin_list2;
	previous = NULL;
	while (head1 != NULL && head2 != NULL)
	{
		if (cmp(head1->data, head2->data) > 0)
		{
			if (previous == NULL)
				*begin_list1 = head2;
			else
				previous->next = head2;
			head2->next = head1;
			head2 = head2->next;
		}
		else
		{
			previous = head1;
			head1 = head1->next;
		}
	}
	*begin_list1 = (head1 == NULL && previous == NULL) ? head2 : *begin_list1;
}
