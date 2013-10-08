//
//  OpenGL.h
//  BaseSDL
//
//  Created by Aaron Dale on 2013-10-08.
//  Copyright (c) 2013 Aaron Dale. All rights reserved.
//

#pragma once

#include "Platform.h"

// SDL and OpenGL includes
#include <SDL2/SDL.h>
#include <SDL2/SDL_opengl.h>

// GLU include
#if OSX
    #include <OpenGL/glu.h>
#else
    #include <GL/glu.h>
#endif
