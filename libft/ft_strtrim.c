/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strtrim.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: dpuccion <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/17 15:46:50 by dpuccion     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/09 18:15:53 by dpuccion    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static int		trimend(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	i--;
	while (set[j])
	{
		if (s1[i] == set[j])
		{
			i--;
			j = 0;
		}
		else
			j++;
	}
	i++;
	return (i);
}

static int		trimstart(char const *s1, char const *set)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	while (set[j])
	{
		if (s1[i] == set[j])
		{
			i++;
			j = 0;
		}
		else
			j++;
	}
	return (i);
}

static char		*nsm(void)
{
	char	*newstr;

	if (!(newstr = malloc(sizeof(char) * 1)))
		return (0);
	newstr[0] = 0;
	return (newstr);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	char	*newstr;
	int		i;
	int		j;
	int		k;
	int		len;

	i = 0;
	if (!s1)
		return (0);
	j = trimstart(s1, set);
	k = trimend(s1, set);
	len = ft_strlen(s1);
	if (k <= j)
		return (nsm());
	if (!(newstr = malloc(sizeof(char) * (k - j) + 1)))
		return (0);
	while (j < k)
	{
		newstr[i] = s1[j];
		i++;
		j++;
	}
	newstr[i] = 0;
	return (newstr);
}
