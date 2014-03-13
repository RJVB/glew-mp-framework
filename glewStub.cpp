/*
 *  glewStub.cpp
 *  GLEW
 *
 *  Created by René J.V. Bertin on 20140313.
 *  Copyright 2014 RJVB. All rights reserved.
 *
 */


#include <GL/glew.h>
#include <GLUT/glut.h>

static void *glewStub()
{
#ifdef GLEW_MX
	extern void *glewGetContext();
	static void* (*stubFn)() = glewGetContext;
#else
	static GLenum (*stubFn)() = glewInit;
#endif
	return (void*) stubFn;
}
