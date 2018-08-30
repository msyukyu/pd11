/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabeloos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 19:22:49 by dabeloos          #+#    #+#             */
/*   Updated: 2018/08/30 17:22:45 by dabeloos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*item;
	t_list	*head;

	item = ft_create_elem(data);
	if (*begin_list == NULL)
	{
		*begin_list = item;
		return ;
	}
	head = *begin_list;
	while (head->next != NULL)
		head = head->next;
	head->next = item;
}
