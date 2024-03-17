/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdexmund <tdexmund@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 10:43:45 by tdexmund          #+#    #+#             */
/*   Updated: 2024/03/17 13:10:49 by tdexmund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	rush(int x, int y)
{
	int	n;
	int	by;	

	n = x +1;
	by = y;
	while (by > 0)
	{
		n--;
		if (((n == 1 || n == x) && by == 1 && y != 1))
			ft_putchar('C');
		else if (((n == 1 || n == x)&& by == y))
			ft_putchar('A');
		else if (by > 1 && n > 1 && by < y && n < x)
			ft_putchar(' ');
		else if ((n < x && n > 1) || ((n == 1 || n == x) && by < y && by > 1))
			ft_putchar('B');
		else
		{
			ft_putchar('\n');
			by--;
			n = x + 1;
		}
	}
}
