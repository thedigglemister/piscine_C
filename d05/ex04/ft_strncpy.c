/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biremong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 13:26:27 by biremong          #+#    #+#             */
/*   Updated: 2016/11/01 15:21:47 by biremong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (n > 0)
	{
		if (src[i] == '\0')
		{
			dest[j + i] = '\0';
			j++;
		}
		else
		{
			dest[j + i] = src[i];
			i++;
		}
		n--;
	}
	return (dest);
}
