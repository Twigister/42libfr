#include <libft.h>

void	ft_puthex_fd(long n, int fd)
{
	if (n / 10)
		ft_puthex_fd(n / 10, fd);
	ft_putchar_fd("0123456789ABCDEF"[n % 16], fd);
}

void	ft_puthex(long n)
{
	ft_puthex_fd(n, 1);
}
