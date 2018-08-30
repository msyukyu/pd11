/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabeloos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 19:48:42 by dabeloos          #+#    #+#             */
/*   Updated: 2018/08/30 17:34:43 by dabeloos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int			ft_list_size(t_list *begin_list)
{
	int		i;
	t_list	*head;

	i = 0;
	head = begin_list;
	while (head != NULL)
	{
		i++;
		head = head->next;
	}
	return (i);
}
