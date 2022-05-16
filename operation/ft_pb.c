/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenaoui <mbenaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 15:22:59 by mbenaoui          #+#    #+#             */
/*   Updated: 2022/04/23 22:41:21 by mbenaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_pb(t_list **stacka, t_list **stackb, int len)
{
	t_list	*temp;

	if ((*stacka))
	{
		temp = *stacka;
		(*stacka) = (*stacka)->next;
		if ((*stacka))
			(*stacka)->prev = NULL;
		temp->next = *stackb;
		if (!(*stackb))
			(*stackb) = temp;
		else
		{
			(*stackb)->prev = temp;
			(*stackb) = (*stackb)->prev;
		}
	}
	if (len == 1)
		write(1, "pb\n", 3);
}
