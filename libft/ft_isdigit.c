/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: restevez <restevez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 21:19:10 by restevez          #+#    #+#             */
/*   Updated: 2024/10/23 21:32:48 by restevez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c);

/* #include <unistd.h>
int	main(int argc, char *argv[])
{
	if (argc > 2)
		return (1);
	if (ft_isdigit(argv[1][0]))
		write(1, "Numeric", 8);
	else
		write(1, "Non-numeric", 12);
	return (0);
}
 */
/* ft_isdigit:
checks for a digit (0 through 9).
*/
int	ft_isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
