#pragma once
#include <SDL.h>
#include <SDL_image.h>
#include <stdlib.h>
#include <stdio.h>

#include "dirent.h"
#include "help.h"

typedef struct {
	struct {
		SDL_Window* window;
		SDL_Renderer* render;
		int width;
		int height;
	} gui;
	SDL_Event sdl_e;
	struct {
		int flags;
	} state;
} app_t;
extern app_t* app;

void Init();
void Exit();
