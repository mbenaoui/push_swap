/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenaoui <mbenaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 14:52:31 by mbenaoui          #+#    #+#             */
/*   Updated: 2022/04/23 22:38:58 by mbenaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_pa(t_list **stacka, t_list **stackb, int len)
{
	t_list	*temp;

	if (!stackb || !(*stackb))
		return ;
	if ((*stackb))
	{
		temp = *stackb;
		(*stackb) = (*stackb)->next;
		if ((*stackb))
			(*stackb)->prev = NULL;
		temp->next = *stacka;
		if ((*stacka))
		{
			(*stacka)->prev = temp;
			(*stacka) = (*stacka)->prev;
		}
		else
			(*stacka) = temp;
	}
	if (len == 1)
		write(1, "pa\n", 3);
}
