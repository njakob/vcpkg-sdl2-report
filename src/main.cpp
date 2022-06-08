#include <cstdlib>
#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2/SDL_main.h>
#include <SDL2/SDL_gamecontroller.h>

static const int SCREEN_WIDTH = 800;
static const int SCREEN_HEIGHT = 600;

int main(int arc, char* argv[]) {
  if (SDL_Init(SDL_INIT_VIDEO)) {
    std::cout << "Unable to initialize SDL: " << SDL_GetError() << std::endl;
    return EXIT_FAILURE;
  }
  if (SDL_Init(SDL_INIT_GAMECONTROLLER)) {
    std::cout << "Unable to initialize SDL game controller: " << SDL_GetError() << std::endl;
    return EXIT_FAILURE;
  }

  SDL_CreateWindow(
    "SDL2 Example",
    SDL_WINDOWPOS_CENTERED,
    SDL_WINDOWPOS_CENTERED,
    SCREEN_WIDTH,
    SCREEN_HEIGHT,
    SDL_WINDOW_SHOWN
  );

  return EXIT_SUCCESS;
}