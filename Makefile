# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsage <jsage@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/15 14:17:30 by jsage             #+#    #+#              #
#    Updated: 2022/05/05 13:55:49 by jsage            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SHELL = /bin/sh

CFLAGS := ${CFLAGS}

CC     ?= gcc
LD     ?= gcc

INC_FLAGS := -I libft/
LIBFT := -Llibft -lft 

MAKEFLAGS += --output-sync=target
MAKEFLAGS += --no-print-directory

NAME ?= push_swap

BUILD_DIR ?= ./build
SRC_DIRS ?= ./srcs
INCLUDE_DIR ?= ./includes

SRCS := $(shell find $(SRC_DIRS) -name '*.c')
OBJS := $(SRCS:%=$(BUILD_DIR)/%.o)

INC_DIRS := $(shell find $(INCLUDE_DIR) -type d)
INC_FLAGS += $(addprefix -I,$(INC_DIRS))

LIB    := libft/libft.a

CFLAGS += -Wall -Wextra -Werror
CFLAGS += -std=c99 -pedantic
CFLAGS += -O2 -march=native
#CFLAGS += -g3 -fsanitize=address -v


all:
	@$(MAKE) $(NAME)

$(NAME): $(LIB) $(OBJS)
	@echo Linking $@
	@$(CC) $(CFLAGS) $(INC_FLAGS) $(OBJS) $(LIB) -o $(NAME)

$(BUILD_DIR)/%.c.o: %.c
	@echo Compiling $@
	@mkdir -p $(dir $@)
	@$(CC) -c  $(CFLAGS) $(INC_FLAGS) $< -o $@

$(LIB):
	@$(MAKE) -C libft
	@echo Libft done
	@echo GNL done

clean:
	@rm -rf $(BUILD_DIR)
	@$(MAKE) -C libft clean
	@echo Clean done

fclean:
	@rm -rf $(BUILD_DIR)
	@rm -f $(NAME)
	@$(MAKE) -C libft fclean
	@echo Fclean done

re: fclean
	@$(MAKE) -j$(NPROC) $(NAME)

.PHONY: all clean fclean re