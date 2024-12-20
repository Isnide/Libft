
#variables
NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SOURCES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_calloc.c ft_strnstr.c ft_atoi.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_memcmp.c ft_strlcat.c ft_strncmp.c ft_strtrim.c ft_itoa.c ft_memchr.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_split.c
OBJECTS = $(SOURCES:.c=.o)
	
#rules

all: $(NAME)

$(NAME): $(OBJECTS)
	ar -rcs $(NAME) $(OBJECTS)

#cleaning and rebuild

clean :
	rm -f $(OBJECTS)

fclean : clean
	rm -rf $(NAME)

re: fclean all 
