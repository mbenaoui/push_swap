/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenaoui <mbenaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 15:25:36 by mbenaoui          #+#    #+#             */
/*   Updated: 2022/04/23 22:52:56 by mbenaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rra(t_list **stacka, int len)
{
	t_list	*top;

	if (!*stacka)
		return ;
	if ((*stacka)->next)
	{
		top = ft_lstlast((*stacka));
		top->prev->next = NULL;
		top->prev = NULL;
		top->next = (*stacka);
		(*stacka)->prev = top;
		(*stacka) = (*stacka)->prev;
		if (len == 1)
			write(1, "rra\n", 4);
	}
}
