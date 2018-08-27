/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabeloos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 13:27:49 by dabeloos          #+#    #+#             */
/*   Updated: 2018/08/27 13:41:03 by dabeloos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void		ft_list_clear(t_list **begin_list)
{
	t_list	*head;

	head = *begin_list;
	if (head->next != NULL)
		ft_list_clear(t_list &(head->next));
	head->next = NULL;
}
