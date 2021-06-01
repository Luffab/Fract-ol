/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_substr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: dpuccion <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/15 15:53:09 by dpuccion     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/24 15:54:39 by dpuccion    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*newstr;
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	if (start > ft_strlen(s))
	{
		if (!(newstr = malloc(sizeof(char) * 1)))
			return (0);
		newstr[0] = 0;
		return (newstr);
	}
	if (!(newstr = malloc(sizeof(char) * len + 1)))
		return (0);
	while (i < len)
	{
		newstr[i] = s[start];
		i++;
		start++;
	}
	newstr[i] = '\0';
	return (newstr);
}
