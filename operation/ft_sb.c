/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenaoui <mbenaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 14:30:48 by mbenaoui          #+#    #+#             */
/*   Updated: 2022/04/23 22:56:34 by mbenaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sb(t_list **stackb, int len)
{
	int	temp;

	if (!*stackb)
		return ;
	if ((*stackb)->next)
	{
		temp = (*stackb)->content;
		(*stackb)->content = (*stackb)->next->content;
		(*stackb)->next->content = temp;
		if (len == 1)
			write(1, "sb\n", 3);
	}
}
