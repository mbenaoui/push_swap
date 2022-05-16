/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenaoui <mbenaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 14:21:33 by mjalloul          #+#    #+#             */
/*   Updated: 2022/04/23 22:21:58 by mbenaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	int		m;
	int		len;
	int		len1;
	char	*s4;

	i = 0;
	m = 0;
	if (!s1)
		s1 = ft_strdup("");
	len = ft_strlen(s1);
	len1 = ft_strlen(s2);
	s4 = (char *)malloc(sizeof (char) * (len + len1 + 1));
	if (s4 == NULL)
		return (NULL);
	while (i < len)
		s4[m++] = s1[i++];
	i = 0;
	while (i < len1)
		s4[m++] = s2[i++];
	s4[m] = '\0';
	free (s1);
	return (s4);
}
