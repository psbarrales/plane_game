
CC = gcc
CFLAGS = -g -Wall

SDL_FLAGS = $(shell sdl2-config --cflags)
SDL_LIBS = $(shell sdl2-config --libs)
SRC_FOLDER = src
DIST_FOLDER = dist

SRCS = $(SRC_FOLDER)/engine/window.c \
		$(SRC_FOLDER)/engine/file.c \
		$(SRC_FOLDER)/engine/event.c \
		$(SRC_FOLDER)/engine/game.c \
		$(SRC_FOLDER)/main.c

O = $(DIST_FOLDER)/game

clean:
	rm -R $(DIST_FOLDER)

game: 
	mkdir -p $(DIST_FOLDER)/media
	cp -R $(SRC_FOLDER)/media $(DIST_FOLDER)
	cp -R $(SRC_FOLDER)/config $(DIST_FOLDER)
	echo $(SDL_FLAGS)
	$(CC) $(SDL_FLAGS) $(CFLAGS) -o $(O) $(SRCS) $(SDL_LIBS)
