/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabeloos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 19:55:22 by dabeloos          #+#    #+#             */
/*   Updated: 2018/08/30 17:41:29 by dabeloos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_last(t_list *begin_list)
{
	t_list	*head;

	if (begin_list == NULL)
		return (NULL);
	head = begin_list;
	while (head->next != NULL)
		head = head->next;
	return (head);
}
