/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenaoui <mbenaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 14:30:38 by mbenaoui          #+#    #+#             */
/*   Updated: 2022/04/23 22:55:23 by mbenaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sa(t_list **stacka, int len)
{
	int	temp;

	if (!*stacka)
		return ;
	if ((*stacka)->next)
	{
		temp = (*stacka)->content;
		(*stacka)->content = (*stacka)->next->content;
		(*stacka)->next->content = temp;
		if (len == 1)
			write(1, "sa\n", 3);
	}
}
