/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenaoui <mbenaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 15:47:20 by mbenaoui          #+#    #+#             */
/*   Updated: 2022/04/23 22:54:03 by mbenaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rrr(t_list **stacka, t_list **stackb, int len)
{
	ft_rra(stacka, 0);
	ft_rrb(stackb, 0);
	if (len == 1)
		write(1, "rrr\n", 4);
}
