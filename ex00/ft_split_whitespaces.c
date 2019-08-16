
#include <stdlib.h>

int	get_word_count(char *str)
{
	int	counter;
	int	i;
	int	add;

	if (!str)
		return (0);
	i = 0;
	counter = 1;
	while (str[i] != '\0')
	{
		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i] != '\0')
		{
			i++;
			add = 1;
		}
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\0')
		{
			if (sp == 1)
				count++;
			add = 0;
			i++;
		}
	}
	return (counter);
}

int	get_len(char *str, int i)
{
	int	len;

	len = 0;
	while (str[i] != ' ' && str[i] != '\t' &&
			str[i] != '\n' && str[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}

char	**line_subtr(char *str, char *temp, int row, int i, int j)
{
	char	**res;
	int	k;

        row = get_word_count(str);
        res = (char *)malloc(sizeof(char) * row);
	if (res == NULL)
		return (NULL);
        while (str[i])
        {
                if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		if (str[i])
		{
			k = 0;
			res[j] = (char *)malloc(sizeof(char) * (get_len(str, i) + 1));
			if (res[j] == NULL)
				return (NULL);
			while (str[i] != '\t' && str[i] != ' ' && str[i] != '\n' && str[i])
				res[j][k++] = str[i++];
			res[j++][k] = '\0';
		}
        }
        res[j] = "0";
        return (res);
}

char	**ft_split_whitespaces(char *str)
{
	return (line_subtr(str, str, 0, 0, 0);
}
