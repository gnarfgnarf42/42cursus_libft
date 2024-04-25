# Makefile

# The name of the final executable
NAME = libft.a

# Compiler and flags
CC = cc
CFLAGS = -Wall -Werror -Wextra

# Source and object files
SRC = ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memcpy.c ft_memmove.c ft_memset.c ft_memchr.c ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strrchr.c ft_tolower.c ft_toupper.c
OBJ = $(SRC:.c=.o)

# Rule to build static library
$(NAME): $(OBJ)
	ar rcs $@ $^

# Rule for compiling source files into object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Rule for cleaning up object files
clean:
	rm -f $(OBJ)

# Rule for full clean (removes executable as well)
fclean: clean
	rm -f $(NAME)

# Rule for re-making the project from scratch
re: fclean all

# Default rule
all: $(NAME)

# To prevent unnecessary relinks, we make sure that the `all` target
# does not force a rebuild of the $(NAME) if the object files have not changed.
# This is implicit in the way make works by checking the timestamps of prerequisites.
