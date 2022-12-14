/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 14:19:48 by gt-serst          #+#    #+#             */
/*   Updated: 2022/08/11 17:18:52 by gt-serst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int		n;

	n = 0;
	while (*(str + n) != '\0')
	{
		if (*(str + n) >= 97 && *(str + n) <= 122)
		{
			n++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
