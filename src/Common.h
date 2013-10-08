//
//  Common.h
//  BaseSDL
//
//  Created by Aaron Dale on 2013-10-08.
//  Copyright (c) 2013 Aaron Dale. All rights reserved.
//

#pragma once

#include <iostream>
#include <assert.h>

#include "Platform.h"
#include "Debug.h"
#include "OpenGL.h"
#include "Singleton.h"

// Define nullptr as simply 0 for non-C++11 compilers
#if __cplusplus <= 199711L
  #define nullptr 0
#endif

// types for time
typedef float seconds_t;
typedef unsigned int milliseconds_t;
