void ft_putchar(char c);
void loop_column(int line, int column, int x, int y);

void rush(int x, int y)
{
	int line;
	int column;

	if (x <= 0 || y <= 0)
		return;
	line = 1;
	column = 1;
	while (line <= y)
	{
		loop_column(line, column, x, y);
		ft_putchar('\n');
		line++;
		column = 1;
	}
}

void loop_column(int line, int column, int x, int y)
{
	while (column <= x)
	{
		if (line == 1 || line == y)
		{
			if ((line == 1 || line == y) && (column == 1 || column == x))
				ft_putchar('o');
			else
				ft_putchar('-');
		}
		else
		{
			if (column == 1 || column == x)
				ft_putchar('|');
			else
				ft_putchar(' ');
		}
		column++;
	}
}
