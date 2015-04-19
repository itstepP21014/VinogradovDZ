#include <stdio.h>
#include <stdlib.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <math.h>
#include <stdbool.h>

#define SCREENVIDS 640
#define SCREENHIGH 480

int main()
{
    if(SDL_Init(SDL_INIT_VIDEO) != 0)
    {
        fprintf(stderr, "SDL_Init Error: %s\n", SDL_GetError());
        exit(1);
    }

    SDL_Window *win = SDL_CreateWindow("Hello World!", 100, 100, SCREENVIDS, SCREENHIGH, SDL_WINDOW_SHOWN);

    if(win == NULL)
    {
        fprintf(stderr, "SDL_CreateWindow Error: %s\n", SDL_GetError());
        exit(1);
    }

    if (IMG_Init(IMG_INIT_PNG)==0)
    {
        fprintf(stderr, "IMG_Init Error: %s\n", IMG_GetError());
        exit(1);
    }

    SDL_Renderer *ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

    if(ren == NULL)
    {
        SDL_DestroyWindow(win);
        fprintf(stderr, "SDL_CreateRenderer Error: %s\n", SDL_GetError());
        SDL_Quit();
        exit(1);
    }

    SDL_Surface *bmp = IMG_Load("Faer.png");

    if(bmp == NULL)
    {
        SDL_DestroyRenderer(ren);
        SDL_DestroyWindow(win);
        fprintf(stderr, "SDL_LoadBMP Error: %s\n", SDL_GetError());
        SDL_Quit();
        exit(1);
    }

    SDL_Texture *tex = SDL_CreateTextureFromSurface(ren, bmp);
    SDL_FreeSurface(bmp);

    if(tex == NULL)
    {
        SDL_DestroyRenderer(ren);
        SDL_DestroyWindow(win);
        fprintf(stderr, "SDL_CreateTextureFromSurface Error: %s\n", SDL_GetError());
        SDL_Quit();
        exit(1);
    }

//Now lets draw our image
//First clear the renderer
    SDL_SetRenderDrawColor(ren, 255, 127, 42, 0xFF);



    SDL_RenderClear(ren);


    bool quit=false;
    SDL_Event e;
    while(!quit)
    {
        int ticks=SDL_GetTicks();
        int sprite=(ticks/100)%7;

        while(SDL_PollEvent (&e))
            switch (e.type)
            {
            case SDL_QUIT:
                quit=true;
                break;
            }
            SDL_Rect dst= {SCREENVIDS/2-71, SCREENHIGH/2-128, 142, 256};
            SDL_Rect src= {sprite*142, 0, 142, 256};
            SDL_RenderCopy(ren, tex, &src, &dst);
        SDL_RenderPresent(ren);
        SDL_RenderClear(ren);

    }


    IMG_Quit();
    SDL_DestroyTexture(tex);
    SDL_DestroyRenderer(ren);
    SDL_DestroyWindow(win);
    SDL_Quit();

    return 0;
}
