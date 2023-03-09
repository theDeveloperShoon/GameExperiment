#OBJS specifies which files to compile as a part of the project
OBJS = main.cpp

#CC specifies which compiler
CC = g++

#SDL_CFLAGS includes all the libraries that SDL provides
SDL_CFLAGS := $(shell sdl2-config --cflags)

#SDL_LDFLAGS includes all the libraries that SDL provides
SDL_LDFLAGS := $(shell sdl2-config --libs)

#INCLUDE_PATHS specifies the additional include paths we'll need
INCLUDE_PATHS = -Iinclude

#LIBRARY_PATHS specifies the additional library paths we'll need
LIBRARY_PATHS = -Llib

#COMPILER_FLAGS specifies the additional compilation options we're using

#LINKER_FLAGS specifies the libaries we're linking to
LINKER_FLAGS = -lSDL2

#OBJ_NAME specifies the name of our executable
OBJ_NAME = GameExperiment

#This is the target that compiles our executable
all: $(OBJS)
	$(CC) $(OBJS) $(SDL_CFLAGS) $(SDL_LDFLAGS) -o $(OBJ_NAME).exe
clean:
	rm -f $(OBJ_NAME) *.o
