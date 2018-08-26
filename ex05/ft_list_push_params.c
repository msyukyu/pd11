/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabeloos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 19:57:37 by dabeloos          #+#    #+#             */
/*   Updated: 2018/08/26 20:09:26 by dabeloos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list		*ft_create_elem(void *data);

t_list		*ft_list_push_params(int ac, char **av)
{
	t_list	first;
	t_list	second;

	if (ac > 1)
		first = ft_create_elem(av[ac - 1]);
	while (--ac > 1)
	{
		second = ft_create_elem(av[ac - 1]);
		second->next = first;
		first = second;
	}
	return (first);
}
