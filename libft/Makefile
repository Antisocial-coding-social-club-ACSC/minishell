
NAME = libft.a
SRCS = ft_calloc.c \
	   ft_isdigit.c \
	   ft_memcpy.c \
	   ft_strdup.c \
	   ft_strlen.c \
	   ft_strtrim.c \
	   ft_isalnum.c \
	   ft_isprint.c \
	   ft_memmove.c \
	   ft_strjoin.c \
	   ft_strncmp.c \
	   ft_substr.c \
	   ft_atoi.c \
	   ft_isalpha.c \
	   ft_memchr.c \
	   ft_memset.c \
	   ft_strlcat.c \
	   ft_strnstr.c \
	   ft_tolower.c \
	   ft_bzero.c \
	   ft_isascii.c \
	   ft_memcmp.c \
	   ft_strchr.c \
	   ft_strlcpy.c \
	   ft_strrchr.c \
	   ft_toupper.c \
	   ft_split.c \
	   ft_itoa.c \
	   ft_strmapi.c \
	   ft_striteri.c \
	   ft_putchar.c \
	   ft_rputchar.c \
	   ft_putchar_fd.c \
	   ft_putstr_fd.c \
	   ft_putendl_fd.c \
	   ft_putnbr_fd.c \
	   ft_rputaddress.c \
	   ft_rputnbr.c \
	   ft_rputnbr_base.c \
	   ft_rputstr.c \
	   x_calloc.c \
	   ft_strcmp.c \
	   ft_ishexdigit.c \
	   ft_isspace.c

SRCS_BONUS = ft_lstnew.c \
		ft_lstadd_front.c \
		ft_lstsize.c \
		ft_lstlast.c \
		ft_lstadd_back.c \
		ft_lstdelone.c \
		ft_lstclear.c \
		ft_lstiter.c \
		ft_lstmap.c \

FLAGS = -Wall -Wextra -Werror -MMD
OBJS		=	$(SRCS:.c=.o) $(PRINTF:.c=.o)
PRINTF	=	./ft_printf/ft_printf.c ./ft_printf/ft_printf_utils.c
OBJS_BONUS = $(SRCS_BONUS:.c=.o)
DEPS = $(SRCS:.c=.d)
DEPS_BONUS = $(SRCS_BONUS:.c=.d)
BONUS = .bonus
all: $(NAME)
CC = gcc
SILENCE = --no-print-directory

%.o:%.c Makefile libft.h
	@$(CC) $(FLAGS) -I ./ -c $< -o $@

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)
	@echo "Compiled Libft"
bonus: $(BONUS)
	
$(BONUS): $(OBJS) $(OBJS_BONUS)
	@ar rcs $(NAME) $(OBJS) $(OBJS_BONUS)
	touch $@
	@echo "Compiled Libft Bonus!"

clean:
	@rm -f $(OBJS) $(OBJS_BONUS) $(DEPS) $(DEPS_BONUS)
	@echo "Cleaning Libft"

fclean: clean
	@rm -f $(NAME)
	@echo "Removing Libft"

re: fclean all

-include $(DEPS)
-include $(DEPS_BONUS)

.PHONY: all clean fclean re bonus 
