/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: restevez <restevez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 14:42:28 by restevez          #+#    #+#             */
/*   Updated: 2024/10/25 21:12:48 by restevez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c);

/* ft_isprint:
checks for any printable character including space.
*/
int	ft_isprint(int c)
{
	if (c > 31 && c < 127)
		return (1);
	else
		return (0);
}
