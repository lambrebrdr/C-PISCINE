/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourdar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 10:34:56 by abourdar          #+#    #+#             */
/*   Updated: 2020/07/15 15:08:10 by abourdar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int i;

	i = 3;
	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	while (nb % i != 0)
	{
		i++;
	}
	if (i == nb)
		return (1);
	return (0);
}
