NAME = rush-02
SOURCES = main.c read-file.c utils.c
OBJECTS = ${SOURCES:.c=.o}
FLAGS = -Wall -Wextra -Werror
all: ${NAME}
${NAME}: ${OBJECTS}
	cc ${FLAGS} -o ${NAME} ${OBJECTS}
%.o: %.c
	cc ${FLAGS} -c $< -o $@
clean:
	rm -f ${OBJECTS}
fclean: clean
	rm -f ${NAME}
.PHONY: all clean fclean
