/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenaoui <mbenaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 15:45:43 by mbenaoui          #+#    #+#             */
/*   Updated: 2022/04/23 22:53:06 by mbenaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rrb(t_list **stackb, int len)
{
	t_list	*top;

	if (!*stackb)
		return ;
	if ((*stackb)->next)
	{
		top = ft_lstlast((*stackb));
		top->prev->next = NULL;
		top->prev = NULL;
		top->next = (*stackb);
		(*stackb)->prev = top;
		(*stackb) = (*stackb)->prev;
		if (len == 1)
			write(1, "rrb\n", 4);
	}
}
