
CC = gcc
CFLAGS = -g -Wall

SDL_FLAGS = $(shell sdl2-config --cflags)
SDL_LIBS = $(shell sdl2-config --libs)

SRCS = src/engine/window/window.c \
		src/engine/window/event.c \
		src/engine/game.c \
		src/main.c

O = dist/car

game: 
	mkdir -p dist
	mkdir -p dist/media
	cp -R src/media dist
	cp -R src/config dist
	echo $(SDL_FLAGS)
	$(CC) $(SDL_FLAGS) $(CFLAGS) -o $(O) $(SRCS) $(SDL_LIBS)
