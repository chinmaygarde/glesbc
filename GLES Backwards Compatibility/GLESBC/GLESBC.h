//
//  GLESBC.h
//  GLESBC
//
//  Created by Chinmay Garde on 1/12/12.
//  Copyright (c) 2012 Carnegie Mellon University. All rights reserved.
//

#ifndef GLESBC_H
#define GLESBC_H
#include "OpenGLESContext.h"

void setupGLES2BC();
void glActiveTextureBC(GLenum texture); 
void glAlphaFuncBC(GLenum func, GLclampf ref); 
void glAlphaFuncxBC(GLenum func, GLclampx ref); 
void glBindTextureBC(GLenum target, GLuint texture); 
void glBlendFuncBC(GLenum sfactor, GLenum dfactor); 
void glClearBC(GLbitfield mask); 
void glClearColorBC(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha); 
void glClearColorxBC(GLclampx red, GLclampx green, GLclampx blue, GLclampx alpha); 
void glClearDepthfBC(GLclampf depth); 
void glClearDepthxBC(GLclampx depth); 
void glClearStencilBC(GLint s); 
void glClientActiveTextureBC(GLenum texture); 
void glColor4fBC(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha); 
void glColor4xBC(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha); 
void glColorMaskBC(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha); 
void glColorPointerBC(GLint size, GLenum type, GLsizei stride, const GLvoid *pointer); 
void glCompressedTexImage2DBC(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid *data); 
void glCompressedTexSubImage2DBC(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid *data); 
void glCopyTexImage2DBC(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border); 
void glCopyTexSubImage2DBC(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height); 
void glCullFaceBC(GLenum mode); 
void glDeleteTexturesBC(GLsizei n, const GLuint *textures); 
void glDepthFuncBC(GLenum func); 
void glDepthMaskBC(GLboolean flag); 
void glDepthRangefBC(GLclampf zNear, GLclampf zFar); 
void glDepthRangexBC(GLclampx zNear, GLclampx zFar); 
void glDisableBC(GLenum cap); 
void glDisableClientStateBC(GLenum array); 
void glDrawArraysBC(GLenum mode, GLint first, GLsizei count); 
void glDrawElementsBC(GLenum mode, GLsizei count, GLenum type, const GLvoid *indices); 
void glEnableBC(GLenum cap); 
void glEnableClientStateBC(GLenum array); 
void glFinishBC(void); 
void glFlushBC(void); 
void glFogfBC(GLenum pname, GLfloat param); 
void glFogfvBC(GLenum pname, const GLfloat *params); 
void glFogxBC(GLenum pname, GLfixed param); 
void glFogxvBC(GLenum pname, const GLfixed *params); 
void glFrontFaceBC(GLenum mode); 
void glFrustumfBC(GLfloat left, GLfloat right, GLfloat bottom, GLfloat top, GLfloat zNear, GLfloat zFar); 
void glFrustumxBC(GLfixed left, GLfixed right, GLfixed bottom, GLfixed top, GLfixed zNear, GLfixed zFar); 
void glGenTexturesBC(GLsizei n, GLuint *textures); 
GLenum glGetErrorBC(void); 
void glGetIntegervBC(GLenum pname, GLint *params); 
const GLubyte * glGetStringBC(GLenum name); 
void glHintBC(GLenum target, GLenum mode); 
void glLightModelfBC(GLenum pname, GLfloat param); 
void glLightModelfvBC(GLenum pname, const GLfloat *params); 
void glLightModelxBC(GLenum pname, GLfixed param); 
void glLightModelxvBC(GLenum pname, const GLfixed *params); 
void glLightfBC(GLenum light, GLenum pname, GLfloat param); 
void glLightfvBC(GLenum light, GLenum pname, const GLfloat *params); 
void glLightxBC(GLenum light, GLenum pname, GLfixed param); 
void glLightxvBC(GLenum light, GLenum pname, const GLfixed *params); 
void glLineWidthBC(GLfloat width); 
void glLineWidthxBC(GLfixed width); 
void glLoadIdentityBC(void); 
void glLoadMatrixfBC(const GLfloat *m); 
void glLoadMatrixxBC(const GLfixed *m); 
void glLogicOpBC(GLenum opcode); 
void glMaterialfBC(GLenum face, GLenum pname, GLfloat param); 
void glMaterialfvBC(GLenum face, GLenum pname, const GLfloat *params); 
void glMaterialxBC(GLenum face, GLenum pname, GLfixed param); 
void glMaterialxvBC(GLenum face, GLenum pname, const GLfixed *params); 
void glMatrixModeBC(GLenum mode); 
void glMultMatrixfBC(const GLfloat *m); 
void glMultMatrixxBC(const GLfixed *m); 
void glMultiTexCoord4fBC(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q); 
void glMultiTexCoord4xBC(GLenum target, GLfixed s, GLfixed t, GLfixed r, GLfixed q); 
void glNormal3fBC(GLfloat nx, GLfloat ny, GLfloat nz); 
void glNormal3xBC(GLfixed nx, GLfixed ny, GLfixed nz); 
void glNormalPointerBC(GLenum type, GLsizei stride, const GLvoid *pointer); 
void glOrthofBC(GLfloat left, GLfloat right, GLfloat bottom, GLfloat top, GLfloat zNear, GLfloat zFar); 
void glOrthoxBC(GLfixed left, GLfixed right, GLfixed bottom, GLfixed top, GLfixed zNear, GLfixed zFar); 
void glPixelStoreiBC(GLenum pname, GLint param); 
void glPointSizeBC(GLfloat size); 
void glPointSizexBC(GLfixed size); 
void glPolygonOffsetBC(GLfloat factor, GLfloat units); 
void glPolygonOffsetxBC(GLfixed factor, GLfixed units); 
void glPopMatrixBC(void); 
void glPushMatrixBC(void); 
void glReadPixelsBC(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid *pixels); 
void glRotatefBC(GLfloat angle, GLfloat x, GLfloat y, GLfloat z); 
void glRotatexBC(GLfixed angle, GLfixed x, GLfixed y, GLfixed z); 
void glSampleCoverageBC(GLclampf value, GLboolean invert); 
void glSampleCoveragexBC(GLclampx value, GLboolean invert); 
void glScalefBC(GLfloat x, GLfloat y, GLfloat z); 
void glScalexBC(GLfixed x, GLfixed y, GLfixed z); 
void glScissorBC(GLint x, GLint y, GLsizei width, GLsizei height); 
void glShadeModelBC(GLenum mode); 
void glStencilFuncBC(GLenum func, GLint ref, GLuint mask); 
void glStencilMaskBC(GLuint mask); 
void glStencilOpBC(GLenum fail, GLenum zfail, GLenum zpass); 
void glTexCoordPointerBC(GLint size, GLenum type, GLsizei stride, const GLvoid *pointer); 
void glTexEnvfBC(GLenum target, GLenum pname, GLfloat param); 
void glTexEnvfvBC(GLenum target, GLenum pname, const GLfloat *params); 
void glTexEnvxBC(GLenum target, GLenum pname, GLfixed param); 
void glTexEnvxvBC(GLenum target, GLenum pname, const GLfixed *params); 
void glTexImage2DBC(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid *pixels); 
void glTexParameterfBC(GLenum target, GLenum pname, GLfloat param); 
void glTexParameterxBC(GLenum target, GLenum pname, GLfixed param); 
void glTexSubImage2DBC(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *pixels); 
void glTranslatefBC(GLfloat x, GLfloat y, GLfloat z); 
void glTranslatexBC(GLfixed x, GLfixed y, GLfixed z); 
void glVertexPointerBC(GLint size, GLenum type, GLsizei stride, const GLvoid *pointer); 
void glViewportBC(GLint x, GLint y, GLsizei width, GLsizei height); 
void glBindBufferBC(GLenum target, GLuint buffer); 
void glBufferDataBC(GLenum target, GLsizeiptr size, const GLvoid *data, GLenum usage); 
void glBufferSubDataBC(GLenum target, GLintptr offset, GLsizeiptr size, const GLvoid *data); 
void glClipPlanefBC(GLenum plane, const GLfloat *equation); 
void glClipPlanexBC(GLenum plane, const GLfixed *equation); 
void glColor4ubBC(GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha); 
void glDeleteBuffersBC(GLsizei n, const GLuint *buffers); 
void glGenBuffersBC(GLsizei n, GLuint *buffers); 
void glGetClipPlanefBC(GLenum pname, GLfloat eqn[4]); 
void glGetFloatvBC(GLenum pname, GLfloat *params); 
void glGetLightfvBC(GLenum light, GLenum pname, GLfloat *params); 
void glGetLightxvBC(GLenum light, GLenum pname, GLfixed *params); 
void glGetMaterialfvBC(GLenum face, GLenum pname, GLfloat *params); 
void glGetMaterialxvBC(GLenum face, GLenum pname, GLfixed *params); 
void glGetTexEnvfvBC(GLenum env, GLenum pname, GLfloat *params); 
void glGetTexEnvivBC(GLenum env, GLenum pname, GLint *params); 
void glGetTexEnvxvBC(GLenum env, GLenum pname, GLfixed *params); 
void glGetTexParameterfvBC(GLenum target, GLenum pname, GLfloat *params); 
void glGetTexParameterivBC(GLenum target, GLenum pname, GLint *params); 
void glGetTexParameterxvBC(GLenum target, GLenum pname, GLfixed *params); 
void glGetBooleanvBC(GLenum pname, GLboolean *params); 
void glGetFixedvBC(GLenum pname, GLfixed *params); 
void glGetPointervBC(GLenum pname, void **params); 
GLboolean glIsBufferBC(GLuint buffer); 
GLboolean glIsEnabledBC(GLenum cap); 
GLboolean glIsTextureBC(GLuint texture); 
void glPointParameterfBC(GLenum pname, GLfloat param); 
void glPointParameterfvBC(GLenum pname, const GLfloat *params); 
void glPointParameterxBC(GLenum pname, GLfixed param); 
void glPointParameterxvBC(GLenum pname, const GLfixed *params); 
void glTexEnviBC(GLenum target, GLenum pname, GLint param); 
void glTexEnvivBC(GLenum target, GLenum pname, const GLint *params); 
void glTexParameteriBC(GLenum target, GLenum pname, GLint param); 
void glTexParameterivBC(GLenum target, GLenum pname, const GLint *params); 
void glCurrentPaletteMatrixOESBC(GLuint matrixpaletteindex); 
void glLoadPaletteFromModelViewMatrixOESBC(void); 
void glMatrixIndexPointerOESBC(GLint size, GLenum type, GLsizei stride, const GLvoid *pointer); 
void glWeightPointerOESBC(GLint size, GLenum type, GLsizei stride, const GLvoid *pointer); 
void glPointSizePointerOESBC(GLenum type, GLsizei stride, const GLvoid *pointer); 
void glDrawTexsOESBC(GLshort x, GLshort y, GLshort z, GLshort width, GLshort height); 
void glDrawTexiOESBC(GLint x, GLint y, GLint z, GLint width, GLint height); 
void glDrawTexxOESBC(GLfixed x, GLfixed y, GLfixed z, GLfixed width, GLfixed height); 
void glDrawTexsvOESBC(const GLshort *coords); 
void glDrawTexivOESBC(const GLint *coords); 
void glDrawTexxvOESBC(const GLfixed *coords); 
void glDrawTexfOESBC(GLfloat x, GLfloat y, GLfloat z, GLfloat width, GLfloat height); 
void glDrawTexfvOESBC(const GLfloat *coords); 

#endif