/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memset.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: dpuccion <dpuccion@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 14:13:57 by dpuccion     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/20 23:28:46 by dpuccion    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*b1;
	size_t			i;
	unsigned char	k;

	b1 = b;
	i = 0;
	k = c;
	while (i < len)
	{
		b1[i] = c;
		i++;
	}
	return (b1);
}
