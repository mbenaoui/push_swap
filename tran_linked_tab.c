/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tran_linked_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenaoui <mbenaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 23:31:24 by mbenaoui          #+#    #+#             */
/*   Updated: 2022/04/23 23:21:02 by mbenaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*tran_linked_tab(t_list *stacka)
{
	int	*tab;
	int	i;

	i = 0;
	tab = malloc(sizeof(int) * ft_lstsize(stacka));
	while (stacka)
	{
		tab[i++] = stacka->content;
		stacka = stacka->next;
	}
	return (tab);
}
