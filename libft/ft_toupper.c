/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_toupper.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: dpuccion <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 17:49:08 by dpuccion     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/08 18:00:11 by dpuccion    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	int d;

	d = 0;
	if (c >= 'a' && c <= 'z')
	{
		d = c - 32;
		return (d);
	}
	return (c);
}