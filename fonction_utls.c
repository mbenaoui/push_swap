/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fonction_utls.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenaoui <mbenaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 14:19:31 by mbenaoui          #+#    #+#             */
/*   Updated: 2022/04/23 22:14:43 by mbenaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	pos_by_node(t_list *top, t_list *node)
{
	int	index;

	index = 0;
	while (top != node)
	{
		index++;
		top = top->next;
	}
	return (index);
}

int	nbr_pn(int x)
{
	if (x < 0)
		return (-x);
	return (x);
}

int	max_nb(int a, int b)
{
	if (a > b)
		return (a);
	return (b);
}
