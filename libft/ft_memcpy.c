/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memcpy.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: dpuccion <dpuccion@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 16:36:04 by dpuccion     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/08 14:06:14 by dpuccion    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*dst1;
	const char	*src1;

	src1 = src;
	dst1 = dst;
	i = 0;
	if (dst == 0 && src == 0)
		return (0);
	while (i < n)
	{
		dst1[i] = src1[i];
		i++;
	}
	return (dst1);
}
