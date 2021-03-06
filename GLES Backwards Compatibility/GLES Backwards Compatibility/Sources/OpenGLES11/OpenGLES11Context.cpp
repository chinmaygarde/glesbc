/*
 Copyright 2009 Johannes Vuorinen
 
 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at 
 
 http://www.apache.org/licenses/LICENSE-2.0 
 
 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 */

#include "OpenGLES11Context.h"
#include "OpenGLESUtil.h"
#include "OpenGLES11Implementation.h"
#include <OpenGLES/ES1/gl.h>
#include <OpenGLES/ES1/glext.h>

using namespace OpenGLES::OpenGLES1;

OpenGLES11Context::OpenGLES11Context() : OpenGLESContext(1, new OpenGLES11Implementation())
{
	implementation->init();
}

OpenGLES11Context::~OpenGLES11Context() 
{
	
}

void OpenGLES11Context::glActiveTexture (GLenum texture) 
{
	::glActiveTexture(texture);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glAlphaFunc (GLenum func, GLclampf ref)
{
	::glAlphaFunc(func, ref);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glAlphaFuncx (GLenum func, GLclampx ref)
{
	::glAlphaFuncx(func, ref);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glBindTexture (GLenum target, GLuint texture)
{
	::glBindTexture(target, texture);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glBlendFunc (GLenum sfactor, GLenum dfactor)
{
	::glBlendFunc(sfactor, dfactor);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glClear(GLbitfield mask)
{
	::glClear(mask);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glClearColor (GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha)
{
	::glClearColor(red, green, blue, alpha);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glClearColorx (GLclampx red, GLclampx green, GLclampx blue, GLclampx alpha)
{
	::glClearColorx(red, green, blue, alpha);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glClearDepthf (GLclampf depth)
{
	::glClearDepthf(depth);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glClearDepthx (GLclampx depth) 
{
	::glClearDepthx(depth);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glClearStencil (GLint s)
{
	::glClearStencil(s);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glClientActiveTexture (GLenum texture)
{
	::glClientActiveTexture(texture);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glColor4f (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
	::glColor4f(red, green, blue, alpha);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glColor4x (GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha)
{
	::glColor4x(red, green, blue, alpha);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glColorMask (GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha)
{
	::glColorMask(red, green, blue, alpha);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glColorPointer (GLint size, GLenum type, GLsizei stride, const GLvoid *pointer)
{
	::glColorPointer(size, type, stride, pointer);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glCompressedTexImage2D (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid *data)
{
	::glCompressedTexImage2D(target, level, internalformat, width, height, border, imageSize, data);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glCompressedTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid *data)
{
	::glCompressedTexSubImage2D(target, level, xoffset, yoffset, width, height, format, imageSize, data);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glCopyTexImage2D (GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border)
{
	::glCopyTexImage2D(target, level, internalformat, x, y, width, height, border);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glCopyTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
	::glCopyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glCullFace (GLenum mode)
{
	::glCullFace(mode);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glDeleteTextures (GLsizei n, const GLuint *textures)
{
	::glDeleteTextures(n, textures);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glDepthFunc (GLenum func)
{
	::glDepthFunc(func);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glDepthMask (GLboolean flag)
{
	::glDepthMask(flag);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glDepthRangef (GLclampf zNear, GLclampf zFar)
{
	::glDepthRangef(zNear, zFar);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glDepthRangex (GLclampx zNear, GLclampx zFar)
{
	::glDepthRangex(zNear, zFar);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glDisable (GLenum cap)
{
	::glDisable(cap);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glDisableClientState (GLenum array)
{
	::glDisableClientState(array);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glDrawArrays(GLenum mode, GLint first, GLsizei count)
{
	::glDrawArrays(mode, first, count);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glDrawElements (GLenum mode, GLsizei count, GLenum type, const GLvoid *indices)
{
	::glDrawElements(mode, count, type, indices);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glEnable (GLenum cap)
{
	::glEnable(cap);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glEnableClientState (GLenum array)
{
	::glEnableClientState(array);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glFinish()
{
	::glFinish();
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glFlush()
{
	::glFlush();
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glFogf(GLenum pname, GLfloat param)
{
	::glFogf(pname, param);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glFogfv (GLenum pname, const GLfloat *params)
{
	::glFogfv(pname, params);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glFogx (GLenum pname, GLfixed param)
{
	::glFogx(pname, param);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glFogxv (GLenum pname, const GLfixed *params)
{
	::glFogxv(pname, params);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glFrontFace (GLenum mode)
{
	::glFrontFace(mode);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glFrustumf (GLfloat left, GLfloat right, GLfloat bottom, GLfloat top, GLfloat zNear, GLfloat zFar)
{
	::glFrustumf(left, right, bottom, top, zNear, zFar);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glFrustumx (GLfixed left, GLfixed right, GLfixed bottom, GLfixed top, GLfixed zNear, GLfixed zFar)
{
	::glFrustumx(left, right, bottom, top, zNear, zFar);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glGenTextures (GLsizei n, GLuint *textures)
{
	::glGenTextures(n, textures);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

GLenum OpenGLES11Context::glGetError(void)
{
	return ::glGetError();
}

void OpenGLES11Context::glGetIntegerv (GLenum pname, GLint *params)
{
	::glGetIntegerv(pname, params);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

const GLubyte *OpenGLES11Context::glGetString (GLenum name)
{
	return ::glGetString(name);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glHint (GLenum target, GLenum mode)
{
	switch (target) {
		case GL_LIGHTING_HINT:
			LOG_DEBUG_MESSAGE(__FILE__, __LINE__, "WARNING: No effect in OpenGL ES 1.x");
			break;
		default:
			::glHint(target, mode);
			break;
	}
	
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glLightModelf (GLenum pname, GLfloat param)
{
	switch (pname) {
		case GL_LIGHT_MODEL_LOCAL_VIEWER:
			LOG_DEBUG_MESSAGE(__FILE__, __LINE__, "WARNING: No effect in OpenGL ES 1.x");
			break;
		default:
			::glLightModelf(pname, param);
	}
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glLightModelfv (GLenum pname, const GLfloat *params)
{
	::glLightModelfv(pname, params);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}	

void OpenGLES11Context::glLightModelx (GLenum pname, GLfixed param)
{
	::glLightModelx(pname, param);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glLightModelxv (GLenum pname, const GLfixed *params)
{
	::glLightModelxv(pname, params);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glLightf (GLenum light, GLenum pname, GLfloat param)
{
	::glLightf(light, pname, param);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glLightfv (GLenum light, GLenum pname, const GLfloat *params)
{
	::glLightfv(light, pname, params);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glLightx (GLenum light, GLenum pname, GLfixed param)
{
	::glLightx(light, pname, param);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glLightxv (GLenum light, GLenum pname, const GLfixed *params)
{
	::glLightxv(light, pname, params);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glLineWidth (GLfloat width)
{
	::glLineWidth(width);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glLineWidthx (GLfixed width)
{
	::glLineWidthx(width);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glLoadIdentity()
{
	::glLoadIdentity();
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glLoadMatrixf (const GLfloat *m)
{
	::glLoadMatrixf(m);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glLoadMatrixx (const GLfixed *m)
{
	::glLoadMatrixx(m);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glLogicOp (GLenum opcode)
{
	::glLogicOp(opcode);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glMaterialf (GLenum face, GLenum pname, GLfloat param)
{
	::glMaterialf(face, pname, param);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glMaterialfv (GLenum face, GLenum pname, const GLfloat *params)
{
	::glMaterialfv(face, pname, params);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glMaterialx (GLenum face, GLenum pname, GLfixed param)
{
	::glMaterialx(face, pname, param);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glMaterialxv (GLenum face, GLenum pname, const GLfixed *params)
{
	::glMaterialxv(face, pname, params);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glMatrixMode (GLenum mode)
{
	::glMatrixMode(mode);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glMultMatrixf (const GLfloat *m)
{
	::glMultMatrixf(m);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glMultMatrixx (const GLfixed *m)
{
	::glMultMatrixx(m);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glMultiTexCoord4f (GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q)
{
	::glMultiTexCoord4f(target, s, t, r, q);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glMultiTexCoord4x (GLenum target, GLfixed s, GLfixed t, GLfixed r, GLfixed q)
{
	::glMultiTexCoord4x(target, s, t, r, q);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glNormal3f (GLfloat nx, GLfloat ny, GLfloat nz)
{
	::glNormal3f(nx, ny, nz);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glNormal3x (GLfixed nx, GLfixed ny, GLfixed nz)
{
	::glNormal3x(nx, ny, nz);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glNormalPointer (GLenum type, GLsizei stride, const GLvoid *pointer)
{
	::glNormalPointer(type, stride, pointer);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glOrthof (GLfloat left, GLfloat right, GLfloat bottom, GLfloat top, GLfloat zNear, GLfloat zFar)
{
	::glOrthof(left, right, bottom, top, zNear, zFar);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glOrthox (GLfixed left, GLfixed right, GLfixed bottom, GLfixed top, GLfixed zNear, GLfixed zFar)
{
	::glOrthox(left, right, bottom, top, zNear, zFar);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glPixelStorei (GLenum pname, GLint param)
{
	::glPixelStorei(pname, param);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glPointSize (GLfloat size)
{
	::glPointSize(size);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glPointSizex (GLfixed size)
{
	::glPointSizex(size);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glPolygonOffset (GLfloat factor, GLfloat units)
{
	::glPolygonOffset(factor, units);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glPolygonOffsetx (GLfixed factor, GLfixed units)
{
	::glPolygonOffsetx(factor, units);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glPopMatrix()
{
	::glPopMatrix();
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glPushMatrix()
{
	::glPushMatrix();
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glReadPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid *pixels)
{
	::glReadPixels(x, y, width, height, format, type, pixels);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glRotatef(GLfloat angle, GLfloat x, GLfloat y, GLfloat z)
{
	::glRotatef(angle, x, y, z);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glRotatex(GLfixed angle, GLfixed x, GLfixed y, GLfixed z)
{
	::glRotatex(angle, x, y, z);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glSampleCoverage (GLclampf value, GLboolean invert)
{
	::glSampleCoverage(value, invert);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glSampleCoveragex (GLclampx value, GLboolean invert)
{
	::glSampleCoveragex(value, invert);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glScalef (GLfloat x, GLfloat y, GLfloat z)
{
	::glScalef(x, y, z);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glScalex (GLfixed x, GLfixed y, GLfixed z)
{
	::glScalex(x, y, z);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glScissor (GLint x, GLint y, GLsizei width, GLsizei height)
{
	::glScissor(x, y, width, height);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glShadeModel (GLenum mode)
{
	::glShadeModel(mode);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glStencilFunc (GLenum func, GLint ref, GLuint mask)
{
	::glStencilFunc(func, ref, mask);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glStencilMask (GLuint mask)
{
	::glStencilMask(mask);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glStencilOp (GLenum fail, GLenum zfail, GLenum zpass)
{
	::glStencilOp(fail, zfail, zpass);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glTexCoordPointer (GLint size, GLenum type, GLsizei stride, const GLvoid *pointer)
{
	::glTexCoordPointer(size, type, stride, pointer);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glTexEnvf (GLenum target, GLenum pname, GLfloat param)
{
	switch (pname) {
		case GL_BLUR_AMOUNT:
			LOG_DEBUG_MESSAGE(__FILE__, __LINE__, "WARNING: No effect in OpenGL ES 1.x");
			break;
		default:
			::glTexEnvf(target, pname, param);
			break;
	}
	
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glTexEnvfv (GLenum target, GLenum pname, const GLfloat *params)
{
	::glTexEnvfv(target, pname, params);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glTexEnvx (GLenum target, GLenum pname, GLfixed param)
{
	::glTexEnvx(target, pname, param);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glTexEnvxv (GLenum target, GLenum pname, const GLfixed *params)
{
	::glTexEnvxv(target, pname, params);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glTexImage2D (GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid *pixels)
{
	::glTexImage2D(target, level, internalformat, width, height, border, format, type, pixels);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glTexParameterf (GLenum target, GLenum pname, GLfloat param)
{
	::glTexParameterf(target, pname, param);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glTexParameterx (GLenum target, GLenum pname, GLfixed param)
{
	::glTexParameterx(target, pname, param);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *pixels)
{
	::glTexSubImage2D(target, level, xoffset, yoffset, width, height, format, type, pixels);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glTranslatef(GLfloat x, GLfloat y, GLfloat z)
{
	::glTranslatef(x, y, z);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glTranslatex(GLfixed x, GLfixed y, GLfixed z)
{
	::glTranslatex(x, y, z);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glVertexPointer(GLint size, GLenum type, GLsizei stride, const GLvoid *pointer)
{
	::glVertexPointer(size, type, stride, pointer);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glViewport(GLint x, GLint y, GLsizei width, GLsizei height)
{
	::glViewport(x, y, width, height);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}


// OpenGL ES 1.1 functions
void OpenGLES11Context::glBindBuffer (GLenum target, GLuint buffer)
{
	::glBindBuffer(target, buffer);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glBufferData (GLenum target, GLsizeiptr size, const GLvoid *data, GLenum usage)
{
	::glBufferData(target, size, data, usage);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glBufferSubData (GLenum target, GLintptr offset, GLsizeiptr size, const GLvoid *data)
{
	::glBufferSubData(target, offset, size, data);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glClipPlanef(GLenum plane, const GLfloat *equation)
{
	::glClipPlanef(plane, equation);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glClipPlanex (GLenum plane, const GLfixed *equation)
{
	::glClipPlanex(plane, equation);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glColor4ub(GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha)
{
	::glColor4ub(red, green, blue, alpha);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glDeleteBuffers (GLsizei n, const GLuint *buffers)
{
	::glDeleteBuffers(n, buffers);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glDrawTexsOES (GLshort x, GLshort y, GLshort z, GLshort width, GLshort height)
{
	::glDrawTexsOES(x, y, z, width, height);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glDrawTexiOES (GLint x, GLint y, GLint z, GLint width, GLint height)
{
	::glDrawTexiOES(x, y, z, width, height);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glDrawTexxOES (GLfixed x, GLfixed y, GLfixed z, GLfixed width, GLfixed height)
{
	::glDrawTexxOES(x, y, z, width, height);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glDrawTexsvOES (const GLshort *coords)
{
	::glDrawTexsvOES(coords);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glDrawTexivOES (const GLint *coords)
{
	::glDrawTexivOES(coords);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glDrawTexxvOES (const GLfixed *coords) 
{
	::glDrawTexxvOES(coords);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glDrawTexfOES (GLfloat x, GLfloat y, GLfloat z, GLfloat width, GLfloat height)
{
	::glDrawTexfOES(x, y, z, width, height);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glDrawTexfvOES (const GLfloat *coords)
{
	::glDrawTexfvOES(coords);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glGenBuffers (GLsizei n, GLuint *buffers)
{
	::glGenBuffers(n, buffers);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glGetClipPlanef(GLenum pname, GLfloat eqn[4])
{
	::glGetClipPlanef(pname, eqn);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glGetFloatv(GLenum pname, GLfloat *params)
{
	::glGetFloatv(pname, params);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glGetLightfv (GLenum light, GLenum pname, GLfloat *params)
{
	::glGetLightfv(light, pname, params);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glGetLightxv (GLenum light, GLenum pname, GLfixed *params)
{
	::glGetLightxv(light, pname, params);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glGetMaterialfv (GLenum face, GLenum pname, GLfloat *params)
{
	::glGetMaterialfv(face, pname, params);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glGetMaterialxv (GLenum face, GLenum pname, GLfixed *params)
{
	::glGetMaterialxv(face, pname, params);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glGetTexEnvfv (GLenum env, GLenum pname, GLfloat *params)
{
	::glGetTexEnvfv(env, pname, params);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glGetTexEnviv (GLenum env, GLenum pname, GLint *params)
{
	::glGetTexEnviv(env, pname, params);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glGetTexEnvxv (GLenum env, GLenum pname, GLfixed *params)
{
	::glGetTexEnvxv(env, pname, params);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glGetTexParameterfv (GLenum target, GLenum pname, GLfloat *params)
{
	::glGetTexParameterfv(target, pname, params);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glGetTexParameteriv (GLenum target, GLenum pname, GLint *params)
{
	::glTexParameteriv(target, pname, params);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glGetTexParameterxv (GLenum target, GLenum pname, GLfixed *params)
{
	::glTexParameterxv(target, pname, params);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glGetBooleanv (GLenum pname, GLboolean *params)
{
	::glGetBooleanv(pname, params);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glGetBufferParameteriv (GLenum target, GLenum pname, GLint *params)
{
	::glGetBufferParameteriv(target, pname, params);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glGetFixedv (GLenum pname, GLfixed *params)
{
	::glGetFixedv(pname, params);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glGetPointerv (GLenum pname, void **params)
{
	::glGetPointerv(pname, params);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

GLboolean OpenGLES11Context::glIsBuffer (GLuint buffer)
{
	return ::glIsBuffer(buffer);
}

GLboolean OpenGLES11Context::glIsEnabled (GLenum cap)
{
	return ::glIsEnabled(cap);
}

GLboolean OpenGLES11Context::glIsTexture (GLuint texture)
{
	return ::glIsTexture(texture);
}

void OpenGLES11Context::glPointParameterf (GLenum pname, GLfloat param)
{
	::glPointParameterf(pname, param);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glPointParameterfv (GLenum pname, const GLfloat *params)
{
	::glPointParameterfv(pname, params);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glPointParameterx (GLenum pname, GLfixed param)
{
	::glPointParameterx(pname, param);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glPointParameterxv (GLenum pname, const GLfixed *params)
{
	::glPointParameterxv(pname, params);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glTexEnvi (GLenum target, GLenum pname, GLint param)
{
	switch (pname) {
		case GL_TEXTURE_ENV_MODE:
			switch (param) {
				case GL_BLUR:
					LOG_DEBUG_MESSAGE(__FILE__, __LINE__, "WARNING: No effect in OpenGL ES 1.x");
					break;
				default:
					::glTexEnvi(target, pname, param);
					break;
			}
			break;
		default:
			::glTexEnvi(target, pname, param);
			break;
	};
	
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glTexEnviv (GLenum target, GLenum pname, const GLint *params)
{
	::glTexEnviv(target, pname, params);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glTexParameteri (GLenum target, GLenum pname, GLint param)
{
	::glTexParameteri(target, pname, param);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glTexParameteriv (GLenum target, GLenum pname, const GLint *params)
{
	::glTexParameteriv(target, pname, params);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glCurrentPaletteMatrixOES (GLuint matrixpaletteindex)
{
	::glCurrentPaletteMatrixOES(matrixpaletteindex);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glLoadPaletteFromModelViewMatrixOES (void)
{
	::glLoadPaletteFromModelViewMatrixOES();
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glMatrixIndexPointerOES (GLint size, GLenum type, GLsizei stride, const GLvoid *pointer)
{
	::glMatrixIndexPointerOES(size, type, stride, pointer);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glWeightPointerOES (GLint size, GLenum type, GLsizei stride, const GLvoid *pointer)
{
	::glWeightPointerOES(size, type, stride, pointer);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glPointSizePointerOES (GLenum type, GLsizei stride, const GLvoid *pointer)
{
	::glPointSizePointerOES(type, stride, pointer);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glAttachShader (GLuint program, GLuint shader)
{
	LOG_DEBUG_MESSAGE(__FILE__, __LINE__, "WARNING: No effect in OpenGL ES 1.x");
}

void OpenGLES11Context::glBindAttribLocation (GLuint program, GLuint index, const GLchar* name)
{
	LOG_DEBUG_MESSAGE(__FILE__, __LINE__, "WARNING: No effect in OpenGL ES 1.x");
}

void OpenGLES11Context::glBindFramebuffer (GLenum target, GLuint framebuffer)
{
	::glBindFramebufferOES(target, framebuffer);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glBindRenderbuffer (GLenum target, GLuint renderbuffer)
{
	::glBindRenderbufferOES(target, renderbuffer);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glBlendColor (GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha)
{
	LOG_DEBUG_MESSAGE(__FILE__, __LINE__, "WARNING: No effect in OpenGL ES 1.x");
}

void OpenGLES11Context::glBlendEquation ( GLenum mode )
{
#if GL_OES_blend_subtract
	::glBlendEquationOES(mode);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
#else
	Util::logMessage(__FILE__, __LINE__, "WARNING: No effect in OpenGL ES 1.x");
#endif
}

void OpenGLES11Context::glBlendEquationSeparate (GLenum modeRGB, GLenum modeAlpha)
{
#ifdef GL_OES_blend_equation_separate
	::glBlendEquationSeparateOES(modeRGB, modeAlpha);
#else
	LOG_DEBUG_MESSAGE(__FILE__, __LINE__, "WARNING: No effect in OpenGL ES 1.x");
#endif
}

void OpenGLES11Context::glBlendFuncSeparate (GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha)
{
#ifdef GL_OES_blend_func_separate
	::glBlendFuncSeparateOES(srcRGB, dstRGB, srcAlpha, dstAlpha);
#else
	LOG_DEBUG_MESSAGE(__FILE__, __LINE__, "WARNING: No effect in OpenGL ES 1.x");
#endif
}

GLenum OpenGLES11Context::glCheckFramebufferStatus (GLenum target)
{
	return ::glCheckFramebufferStatusOES(target);
}

void OpenGLES11Context::glCompileShader (GLuint shader)
{
	LOG_DEBUG_MESSAGE(__FILE__, __LINE__, "WARNING: No effect in OpenGL ES 1.x");
}

GLuint OpenGLES11Context::glCreateProgram (void)
{
	LOG_DEBUG_MESSAGE(__FILE__, __LINE__, "WARNING: No effect in OpenGL ES 1.x");
	return 0;
}

GLuint OpenGLES11Context::glCreateShader (GLenum type)
{
	LOG_DEBUG_MESSAGE(__FILE__, __LINE__, "WARNING: No effect in OpenGL ES 1.x");
	return 0;
}

void OpenGLES11Context::glDeleteFramebuffers (GLsizei n, const GLuint* framebuffers)
{
	::glDeleteFramebuffersOES(n, framebuffers);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glDeleteProgram (GLuint program)
{
	LOG_DEBUG_MESSAGE(__FILE__, __LINE__, "WARNING: No effect in OpenGL ES 1.x");
}

void OpenGLES11Context::glDeleteRenderbuffers (GLsizei n, const GLuint* renderbuffers)
{
	::glDeleteRenderbuffersOES(n, renderbuffers);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glDeleteShader (GLuint shader)
{
	LOG_DEBUG_MESSAGE(__FILE__, __LINE__, "WARNING: No effect in OpenGL ES 1.x");
}

void OpenGLES11Context::glDetachShader (GLuint program, GLuint shader)
{
	LOG_DEBUG_MESSAGE(__FILE__, __LINE__, "WARNING: No effect in OpenGL ES 1.x");
}

void OpenGLES11Context::glDisableVertexAttribArray (GLuint index)
{
	LOG_DEBUG_MESSAGE(__FILE__, __LINE__, "WARNING: No effect in OpenGL ES 1.x");
}

void OpenGLES11Context::glEnableVertexAttribArray (GLuint index)
{
	LOG_DEBUG_MESSAGE(__FILE__, __LINE__, "WARNING: No effect in OpenGL ES 1.x");
}

void OpenGLES11Context::glFramebufferRenderbuffer (GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer)
{
	::glFramebufferRenderbufferOES(target, attachment, renderbuffertarget, renderbuffer);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glFramebufferTexture2D (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
	::glFramebufferTexture2DOES(target, attachment, textarget, texture, level);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glGenerateMipmap (GLenum target)
{
#if GL_OES_framebuffer_object
	::glGenerateMipmapOES(target);
#else
	LOG_DEBUG_MESSAGE(__FILE__, __LINE__, "WARNING: No effect in OpenGL ES 1.x");
#endif
}

void OpenGLES11Context::glGenFramebuffers (GLsizei n, GLuint* framebuffers)
{
	::glGenFramebuffersOES(n, framebuffers);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glGenRenderbuffers (GLsizei n, GLuint* renderbuffers)
{
	::glGenRenderbuffersOES(n, renderbuffers);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glGetActiveAttrib (GLuint program, GLuint index, GLsizei bufsize, GLsizei* length, GLint* size, GLenum* type, GLchar* name)
{
	LOG_DEBUG_MESSAGE(__FILE__, __LINE__, "WARNING: No effect in OpenGL ES 1.x");
}

void OpenGLES11Context::glGetActiveUniform (GLuint program, GLuint index, GLsizei bufsize, GLsizei* length, GLint* size, GLenum* type, GLchar* name)
{
	LOG_DEBUG_MESSAGE(__FILE__, __LINE__, "WARNING: No effect in OpenGL ES 1.x");
}

void OpenGLES11Context::glGetAttachedShaders (GLuint program, GLsizei maxcount, GLsizei* count, GLuint* shaders)
{
	LOG_DEBUG_MESSAGE(__FILE__, __LINE__, "WARNING: No effect in OpenGL ES 1.x");
}

int OpenGLES11Context::glGetAttribLocation (GLuint program, const GLchar* name)
{
	LOG_DEBUG_MESSAGE(__FILE__, __LINE__, "WARNING: No effect in OpenGL ES 1.x");
	return 0;
}

void OpenGLES11Context::glGetFramebufferAttachmentParameteriv (GLenum target, GLenum attachment, GLenum pname, GLint* params)
{
	::glGetFramebufferAttachmentParameterivOES(target, attachment, pname, params);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glGetProgramiv (GLuint program, GLenum pname, GLint* params)
{
	LOG_DEBUG_MESSAGE(__FILE__, __LINE__, "WARNING: No effect in OpenGL ES 1.x");
}

void OpenGLES11Context::glGetProgramInfoLog (GLuint program, GLsizei bufsize, GLsizei* length, GLchar* infolog)
{
	LOG_DEBUG_MESSAGE(__FILE__, __LINE__, "WARNING: No effect in OpenGL ES 1.x");
}

void OpenGLES11Context::glGetRenderbufferParameteriv (GLenum target, GLenum pname, GLint* params)
{
	::glGetRenderbufferParameterivOES(target, pname, params);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glGetShaderiv (GLuint shader, GLenum pname, GLint* params)
{
	LOG_DEBUG_MESSAGE(__FILE__, __LINE__, "WARNING: No effect in OpenGL ES 1.x");
}

void OpenGLES11Context::glGetShaderInfoLog (GLuint shader, GLsizei bufsize, GLsizei* length, GLchar* infolog)
{
	LOG_DEBUG_MESSAGE(__FILE__, __LINE__, "WARNING: No effect in OpenGL ES 1.x");
}

void OpenGLES11Context::glGetShaderPrecisionFormat (GLenum shadertype, GLenum precisiontype, GLint* range, GLint* precision)
{
	LOG_DEBUG_MESSAGE(__FILE__, __LINE__, "WARNING: No effect in OpenGL ES 1.x");
}

void OpenGLES11Context::glGetShaderSource (GLuint shader, GLsizei bufsize, GLsizei* length, GLchar* source)
{
	LOG_DEBUG_MESSAGE(__FILE__, __LINE__, "WARNING: No effect in OpenGL ES 1.x");
}

void OpenGLES11Context::glGetUniformfv (GLuint program, GLint location, GLfloat* params)
{
	LOG_DEBUG_MESSAGE(__FILE__, __LINE__, "WARNING: No effect in OpenGL ES 1.x");
}

void OpenGLES11Context::glGetUniformiv (GLuint program, GLint location, GLint* params)
{
	LOG_DEBUG_MESSAGE(__FILE__, __LINE__, "WARNING: No effect in OpenGL ES 1.x");
}

int OpenGLES11Context::glGetUniformLocation (GLuint program, const GLchar* name)
{
	LOG_DEBUG_MESSAGE(__FILE__, __LINE__, "WARNING: No effect in OpenGL ES 1.x");
	return 0;
}

void OpenGLES11Context::glGetVertexAttribfv (GLuint index, GLenum pname, GLfloat* params)
{
	LOG_DEBUG_MESSAGE(__FILE__, __LINE__, "WARNING: No effect in OpenGL ES 1.x");
}

void OpenGLES11Context::glGetVertexAttribiv (GLuint index, GLenum pname, GLint* params)
{
	LOG_DEBUG_MESSAGE(__FILE__, __LINE__, "WARNING: No effect in OpenGL ES 1.x");
}

void OpenGLES11Context::glGetVertexAttribPointerv (GLuint index, GLenum pname, GLvoid** pointer)
{
	LOG_DEBUG_MESSAGE(__FILE__, __LINE__, "WARNING: No effect in OpenGL ES 1.x");
}

GLboolean OpenGLES11Context::glIsFramebuffer (GLuint framebuffer)
{
	return ::glIsFramebufferOES(framebuffer);
}

GLboolean OpenGLES11Context::glIsProgram (GLuint program)
{
	LOG_DEBUG_MESSAGE(__FILE__, __LINE__, "WARNING: No effect in OpenGL ES 1.x");
	return 0;
}

GLboolean OpenGLES11Context::glIsRenderbuffer (GLuint renderbuffer)
{
	return ::glIsRenderbufferOES(renderbuffer);
}

GLboolean OpenGLES11Context::glIsShader (GLuint shader)
{
	LOG_DEBUG_MESSAGE(__FILE__, __LINE__, "WARNING: No effect in OpenGL ES 1.x");
	return 0;
}

void OpenGLES11Context::glLinkProgram (GLuint program)
{
	LOG_DEBUG_MESSAGE(__FILE__, __LINE__, "WARNING: No effect in OpenGL ES 1.x");
}

void OpenGLES11Context::glReleaseShaderCompiler (void)
{
	LOG_DEBUG_MESSAGE(__FILE__, __LINE__, "WARNING: No effect in OpenGL ES 1.x");
}

void OpenGLES11Context::glRenderbufferStorage (GLenum target, GLenum internalformat, GLsizei width, GLsizei height)
{
	::glRenderbufferStorageOES(target, internalformat, width, height);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

void OpenGLES11Context::glShaderBinary (GLsizei n, const GLuint* shaders, GLenum binaryformat, const GLvoid* binary, GLsizei length)
{
	LOG_DEBUG_MESSAGE(__FILE__, __LINE__, "WARNING: No effect in OpenGL ES 1.x");
}

void OpenGLES11Context::glShaderSource (GLuint shader, GLsizei count, const GLchar** string, const GLint* length)
{
	LOG_DEBUG_MESSAGE(__FILE__, __LINE__, "WARNING: No effect in OpenGL ES 1.x");
}

void OpenGLES11Context::glStencilFuncSeparate (GLenum face, GLenum func, GLint ref, GLuint mask)
{
	LOG_DEBUG_MESSAGE(__FILE__, __LINE__, "WARNING: No effect in OpenGL ES 1.x");
}

void OpenGLES11Context::glStencilMaskSeparate (GLenum face, GLuint mask)
{
	LOG_DEBUG_MESSAGE(__FILE__, __LINE__, "WARNING: No effect in OpenGL ES 1.x");
}

void OpenGLES11Context::glStencilOpSeparate (GLenum face, GLenum fail, GLenum zfail, GLenum zpass)
{
	LOG_DEBUG_MESSAGE(__FILE__, __LINE__, "WARNING: No effect in OpenGL ES 1.x");
}

void OpenGLES11Context::glTexParameterfv (GLenum target, GLenum pname, const GLfloat* params)
{
	LOG_DEBUG_MESSAGE(__FILE__, __LINE__, "WARNING: No effect in OpenGL ES 1.x");
}

void OpenGLES11Context::glUniform1f (GLint location, GLfloat x)
{
	LOG_DEBUG_MESSAGE(__FILE__, __LINE__, "WARNING: No effect in OpenGL ES 1.x");
}

void OpenGLES11Context::glUniform1fv (GLint location, GLsizei count, const GLfloat* v)
{
	LOG_DEBUG_MESSAGE(__FILE__, __LINE__, "WARNING: No effect in OpenGL ES 1.x");
}

void OpenGLES11Context::glUniform1i (GLint location, GLint x)
{
	LOG_DEBUG_MESSAGE(__FILE__, __LINE__, "WARNING: No effect in OpenGL ES 1.x");
}

void OpenGLES11Context::glUniform1iv (GLint location, GLsizei count, const GLint* v)
{
	LOG_DEBUG_MESSAGE(__FILE__, __LINE__, "WARNING: No effect in OpenGL ES 1.x");
}

void OpenGLES11Context::glUniform2f (GLint location, GLfloat x, GLfloat y)
{
	LOG_DEBUG_MESSAGE(__FILE__, __LINE__, "WARNING: No effect in OpenGL ES 1.x");
}

void OpenGLES11Context::glUniform2fv (GLint location, GLsizei count, const GLfloat* v)
{
	LOG_DEBUG_MESSAGE(__FILE__, __LINE__, "WARNING: No effect in OpenGL ES 1.x");
}

void OpenGLES11Context::glUniform2i (GLint location, GLint x, GLint y)
{
	LOG_DEBUG_MESSAGE(__FILE__, __LINE__, "WARNING: No effect in OpenGL ES 1.x");
}

void OpenGLES11Context::glUniform2iv (GLint location, GLsizei count, const GLint* v)
{
	LOG_DEBUG_MESSAGE(__FILE__, __LINE__, "WARNING: No effect in OpenGL ES 1.x");
}

void OpenGLES11Context::glUniform3f (GLint location, GLfloat x, GLfloat y, GLfloat z)
{
	LOG_DEBUG_MESSAGE(__FILE__, __LINE__, "WARNING: No effect in OpenGL ES 1.x");
}

void OpenGLES11Context::glUniform3fv (GLint location, GLsizei count, const GLfloat* v)
{
	LOG_DEBUG_MESSAGE(__FILE__, __LINE__, "WARNING: No effect in OpenGL ES 1.x");
}

void OpenGLES11Context::glUniform3i (GLint location, GLint x, GLint y, GLint z)
{
	LOG_DEBUG_MESSAGE(__FILE__, __LINE__, "WARNING: No effect in OpenGL ES 1.x");
}

void OpenGLES11Context::glUniform3iv (GLint location, GLsizei count, const GLint* v)
{
	LOG_DEBUG_MESSAGE(__FILE__, __LINE__, "WARNING: No effect in OpenGL ES 1.x");
}

void OpenGLES11Context::glUniform4f (GLint location, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
	LOG_DEBUG_MESSAGE(__FILE__, __LINE__, "WARNING: No effect in OpenGL ES 1.x");
}

void OpenGLES11Context::glUniform4fv (GLint location, GLsizei count, const GLfloat* v)
{
	LOG_DEBUG_MESSAGE(__FILE__, __LINE__, "WARNING: No effect in OpenGL ES 1.x");
}

void OpenGLES11Context::glUniform4i (GLint location, GLint x, GLint y, GLint z, GLint w)
{
	LOG_DEBUG_MESSAGE(__FILE__, __LINE__, "WARNING: No effect in OpenGL ES 1.x");
}

void OpenGLES11Context::glUniform4iv (GLint location, GLsizei count, const GLint* v)
{
	LOG_DEBUG_MESSAGE(__FILE__, __LINE__, "WARNING: No effect in OpenGL ES 1.x");
}

void OpenGLES11Context::glUniformMatrix2fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat* value)
{
	LOG_DEBUG_MESSAGE(__FILE__, __LINE__, "WARNING: No effect in OpenGL ES 1.x");
}

void OpenGLES11Context::glUniformMatrix3fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat* value)
{
	LOG_DEBUG_MESSAGE(__FILE__, __LINE__, "WARNING: No effect in OpenGL ES 1.x");
}

void OpenGLES11Context::glUniformMatrix4fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat* value)
{
	LOG_DEBUG_MESSAGE(__FILE__, __LINE__, "WARNING: No effect in OpenGL ES 1.x");
}

void OpenGLES11Context::glUseProgram (GLuint program)
{
	LOG_DEBUG_MESSAGE(__FILE__, __LINE__, "WARNING: No effect in OpenGL ES 1.x");
}

void OpenGLES11Context::glValidateProgram (GLuint program)
{
	LOG_DEBUG_MESSAGE(__FILE__, __LINE__, "WARNING: No effect in OpenGL ES 1.x");
}

void OpenGLES11Context::glVertexAttrib1f (GLuint indx, GLfloat x)
{
	LOG_DEBUG_MESSAGE(__FILE__, __LINE__, "WARNING: No effect in OpenGL ES 1.x");
}

void OpenGLES11Context::glVertexAttrib1fv (GLuint indx, const GLfloat* values)
{
	LOG_DEBUG_MESSAGE(__FILE__, __LINE__, "WARNING: No effect in OpenGL ES 1.x");
}

void OpenGLES11Context::glVertexAttrib2f (GLuint indx, GLfloat x, GLfloat y)
{
	LOG_DEBUG_MESSAGE(__FILE__, __LINE__, "WARNING: No effect in OpenGL ES 1.x");
}

void OpenGLES11Context::glVertexAttrib2fv (GLuint indx, const GLfloat* values)
{
	LOG_DEBUG_MESSAGE(__FILE__, __LINE__, "WARNING: No effect in OpenGL ES 1.x");
}

void OpenGLES11Context::glVertexAttrib3f (GLuint indx, GLfloat x, GLfloat y, GLfloat z)
{
	LOG_DEBUG_MESSAGE(__FILE__, __LINE__, "WARNING: No effect in OpenGL ES 1.x");
}

void OpenGLES11Context::glVertexAttrib3fv (GLuint indx, const GLfloat* values)
{
	LOG_DEBUG_MESSAGE(__FILE__, __LINE__, "WARNING: No effect in OpenGL ES 1.x");
}

void OpenGLES11Context::glVertexAttrib4f (GLuint indx, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
	LOG_DEBUG_MESSAGE(__FILE__, __LINE__, "WARNING: No effect in OpenGL ES 1.x");
}

void OpenGLES11Context::glVertexAttrib4fv (GLuint indx, const GLfloat* values)
{
	LOG_DEBUG_MESSAGE(__FILE__, __LINE__, "WARNING: No effect in OpenGL ES 1.x");
}

void OpenGLES11Context::glVertexAttribPointer (GLuint indx, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid* ptr)
{
	LOG_DEBUG_MESSAGE(__FILE__, __LINE__, "WARNING: No effect in OpenGL ES 1.x");
}


// OpenGL ES 1/2 Extensions
void OpenGLES11Context::glGetBufferPointervOES (GLenum target, GLenum pname, GLvoid **params)
{
	::glGetBufferPointervOES(target, pname, params);
	CHECK_GL_ERROR(glGetError(), __FILE__, __LINE__);
}

GLvoid * OpenGLES11Context::glMapBufferOES (GLenum target, GLenum access)
{
	return ::glMapBufferOES(target, access);
}

GLboolean OpenGLES11Context::glUnmapBufferOES (GLenum target)
{
	return ::glUnmapBufferOES(target);
}
