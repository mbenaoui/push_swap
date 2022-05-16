/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenaoui <mbenaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 13:58:34 by mjalloul          #+#    #+#             */
/*   Updated: 2022/04/22 23:41:12 by mbenaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// static int	ntable(char const *s, char c)
// {
// 	int	i;
// 	int	j;

// 	i = 0;
// 	j = 0;
// 	while (s[i])
// 	{
// 		if ((s[i] != c && s[i + 1] == c) || (s[i + 1] == '\0' && s[i] != c))
// 			j++;
// 		i++;
// 	}
// 	return (j);
// }

// static int	ft_strlen_del(char const *s, char c)
// {
// 	int	i;

// 	i = 0;
// 	while (*s != c && *s)
// 	{
// 		s++;
// 		i++;
// 	}
// 	return (i);
// }

// static char	**alocation(char **p, int k, char c, char const *s)
// {
// 	int	f;
// 	int	j;

// 	f = 0;
// 	j = 0;
// 	while (k--)
// 	{
// 		while (*s == c && *s)
// 			s++;
// 		p[f] = (char *)malloc(sizeof(char ) * (ft_strlen_del(s, c) + 1));
// 		if (!p[f])
// 		{
// 			while (f--)
// 				free (p[f]);
// 			free (p);
// 			return (0);
// 		}
// 		while (ft_strlen_del(s, c))
// 			p[f][j++] = *s++;
// 		p[f][j] = '\0';
// 		f++;
// 		j = 0;
// 	}
// 	p[f] = NULL;
// 	return (p);
// }

// char	**ft_split(char const *s, char c)
// {
// 	int		k;
// 	char	**p;

// 	if (s == NULL)
// 		return (0);
// 	k = ntable(s, c);
// 	p = (char **)malloc(sizeof(char *) * (k + 1));
// 	if (!p)
// 		return (0);
// 	return (alocation(p, k, c, s));
// }
int	simo(const char *str, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (*str)
	{
		if (*str != c && j == 1)
		{
			j = 0;
			i++;
		}
		else if (*str == c && j == 0)
			j = 1;
		str++;
	}
	return (i);
}

char	*badr(const char *str, size_t n, size_t len)
{
	char	*s;
	int		i;

	i = 0;
	s = malloc((len - n + 1) * (sizeof(char)));
	while (n < len)
	{
		s[i] = str[n];
		i++;
		n++;
	}
	s[i] = '\0';
	return (s);
}

char	**ft_split(char *s, char c)
{
	size_t		m;
	size_t		j;
	int			n;
	char		**src;

	m = -1;
	j = 0;
	n = -1;
	if (!s)
		return (0);
	src = malloc((simo(s, c) + 1) * sizeof(char *));
	if (!src)
		return (NULL);
	while (++m <= ft_strlen(s))
	{
		if (s[m] != c && n < 0)
			n = m;
		else if ((s[m] == c || m == ft_strlen(s)) && n >= 0)
		{
			src[j++] = badr(s, n, m);
			n = -1;
		}
	}
	src[j] = 0;
	return (src);
}
