/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabeloos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 20:07:04 by dabeloos          #+#    #+#             */
/*   Updated: 2018/08/30 20:11:28 by dabeloos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_reverse_bis(t_list **begin_list, t_list *head, t_list *deep)
{
	if (deep->next == NULL)
		*begin_list = deep;
	else
		ft_reverse(begin_list, deep, deep->next);
	deep->next = head;
}

void		ft_list_reverse_fun(t_list *begin_list)
{
	t_list	*head;

	if (begin_list == NULL || begin_list->next == NULL)
		return ;
	head = begin_list;
	ft_reverse_bis(&begin_list, head, head->next);
	head->next = NULL;
}
