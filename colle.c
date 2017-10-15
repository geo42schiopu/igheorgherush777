#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	first_line(int w)
{
	int i=0;
	
	if (w >= 1)
		ft_putchar('A');
	if (w >= 3)
	{
		while (++i < (w-2))
			ft_putchar('B');
	}
	if (w >= 2)
	{
		ft_putchar('A');
	}
	ft_putchar('\n');
}


void	core_lines(int w)
{
	int i=0;
	
	if (w >= 1)
		ft_putchar('B');
	if (w >= 3)
	{
		while (i++ < (w-2))
			ft_putchar(' ');
	}
	if (w >= 2)
	{
		ft_putchar('B');
	}
		ft_putchar('\n');
}



void	last_line(int w)
{
	int i=0;
	
	if (w >= 1)
		ft_putchar('C');
	if (w >= 3)
	{
		while (i++ < (w-2))
			ft_putchar('B');
	}
	if (w >= 2)
	{
		ft_putchar('C');
	}
		ft_putchar('\n');
}


void	colle(int x, int y)
{
	int i=0;

	if (x <= 0 || y <= 0)
		return;
	if (y >= 1)
		first_line(x);
	if (y >=3)
		while(i++ < (y-2))
			core_lines(y);
	if (y > 1)
		last_line(y);
}

int main(void)
{
	colle(5,5);
	return (0);

}

