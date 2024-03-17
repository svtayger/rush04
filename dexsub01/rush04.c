/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdexmund <tdexmund@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 10:43:45 by tdexmund          #+#    #+#             */
/*   Updated: 2024/03/17 11:41:18 by tdexmund         ###   ########.fr       */
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
		if ((n == x && by == 1 && y != 1) || (n == 1 && by == y && x != 1))
			ft_putchar('\\');
		else if ((n == x && by == y) || (n == 1 && by == 1))
			ft_putchar('/');
		else if (by > 1 && n > 1 && by < y && n < x)
			ft_putchar(' ');
		else if ((n < x && n > 1) || ((n == 1 || n == x) && by < y && by > 1))
			ft_putchar('*');
		else
		{
			ft_putchar('\n');
			by--;
			n = x + 1;
		}
	}
}
