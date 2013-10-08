//
//  Debug.cpp
//  BaseSDL
//
//  Created by Aaron Dale on 2013-10-08.
//  Copyright (c) 2013 Aaron Dale. All rights reserved.
//

#ifdef DEBUG

#include "Debug.h"
#include "OpenGL.h"

void glCheck(const char* statement, const char* filename, int line)
{
    GLenum error = glGetError();
    if(error != GL_NO_ERROR)
    {
        printf("%s\n%s:%d\n", statement, filename, line);
        printf("ERROR: %s\n", gluErrorString(error));
        abort();
    }
}

void glVersion()
{
    printf("%s\n", glGetString(GL_VERSION));
    printf("%s\n", glGetString(GL_SHADING_LANGUAGE_VERSION));
    printf("%s\n", glGetString(GL_VENDOR));
    printf("%s\n", glGetString(GL_RENDERER));
}

#endif
