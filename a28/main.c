#include "app.h"

int main(int argc, char* args[]) {
	Init();

	while (1) {
		while (SDL_PollEvent(&app->sdl_e)) {
			if (app->sdl_e.type == SDL_QUIT) goto quit;
		}
	}

quit:
	Exit();
	return 0;
}
