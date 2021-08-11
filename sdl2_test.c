#include <stdio.h>

#include "SDL.h"

const int SCREEN_W = 800;
const int SCREEN_H = 600;

int main(int argc, char *argv[]) {
  SDL_Window *win = NULL;
  SDL_Surface *scrnSurface = NULL;

  if (SDL_Init(SDL_INIT_VIDEO) < 0) {
    printf("ERROR: SDL could not initialize. %s\n", SDL_GetError());
    goto exit;
  }

  win = SDL_CreateWindow("SDL Hello World", SDL_WINDOWPOS_UNDEFINED,
                         SDL_WINDOWPOS_UNDEFINED, SCREEN_W, SCREEN_H,
                         SDL_WINDOW_SHOWN);
  if (NULL == win) {
    printf("ERROR: could not create window. %s\n", SDL_GetError());
    goto exit;
  }

  scrnSurface = SDL_GetWindowSurface(win);
  SDL_FillRect(scrnSurface, NULL,
               SDL_MapRGB(scrnSurface->format, 0xec, 0xbc, 0xfd));
  SDL_UpdateWindowSurface(win);
  SDL_Delay(2000);

  SDL_DestroyWindow(win);
  SDL_Quit();

exit:
  return 0;
}