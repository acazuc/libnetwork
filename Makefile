NAME = libnetwork.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror -Ofast

INCLUDES_PATH = includes/

SRCS_PATH = srcs/

SRCS_NAME = buffer/create.c \
			buffer/append.c \
			buffer/writes.c \
			buffer/reads.c \
			buffer/read.c \
			buffer/clear.c \
			buffer/send.c \
			buffer/free.c \
			client/create.c \
			client/writes.c \
			client/reads.c \
			client/close.c \
			client/send.c \
			client/read.c \
			server/create.c \
			server/listen.c \
			server/accept.c \
			server/close.c \

SRCS = $(addprefix $(SRCS_PATH), $(SRCS_NAME))

OBJS_PATH = objs/

OBJS_NAME = $(SRCS_NAME:.c=.o)

OBJS = $(addprefix $(OBJS_PATH), $(OBJS_NAME))

all: odir $(NAME)

$(NAME): $(OBJS)
	@echo " - Making $(NAME)"
	@ar -rc $(NAME) $(OBJS)
	@ranlib $(NAME)

$(OBJS_PATH)%.o: $(SRCS_PATH)%.c
	@echo " - Compiling $<"
	@$(CC) $(CFLAGS) -o $@ -c $< -I$(INCLUDES_PATH)

odir:
	@mkdir -p $(OBJS_PATH)
	@mkdir -p $(OBJS_PATH)buffer
	@mkdir -p $(OBJS_PATH)client
	@mkdir -p $(OBJS_PATH)server

clean:
	@echo " - Cleaning objs"
	@rm -f $(OBJS)

fclean: clean
	@echo " - Cleaning executable"
	@rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re odir
