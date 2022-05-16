/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   finl_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenaoui <mbenaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 23:30:09 by mbenaoui          #+#    #+#             */
/*   Updated: 2022/04/23 22:12:39 by mbenaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*min_list(t_list *temp)
{
	t_list	*head;
	int		min;

	min = temp->content;
	head = temp;
	temp = temp->next;
	while (temp)
	{
		if (min > temp->content)
		{
			min = temp->content;
			head = temp;
		}
		temp = temp->next;
	}
	return (head);
}

void	finl_sort(t_list **stacka)
{
	t_list	*temp;
	int		i;
	int		j;

	temp = min_list((*stacka));
	i = pos_by_node((*stacka), temp);
	if (i <= ft_lstsize((*stacka)) / 2)
		j = i;
	else
		j = i - ft_lstsize((*stacka));
	while (j > 0)
	{
		ft_ra(stacka, 1);
		j--;
	}
	while (j < 0)
	{
		ft_rra(stacka, 1);
		j++;
	}
}
