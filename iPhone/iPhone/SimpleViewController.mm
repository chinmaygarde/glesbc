//
//  ViewController.m
//  iPhone
//
//  Created by Chinmay Garde on 1/12/12.
//  Copyright (c) 2012 Carnegie Mellon University. All rights reserved.
//

#import "SimpleViewController.h"
#import "GLESBC_Shims.h"
#import "GLESBC.h"

@interface SimpleViewController () {
  @private
  int degrees;
}
@property (strong, nonatomic) EAGLContext *context;

- (void)setupGL;
- (void)tearDownGL;

@end

@implementation SimpleViewController

@synthesize context = _context;

- (void)dealloc
{
  [super dealloc];
}

- (void)viewDidLoad
{
  [super viewDidLoad];
  
  self.context = [[[EAGLContext alloc] initWithAPI:kEAGLRenderingAPIOpenGLES2] autorelease];
  setupGLES2BC();
  
  degrees = 0;
  
  if (!self.context) {
    NSLog(@"Failed to create ES context");
  }
  
  GLKView *view = (GLKView *)self.view;
  view.context = self.context;
  view.drawableDepthFormat = GLKViewDrawableDepthFormat24;
  
  [self setupGL];
}

- (void)viewDidUnload
{    
  [super viewDidUnload];
  
  [self tearDownGL];
  
  if ([EAGLContext currentContext] == self.context) {
    [EAGLContext setCurrentContext:nil];
  }
  self.context = nil;
}

- (void)didReceiveMemoryWarning
{
  [super didReceiveMemoryWarning];
  // Release any cached data, images, etc. that aren't in use.
}

- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation
{
  // Return YES for supported orientations
  if ([[UIDevice currentDevice] userInterfaceIdiom] == UIUserInterfaceIdiomPhone) {
    return (interfaceOrientation != UIInterfaceOrientationPortraitUpsideDown);
  } else {
    return YES;
  }
}

- (void)setupGL
{
  [EAGLContext setCurrentContext:self.context];
  
  // TODO: Setup
}

- (void)tearDownGL
{
  [EAGLContext setCurrentContext:self.context];
  
  // TODO: Tear down
}

#pragma mark - GLKView and GLKViewController delegate methods

- (void)update
{
  degrees ++;
}

- (void)glkView:(GLKView *)view drawInRect:(CGRect)rect
{
  glClearColor(0.3f, 0.3f, 0.3f, 1.0f);
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

  glColor4f(1.0f, 0.0f, 0.0f, 1.0f);
  GLfloat vertices[] = {0.5,0,0, 0,0.5,0, -0.5,0,0};
  glEnableClientState(GL_VERTEX_ARRAY);
  
  glPushMatrix();
  glRotatef(degrees, 0.0f, 0.0f, 1.0f);
  glTranslatef(0, 0.5, 0);
  glVertexPointer(3, GL_FLOAT, 0, vertices);
  glDrawArrays(GL_TRIANGLES, 0, 3);
  glPopMatrix();
  
  glPushMatrix();
  glRotatef(-degrees, 0.0f, 0.0f, 1.0f);
  glTranslatef(0, -0.5, 0);
  glVertexPointer(3, GL_FLOAT, 0, vertices);
  glDrawArrays(GL_TRIANGLES, 0, 3);
  glPopMatrix();
  
  glDisableClientState(GL_VERTEX_ARRAY);
}

@end
