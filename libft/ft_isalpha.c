/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: restevez <restevez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 21:12:52 by restevez          #+#    #+#             */
/*   Updated: 2024/10/24 16:50:29 by restevez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c);

/* #include <unistd.h>
int	main(int argc, char *argv[])
{
	if (argc > 2)
		return (1);
	if (ft_isalpha(argv[1][0]))
		write(1, "Alphanumeric", 23);
	else
		write(1, "Non-alphanumeric", 27);
	return (0);
} */
/* 
These  functions check whether c, which must have the value of an
    unsigned char or  EOF,  falls  into  a  certain  character  class
    according  to  the  specified  locale.  The functions without the
    "_l" suffix perform the check based on the current locale.
ft_isalpha:
	checks for an alphabetic character; in the standard "C" locale, 
	it is equivalent to  (isupper(c)  ||	islower(c)).   In  some locales, 
	there may be additional characters for which isalpha() is true—letters which
	 are neither uppercase nor lowercase.
Return Value:
	The values returned are nonzero if the character c falls into the
    tested class, and zero if not.
*/
int	ft_isalpha(int c)
{
	if (
		(c > 64 && c < 91)
		|| (c > 96 && c < 123)
	)
		return (1);
	else
		return (0);
}
