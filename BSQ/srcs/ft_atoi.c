/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sescolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 15:58:50 by sescolas          #+#    #+#             */
/*   Updated: 2016/11/16 11:21:11 by biremong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		ft_atoi(t_node *list, int n)
{
	int sum;

	sum = 0;
	while (n)
	{
		sum = (10 * sum) + (list->data - '0');
		list = list->next;
		n--;
	}
	return (sum);
}
