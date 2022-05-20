void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int temp;

	i = 0;
	j = 0;
	while (j < size)
	{
		i = 0;
		while (i < size - j - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			i++;
		}
		j++;
	}
}
