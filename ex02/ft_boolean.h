#ifndef __FT_BOOLEAN_H__
# define __FT_BOOLEAN_H__

int	write(int n, void *str,unsigned int size);

#define TRUE 1
#define FALSE 0
#define EVEN_MSG "I have an even number of arguments"
#define ODD_MSG "I have an odd number of arguments"
#define SUCCESS 0
#define EVEN(nbr) (nbr % 2 == 0)
#define t_bool int;

#endif
