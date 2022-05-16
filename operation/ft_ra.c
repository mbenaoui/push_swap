/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenaoui <mbenaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 00:59:49 by mbenaoui          #+#    #+#             */
/*   Updated: 2022/04/23 22:45:02 by mbenaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_ra(t_list **stacka, int len)
{
	t_list	*top;
	t_list	*temp;

	if (!*stacka)
		return ;
	if ((*stacka)->next)
	{
		top = *stacka;
		(*stacka) = (*stacka)->next;
		temp = ft_lstlast((*stacka));
		temp->next = top;
		top->next = NULL;
		top->prev = temp;
		if (len == 1)
			write(1, "ra\n", 3);
	}
}
