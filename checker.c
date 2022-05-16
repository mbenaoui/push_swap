/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenaoui <mbenaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 02:20:30 by mbenaoui          #+#    #+#             */
/*   Updated: 2022/04/23 22:07:57 by mbenaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	checksortlist(t_list *linked)
{
	while (linked->next)
	{
		if (linked->content < linked->next->content)
		{
			linked = linked->next;
		}
		else
			return (1);
	}
	return (0);
}

void	instruction(t_list **stacka, t_list **stackb, char *str)
{
	if (ft_strcmp(str, "pa\n") == 0)
		ft_pa(stacka, stackb, 0);
	else if (ft_strcmp(str, "pb\n") == 0)
		ft_pb(stacka, stackb, 0);
	else if (ft_strcmp(str, "ra\n") == 0)
		ft_ra(stacka, 0);
	else if (ft_strcmp(str, "rb\n") == 0)
		ft_rb(stackb, 0);
	else if (ft_strcmp(str, "rr\n") == 0)
		ft_rr(stacka, stackb, 0);
	else if (ft_strcmp(str, "rra\n") == 0)
		ft_rra(stacka, 0);
	else if (ft_strcmp(str, "rrb\n") == 0)
		ft_rrb(stackb, 0);
	else if (ft_strcmp(str, "rrr\n") == 0)
		ft_rrr(stacka, stackb, 0);
	else if (ft_strcmp(str, "sa\n") == 0)
		ft_sa(stacka, 0);
	else if (ft_strcmp(str, "sb\n") == 0)
		ft_sb(stackb, 0);
	else if (ft_strcmp(str, "ss\n") == 0)
		ft_ss(stacka, stackb, 0);
}

void	checker(t_list **stacka, t_list **stackb)
{
	char	*m;

	while (1)
	{
		m = get_next_line(0);
		if (!m)
			break ;
		instruction(stacka, stackb, m);
	}
	if (checksortlist(*stacka) == 0 && ft_lstsize(*stackb) == 0)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
}

int	main(int arv, char **argc)
{
	t_list	*stacka;
	t_list	*stackb;
	char	*tab;
	char	**tab1;
	int		i;

	if (arv == 1)
		return (0);
	tab = ft_strdup("");
	i = 1;
	while (i < arv)
	{
		tab = ft_strjoin(tab, argc[i]);
		tab = ft_strjoin(tab, " ");
		i++;
	}
	tab1 = ft_split(tab, ' ');
	if (check_error(tab1, tab) == 1)
		return (0);
	i = 0;
	while (tab1[i])
		ft_lstadd_back(&stacka, ft_lstnew(ft_atoi(tab1[i++])));
	checker(&stacka, &stackb);
}
