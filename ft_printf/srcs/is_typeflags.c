/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_typeflags.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umoff <umoff@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/27 13:44:44 by umoff             #+#    #+#             */
/*   Updated: 2020/07/02 13:26:12 by umoff            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

_Bool	is_ddioouuxx(char c)
{
	if (c == 'd' || c == 'i' || c == 'o' || c == 'u' || c == 'x' || c == 'X' ||
		c == 'D' || c == 'O' || c == 'U')
		return (1);
	return (0);
}

_Bool	is_aaeeffgg(char c)
{
	if (c == 'f' || c == 'F' || c == 'e' || c == 'E' || c == 'a' || c == 'A' ||
		c == 'g' || c == 'G')
		return (1);
	return (0);
}

_Bool	is_csp(char c)
{
	if (c == 'c' || c == 's' || c == 'p')
		return (1);
	return (0);
}
