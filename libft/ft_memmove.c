/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memmove.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: dpuccion <dpuccion@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/11 15:50:11 by dpuccion     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/20 23:24:15 by dpuccion    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dst1;
	unsigned const char	*src1;

	dst1 = (unsigned char *)dst;
	src1 = (unsigned char *)src;
	if (dst == 0 && src == 0)
		return (0);
	if (dst1 < src1)
		return (ft_memcpy(dst, src, len));
	while (len)
	{
		dst1[len - 1] = src1[len - 1];
		len--;
	}
	return (dst);
}
