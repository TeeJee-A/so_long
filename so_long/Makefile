NAME = so_long
NAME_B = so_long_bonus
INC = so_long.h
INCB = so_long_bonus.h
SRCS = so_long.c \
	get_next_line/get_next_line.c \
	get_next_line/get_next_line_utils.c \
	printf/ft_printchar.c \
	printf/ft_printf.c \
	printf/ft_printnbr.c \
	Parsing/alloc_map.c \
	Parsing/check_characters.c \
	Parsing/check_format_map.c \
	Parsing/check_name_map.c \
	Parsing/check_walls.c \
	Parsing/read_map.c \
	Parsing/write_error.c \
	MiniLibX/find_player.c \
	MiniLibX/size_win_img.c \
	MiniLibX/mlx_init.c \
	MiniLibX/mlx_img.c \
	MiniLibX/keypress.c \
	MiniLibX/check_next_pos.c \
	MiniLibX/win_game.c \
	MiniLibX/free.c \
	MiniLibX/destroy_images.c

SRCSB = so_long_bonus.c \
	get_next_line/get_next_line.c \
	get_next_line/get_next_line_utils.c \
	printf/ft_printchar.c \
	printf/ft_printf.c \
	printf/ft_printnbr.c \
	Parsing/alloc_map.c \
	Parsing/check_characters_bonus.c \
	Parsing/check_format_map.c \
	Parsing/check_name_map.c \
	Parsing/check_walls.c \
	Parsing/read_map.c \
	Parsing/write_error.c \
	MiniLibX_bonus/find_player_bonus.c \
	MiniLibX_bonus/size_win_img_bonus.c \
	MiniLibX_bonus/mlx_init_bonus.c \
	MiniLibX_bonus/mlx_img_bonus.c \
	MiniLibX_bonus/keypress_bonus.c \
	MiniLibX_bonus/check_next_pos_bonus.c \
	MiniLibX_bonus/win_game_bonus.c \
	MiniLibX_bonus/free_bonus.c \
	MiniLibX_bonus/destroy_images_bonus.c \
	MiniLibX_bonus/itoa.c

OBJS = $(SRCS:%.c=%.o)
OBJSB = $(SRCSB:%.c=%.o)
CFLAGS = -Wall -Wextra -Werror

all:$(NAME)
	@echo "███████╗ ██████╗     ██╗      ██████╗ ███╗   ██╗ ██████╗"
	@echo "██╔════╝██╔═══██╗    ██║     ██╔═══██╗████╗  ██║██╔════╝"
	@echo "███████╗██║   ██║    ██║     ██║   ██║██╔██╗ ██║██║  ███╗"
	@echo "╚════██║██║   ██║    ██║     ██║   ██║██║╚██╗██║██║   ██║"
	@echo "███████║╚██████╔╝    ███████╗╚██████╔╝██║ ╚████║╚██████╔╝"
	@echo "╚══════╝ ╚═════╝     ╚══════╝ ╚═════╝ ╚═╝  ╚═══╝ ╚═════╝"

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) -lmlx -framework OpenGL -framework AppKit -o $(NAME) $^

bonus : $(NAME_B)
	@echo "███████╗ ██████╗     ██╗      ██████╗ ███╗   ██╗ ██████╗     ████████╗"
	@echo "██╔════╝██╔═══██╗    ██║     ██╔═══██╗████╗  ██║██╔════╝     ██╔═══██║"
	@echo "███████╗██║   ██║    ██║     ██║   ██║██╔██╗ ██║██║  ███╗    ██████══╝"
	@echo "╚════██║██║   ██║    ██║     ██║   ██║██║╚██╗██║██║   ██║    ██╔═══██╗"
	@echo "███████║╚██████╔╝    ███████╗╚██████╔╝██║ ╚████║╚██████╔╝    ████████║"
	@echo "╚══════╝ ╚═════╝     ╚══════╝ ╚═════╝ ╚═╝  ╚═══╝ ╚═════╝     ╚═══════╝"

$(NAME_B): $(OBJSB)
	@$(CC) $(CFLAGS) -lmlx -framework OpenGL -framework AppKit -o $(NAME_B) $^

%.o: %.c $(INC) $(INCB)
	@$(CC) $(CFLAGS) -c $< -o $@

clean :
	@$(RM) $(OBJS) $(OBJSB)

fclean : clean
	@$(RM) $(NAME) $(NAME_B)

re : fclean all