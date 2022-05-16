/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aft.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenaoui <mbenaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 23:32:25 by mbenaoui          #+#    #+#             */
/*   Updated: 2022/04/23 22:16:36 by mbenaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_existe(int c, int *list)
{
	int	i;

	i = 1;
	while (i <= list[0])
	{
		if (c == list[i])
			return (1);
		i++;
	}
	return (0);
}

int	check_keep(t_list *top)
{
	while (top && !top->keep)
		top = top->next;
	if (top)
		return (1);
	return (0);
}

void	set_keep(t_list *top_a, int *list)
{
	t_list	*node;

	node = top_a;
	while (node)
	{
		if (is_existe(node->content, list) == 0)
			node->keep = 1;
		else
			node->keep = 0;
		node = node->next;
	}
}

void	separet_lis(t_list **top_a, t_list **top_b, int *list)
{
	set_keep(*top_a, list);
	while (check_keep(*top_a))
	{
		while ((*top_a)->keep == 0)
			ft_ra(top_a, 1);
		ft_pb(top_a, top_b, 1);
	}
}
