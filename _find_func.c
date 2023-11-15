#include "main.h"

/**
 * get_func - finds a function
 *
 * @s: format specifier
 * Return: pointer to func; NULL
 */

int (*get_func(char s))(va_list, int)
{
	pF _funcs[] = {
	    {'c', _print_char},
	    {'s', _print_string},
	    {'%', _print_perc},
	    {'d', _print_int},
	    {'i', _print_int},
<<<<<<< HEAD
	    {'u', _print_unsigned},
	    {'o'' _print_oct},
	    {'x', _print_hex},
	    {'X', _print_HEX},};
		
=======
	    {'b', _print_binary}

	};

>>>>>>> 7081196d077a61eb2400dd91957e976404f8c02e
	int i;
	int func_count = 6;

	i = 0;
	while (i < func_count)
	{
		if (_funcs[i].c == s)
			return (_funcs[i].f);
		i++;
	}
	return (NULL);
}
