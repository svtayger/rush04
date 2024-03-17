/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04_subfunctions.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yewoo <yewoo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 09:54:10 by yewoo             #+#    #+#             */
/*   Updated: 2024/03/17 10:55:32 by yewoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* insert functions prototypes */
void	ft_putchar(char c);
void	print_first_line(int x);
void	print_middle_line(int x);
void	print_last_line(int x);

/* main rush function */
void	rush04(int x, int y)
{
	int	line;

	line = 1;
	while (line <= y)
	{
		if (x == 1 && y == 1)
			ft_putchar('A');
		else if (line == 1)
			print_first_line(x);
		else if (line != 1 && line != y)
			print_middle_line(x);
		else if (line == y)
			print_last_line(x);
		ft_putchar('\n');
		line++;
	}
}

/* function to print first line based on needed criteria */
void	print_first_line(int x)
{
	int	b_repeat;

	b_repeat = 0;
	ft_putchar('A');
	while (b_repeat < x - 2)
	{
		ft_putchar('B');
		b_repeat++;
	}
	if (x != 1)
	{
		ft_putchar('C');
	}
}

/* function to print middle line/lines based on needed criteria */
void	print_middle_line(int x)
{
	int	space_repeat;

	space_repeat = 0;
	ft_putchar('B');
	while (space_repeat < x - 2)
	{
		ft_putchar(' ');
		space_repeat++;
	}
	if (x != 1)
	{
		ft_putchar('B');
	}
}

/* function to print last line based on needed criteria */
void	print_last_line(int x)
{
	int	b_repeat;

	b_repeat = 0;
	ft_putchar('C');
	while (b_repeat < x - 2)
	{
		ft_putchar('B');
		b_repeat++;
	}
	if (x != 1)
	{
		ft_putchar('A');
	}
}
