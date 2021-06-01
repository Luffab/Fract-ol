/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strnstr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: dpuccion <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/19 17:55:45 by dpuccion     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/21 17:06:01 by dpuccion    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (*needle == 0)
		return ((char *)(haystack));
	while (haystack[i] && i < len)
	{
		while (haystack[i + j] == needle[j] && haystack[i + j] && (i + j) < len)
			j++;
		if (needle[j] == 0)
			return ((char *)(&haystack[i]));
		i++;
		j = 0;
	}
	return (0);
}

int		main(void)
{
	char s1[] = "dac";
	char s2[] = "f";
	printf("%s\n", strnstr(s1, s2, 5));
	printf("%s\n", ft_strnstr(s1, s2, 5));
}
