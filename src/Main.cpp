//
//  Main.cpp
//  BaseSDL
//
//  Created by Aaron Dale on 2013-10-08.
//  Copyright (c) 2013 Aaron Dale. All rights reserved.
//

#include "Common.h"
#include "SDLWindowManager.h"

bool initialize()
{
    SDLWindowManager* windowManager = SDLWindowManager::createInstance();
    if(windowManager->createWindow() == false)
    {
        return false;
    }
    return true;
}

void shutdown()
{
    SDLWindowManager::destroyInstance();
}

void tick()
{
    static milliseconds_t previousMilliseconds = SDL_GetTicks();
    const milliseconds_t currentMilliseconds = SDL_GetTicks();
    const seconds_t elapsedSeconds = (currentMilliseconds - previousMilliseconds) / 1000.0f;
    previousMilliseconds = currentMilliseconds;

    // TODO: update game code

    SDLWindowManager::getInstance()->clear();

    // TODO: draw game code

    SDLWindowManager::getInstance()->swap();
}

int main(int argc, char** argv)
{
    if (initialize())
    {
        bool running = true;
        while(running)
        {
            SDL_Event event;
            while(SDL_PollEvent(&event))
            {
                switch(event.type)
                {
                    case SDL_QUIT:
                        running = false;
                        break;
                    default:
                        break;
                }
            }
            tick();
        }
    }
    shutdown();
    return 0;
}
