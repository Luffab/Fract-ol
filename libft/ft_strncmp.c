/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strncmp.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: dpuccion <dpuccion@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 15:49:13 by dpuccion     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/17 15:25:58 by dpuccion    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	int				t;
	unsigned char	*s1a;
	unsigned char	*s2a;

	i = 0;
	s1a = ((unsigned char *)(s1));
	s2a = ((unsigned char *)(s2));
	while ((s1a[i] || s2a[i]) && i < n)
	{
		if (s1a[i] != s2a[i])
		{
			t = s1a[i] - s2a[i];
			return (t);
		}
		else
			i++;
	}
	return (0);
}
