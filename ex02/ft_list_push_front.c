/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabeloos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 19:47:28 by dabeloos          #+#    #+#             */
/*   Updated: 2018/08/30 17:27:11 by dabeloos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*item;
	t_list	*head;

	item = ft_create_elem(data);
	item->next = *begin_list;
	*begin_list = item;
}
