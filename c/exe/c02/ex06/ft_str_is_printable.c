/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnicolau <marvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 21:37:09 by fnicolau          #+#    #+#             */
/*   Updated: 2025/01/24 21:41:00 by fnicolau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (!(*str >= 32 && *str <= 126))
			return (0);
		str++;
	}
	return (1);
}
