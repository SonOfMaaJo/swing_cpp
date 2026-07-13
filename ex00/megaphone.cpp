#include <iostream>

char	*capitalyze(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

int	main(int argc, char **argv)
{
	int i;

	if (argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	}
	else {
		i = 1;
		while (i < argc)
		{
			argv[i] = capitalyze(argv[i]);
			std::cout << argv[i];
			i++;
		}
	}
	std::cout << "\n";
	return (0);
}
