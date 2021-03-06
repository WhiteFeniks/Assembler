/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fib.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umoff <umoff@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/27 13:53:48 by umoff             #+#    #+#             */
/*   Updated: 2020/07/02 13:39:21 by umoff            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fib(int n)
{
	int fib[n + 1];
	int i;

	if (n < 0)
		return (0);
	i = 1;
	fib[0] = 0;
	fib[1] = 1;
	while (++i <= n)
		fib[i] = fib[i - 2] + fib[i - 1];
	return (fib[n]);
}
