/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabeloos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 11:49:10 by dabeloos          #+#    #+#             */
/*   Updated: 2018/08/30 19:07:53 by dabeloos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *),
			void *data_ref, int (*cmp)(void *, void *))
{
	t_list *head;

	head = begin_list;
	while (head != NULL)
	{
		if (cmp(head->data, data_ref) == 0)
			f(head->data);
		head = head->next;
	}
}
