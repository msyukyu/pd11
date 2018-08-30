/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabeloos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 13:27:49 by dabeloos          #+#    #+#             */
/*   Updated: 2018/08/30 18:14:36 by dabeloos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_clear(t_list **begin_list)
{
	if ((*begin_list)->next != NULL)
		ft_list_clear(&((*begin_list)->next));
	(*begin_list)->next = NULL;
	free(*begin_list);
	*begin_list = NULL;
}
