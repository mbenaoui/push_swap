/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenaoui <mbenaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 15:03:27 by mbenaoui          #+#    #+#             */
/*   Updated: 2022/04/24 00:24:21 by mbenaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_3(t_list **stacka, t_list **stackb)
{
	int	*lis;

	if (!(*stacka))
		return ;
	lis = NULL;
	lis = the_longest_chain(stacka, lis);
	separet_lis(stacka, stackb, lis);
	free (lis);
	while (*stackb)
		position_ab(stacka, stackb);
	finl_sort(stacka);
}
