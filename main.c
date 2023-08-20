#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rush(int x, int y)
{
	int		row;
	int		column;
	char	corner = 'o';
	char	edge = '|';
	char	base = '-';

	column = 0;

	while (column < y)
	{
		row = 0;
		while (row < x)
		{
			if (column != 0 && column != y - 1)
			{
				if (row == 0 || row == x - 1)
				{
					ft_putchar(edge);
				}
				else
				{
					ft_putchar(' ');
				}
			}

			if (column == 0 || column == y -1)
			{
				if (row == 0 || row == x -1)
				{
					ft_putchar(corner);
				}
				else if (row != 0 && row != x -1)
				{
					ft_putchar(base);
				}
			}
			
			
			row++;
		}
		ft_putchar('\n');
		column++;
	}
	
	
}

int		main(int argc, char *argv[])
{
	rush(4, 4);

	return 0;
}
