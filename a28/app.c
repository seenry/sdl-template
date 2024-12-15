#include "app.h"

app_t* app;

void HandleSDL();

void Init() {
	app = (app_t*) malloc(sizeof(app_t));
	HANDLE_NULL(app, "failed to allocate application");

	app->gui.width = 1024;
	app->gui.height = 768;

	HandleSDL();
}

void Exit() {
	SDL_DestroyRenderer(app->gui.render);
	SDL_DestroyWindow(app->gui.window);

	free(app);
	app = 0;
}

void HandleSDL() {
	if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO) != 0) { printf("SDL_Init failed: %s\n", SDL_GetError()); exit(-1); }

	app->gui.window = SDL_CreateWindow("",
		SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
		app->gui.width, app->gui.height,
		SDL_WINDOW_RESIZABLE);
	HANDLE_NULL(app->gui.window, SDL_GetError());

	app->gui.render = SDL_CreateRenderer(app->gui.window, -1, 0);
	HANDLE_NULL(app->gui.render, SDL_GetError());
}