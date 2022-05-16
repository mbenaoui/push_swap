/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenaoui <mbenaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 01:58:41 by mbenaoui          #+#    #+#             */
/*   Updated: 2022/04/23 22:25:58 by mbenaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	max_stack(t_list *temp)
{
	int	i;
	int	j;
	int	max;

	i = 0;
	max = temp->content;
	while (temp)
	{
		if (max < temp->content)
		{
			max = temp->content;
			j = i;
		}
		i++;
		temp = temp->next;
	}
	return (j);
}
