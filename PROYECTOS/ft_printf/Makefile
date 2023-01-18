# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dlopez-i <dlopez-i@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/24 16:42:36 by dlopez-i          #+#    #+#              #
#    Updated: 2023/01/18 15:40:36 by dlopez-i         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Colors

END = \033[m
RED = \033[31m
GREEN = \033[32m
YELLOW = \033[33m

#Fonts

ligth = \033[1m
bold  = \033[2m
italic = \033[3m

#Variables

NAME = libftprintf.a
AR = ar -rcs
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
INCLUDE = -I ./ 
OBJS_DIR = objs
OBJS = $(SRCS$(FUNCTION_DIR)%.c=$(OBJS_DIR)%.o)
DEPS = $(SRCS:$(FUNCTION_DIR)%.c=$(OBJS_DIR)%.d)

#Sources

SRCS = ft_print_chars.c \
	   ft_print_idu.c \
	   ft_printf.c \
#Folders

OBJS = $(addprefix $(OBJS_DIR)/, $(SRCS:.c=.o))
DEPS = $(addsuffix .d, $(basename $(OBJS)))

#Rules

#Rules

%.o: %.c
	$(CC) $(CFLAGS) -MMD $(INCLUDE) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	@$(AR) $(NAME) $(OBJS)
	@echo "$(GREEN)$(ligth)All the obligatory stuff is created$(END)"
	@echo "$(YELLOW)$(ligth)Library created$(END)"

-include $(DEPS)

#
$(OBJS): | $(OBJS_DIR)
$(OBJS_DIR): 
	@mkdir $@
	@echo "$(YELLOW)$(ligth)The directory has been created$(END)"
$(OBJS_DIR)/%.o: %.c
	$(CC) $(CFLAGS) -MMD -MP $(INCLUDE) -c $< -o $@


.PHONY: all bonus clean fclean re
#Clean

clean :
	@$(RM) $(OBJS) $(DEPS)  $(OBJS_DIR) $(DEPS_DIR)
	@echo "$(YELLOW)$(ligth)Objects and Dependencies removed$(END)"
fclean : clean
	@$(RM) $(NAME)
	@echo "Everything is clean"

re : fclean all





