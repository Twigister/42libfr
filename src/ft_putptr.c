#include <libft.h>

void	ft_putptr_fd(const void *p, int fd)
{
	ft_puthex_fd((long)p, fd);
}

void	ft_putptr(const void *p)
{
	ft_putptr_fd(p, 1);
}
