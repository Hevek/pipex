/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: restevez <restevez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 14:26:14 by restevez          #+#    #+#             */
/*   Updated: 2024/10/25 21:13:36 by restevez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c);

/* ft_isascii:
checks whether c is a 7-bit unsigned char value 
that fits into the ASCII character set.
*/
int	ft_isascii(int c)
{
	if (c > -1 && c < 128)
		return (1);
	else
		return (0);
}
