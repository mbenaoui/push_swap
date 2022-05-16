/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenaoui <mbenaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 00:34:56 by mbenaoui          #+#    #+#             */
/*   Updated: 2022/04/23 23:21:50 by mbenaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	apply_sortt(t_list **stacka, t_list **stackb, t_listt *p, int min_tab)
{
	while (p[min_tab].pos_a > 0)
	{
		ft_ra(stacka, 1);
		p[min_tab].pos_a--;
	}
	while (p[min_tab].pos_a < 0)
	{
		ft_rra(stacka, 1);
		p[min_tab].pos_a++;
	}
	while (p[min_tab].pos_b > 0)
	{
		ft_rb(stackb, 1);
		p[min_tab].pos_b--;
	}
	while (p[min_tab].pos_b < 0)
	{
		ft_rrb(stackb, 1);
		p[min_tab].pos_b++;
	}
	ft_pa(stacka, stackb, 1);
}

void	apply_sort(t_list **stacka, t_list **stackb, t_listt *p, int min_tab)
{
	while (p[min_tab].pos_a > 0 && p[min_tab].pos_b > 0)
	{
		ft_rr(stacka, stackb, 1);
		p[min_tab].pos_a--;
		p[min_tab].pos_b--;
	}
	while (p[min_tab].pos_a < 0 && p[min_tab].pos_b < 0)
	{
		ft_rrr(stacka, stackb, 1);
		p[min_tab].pos_a++;
		p[min_tab].pos_b++;
	}
	apply_sortt(stacka, stackb, p, min_tab);
}
