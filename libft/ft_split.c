/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_split.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: dpuccion <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/24 16:45:44 by dpuccion     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/16 16:29:49 by dpuccion    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static int		wordcount(char const *s, char c)
{
	int i;
	int a;

	i = 0;
	a = 0;
	while (s[i])
	{
		if (s[i] && s[i] != c)
			a++;
		while (s[i] && s[i] != c)
			i++;
		while (s[i] && s[i] == c)
			i++;
	}
	return (a);
}

static char		*fill(char const *s, char c)
{
	int		i;
	int		size;
	char	*word;

	i = 0;
	size = 0;
	word = NULL;
	while (s[size] != c && s[size])
		size++;
	if (!(word = malloc(sizeof(char) * (size + 1))))
		return (0);
	while (i < size)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = 0;
	return (word);
}

char			**ft_split(char const *s, char c)
{
	char	**tab;
	int		wordc;
	int		i;

	if (!s)
		return (0);
	wordc = wordcount(s, c);
	i = 0;
	if (!(tab = malloc(sizeof(char *) * (wordc + 1))))
		return (0);
	while (i < wordc)
	{
		while (s[0] == c)
			s++;
		tab[i] = fill(s, c);
		s += ft_strlen(tab[i]);
		i++;
	}
	tab[wordc] = 0;
	return (tab);
}
