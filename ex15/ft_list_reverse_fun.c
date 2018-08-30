/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabeloos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 14:54:40 by dabeloos          #+#    #+#             */
/*   Updated: 2018/08/30 15:14:00 by dabeloos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void        ft_reverse(t_list **begin_list, t_list **head, t_list **deep)
{
	if (*deep->next == NULL)
		**begin_list = deep;
	else
		ft_reverse(begin_list, deep, deep->next);
	*deep->next = *head;
}

void        ft_list_reverse(t_list **begin_list)
{
	t_list  *head;

	head = *begin_list;
	ft_reverse(begin_list, head, head->next);
}

void	ft_list_reverse_fun(t_list *begin_list)
{
	t_list **start;
	
	start = &begin_list;
	ft_list_reverse(start);
}