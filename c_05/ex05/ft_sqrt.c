/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 12:32:06 by gt-serst          #+#    #+#             */
/*   Updated: 2022/08/21 10:46:39 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int		i;

	i = 0;
	while (i <= nb)
	{
		if (i * i == nb)
			return (i);
		else if (i * i > nb)
			return (0);
		else
			i++;
	}
	return (0);
}
