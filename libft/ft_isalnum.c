/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: restevez <restevez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:36:03 by restevez          #+#    #+#             */
/*   Updated: 2024/10/24 16:44:46 by restevez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c);

/* ft_isalnum:
	checks for an alphanumeric character;
	it is equivalent to (isalpha(c) || isdigit(c)).
*/
int	ft_isalnum(int c)
{
	if (
		(c > 64 && c < 91)
		|| (c > 96 && c < 123)
		|| (c > 47 && c < 58)
	)
		return (1);
	else
		return (0);
}
