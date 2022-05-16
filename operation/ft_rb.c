/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenaoui <mbenaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 15:21:28 by mbenaoui          #+#    #+#             */
/*   Updated: 2022/04/23 22:45:53 by mbenaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rb(t_list **stackb, int len)
{
	t_list	*top;
	t_list	*temp;

	if (!*stackb)
		return ;
	if ((*stackb)->next)
	{
		top = *stackb;
		(*stackb) = (*stackb)->next;
		temp = ft_lstlast((*stackb));
		temp->next = top;
		top->next = NULL;
		top->prev = temp;
		if (len == 1)
			write(1, "rb\n", 3);
	}
}
