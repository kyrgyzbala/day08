
#include <stdlib.h>

int	get_word_count(char *str)
{
	int	counter;
	int	i;

	i = 0;
	counter = 1;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			counter++;
		i++;
	}
	return (counter);
}

int	get_len(char *str)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (str[i] != ' ' && str[i] != '\t' &&
			str[i] != '\n' && str[i] != '\0')
	{
		len++;
		i++;
	}
	return (++len);
}

char	**line_subtr(char *str, char *temp, int len, int row, int i)
{
	char	**res;

        row = get_word_count(str);
        while (i < row)
        {
                len = get_len(temp);
                temp = temp + len;
                res[i++] = (char *)malloc(sizeof(char) * len);
        }
        res[i] = (char *)malloc(sizeof(char) * 2);
        i = 0;
        len = 0;
        while (*str)
        {
                if (*str == ' ' || *str == '\t' || *str == '\n')
                {
                        res[i++][len] = '\0';
                        str++;
                        len = 0;
                }
                res[i][len++] = *str++;
        }
        res[i + 1][0] = '0';
        res[i + 1][1] = '\0';
        return (res);
}

char	**ft_split_whitespaces(char *str)
{
	return (line_subtr(str, str, len, row, i);
}
