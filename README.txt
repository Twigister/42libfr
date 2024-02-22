Currently WIP version of my libft, basically a much simpler libc, useful for my 42 projects
I'll try to make this as optimized as possible in the near future, but there's a long way to go

List of functions currently optimized
ft_bzero.c (Using my implem of ft_memset)
ft_putstr_fd
ft_strdup (Subversions might benefit from a rework)
ft_strlen
ft_memcpy
ft_strcpy
ft_strjoin

- Functions I don't think can be optimized
ft_calloc
ft_isalnum
ft_isalpha
ft_isascii
ft_isdigit
ft_isprint
ft_lstdelone
ft_lstnew
ft_striteri
ft_strmapi
Might benefit from goind iterative, might not
ft_putchar_fd
ft_puthex_fd
ft_putnbr_fd
ft_putptr

- Works in progress
ft_memset


- Still the basic version needed to validate the project
ft_strncpy
ft_atoi.c (Integer overflow not managed)
ft_itoa.c
ft_memchr
ft_memcmp
ft_memmove
ft_split
ft_strchr
ft_strlcat
ft_strlcpy
ft_strncmp (And sub)
ft_strnstr
ft_strrchr
ft_strtrim
ft_substr
ft_tolower
ft_toupper
These are made in a recursive maneer but would benefit to be iterative
ft_lstadd_front
ft_lstadd_back
ft_lstclear
ft_lstiter
ft_lstlast
ft_lstmap
ft_lstsize

Might be some nice additions in the future
ft_pow
ft_atoi_base
