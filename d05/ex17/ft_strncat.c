/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biremong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 19:38:36 by biremong          #+#    #+#             */
/*   Updated: 2016/11/01 15:20:01 by biremong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (nb > 0)
	{
		if (src[j] != '\0')
		{
			dest[i + j] = src[j];
			j++;
		}
		nb--;
	}
	dest[i + j] = '\0';
	return (dest);
}
