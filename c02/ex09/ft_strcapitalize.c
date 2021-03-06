/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourdar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 15:00:32 by abourdar          #+#    #+#             */
/*   Updated: 2020/07/23 11:52:56 by abourdar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_upcase(char *str)
{
	if (*str >= 'a' && *str <= 'z')
		*str -= 32;
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	if (str[0] > 'a' && str[0] < 'z')
		str[0] -= 32;
	while (str[i])
	{
		if ((!((str[i - 1] >= '0' && str[i - 1] <= '9')
			|| (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
			|| (str[i - 1] >= 'a' && str[i - 1] <= 'z'))))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				ft_upcase(&str[i]);
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}
