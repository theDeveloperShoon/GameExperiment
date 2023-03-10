#include <stdio.h>
#include <SDL2/SDL.h>

int main(){
    SDL_Window *window = NULL;
    SDL_Surface *screenSurface = NULL;

    if(SDL_Init(SDL_INIT_VIDEO) < 0){
	printf("SDL could not initialize! SDL Error: %s\n", SDL_GetError());
    } else {
	window = SDL_CreateWindow("First Window", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 640, 480, SDL_WINDOW_SHOWN);
	if(window == NULL){
	    printf("Window could not be created!  SDL Error: %s\n", SDL_GetError());
	} else {
	    screenSurface = SDL_GetWindowSurface(window);
	    SDL_FillRect(screenSurface,NULL,SDL_MapRGB(screenSurface -> format, 0xFF, 0xFF, 0xFF));
	    SDL_UpdateWindowSurface(window);
	    SDL_Event e;
	    bool quit = false;

	    while(quit == false){
		while(SDL_PollEvent(&e)){
		    if(e.type == SDL_QUIT){
			quit = true;
		    }
		}
	    }
	}
    }
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}
