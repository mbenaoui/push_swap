/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_arg.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenaoui <mbenaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 22:54:52 by mbenaoui          #+#    #+#             */
/*   Updated: 2022/04/24 00:26:03 by mbenaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int arv, char **argc)
{
	t_list	*stacka;
	t_list	*stackb;
	char	*tab;
	char	**tab1;
	int		i;

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
	ft_sort_3(&stacka, &stackb);
}
