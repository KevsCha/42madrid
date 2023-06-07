#include <unistd.h>

void ft_is_negative(int n)
{
	/*
	conts char x = 'N';
	conts char y = 'P';
	*/
	if(n >= 0)
	{
		n = 'P';
		write(1, &n,1);
	}else{
		n = 'N';
		write(1, &n, 1);
	}	
}

int main(void)
{
	int n;
	n = 0;	
	ft_is_negative(n);
	return (0);
}
