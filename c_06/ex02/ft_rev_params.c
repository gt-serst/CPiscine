/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 11:51:09 by gt-serst          #+#    #+#             */
/*   Updated: 2022/08/18 20:56:40 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		n;
	int		m;

	n = argc - 1;
	m = 0;
	while (n > 0)
	{
		while (argv[n][m] != '\0')
		{
			write(1, &argv[n][m], 1);
			m++;
		}
		write(1, "\n", 1);
		m = 0;
		n--;
	}
	return (0);
}
