/** This is a proof of concept(POC) for a particle based weathering system
 * This POC will demonstrate that particles can be emitted from an emitter
 * towards an object and behave in certain ways, depending on the characteristics
 * of the object. Some particles will reflect, bounce(reflectance under gravity),
 * stick or slide.
 *
 * */

#include "OpenGLWindow.h"

#include <QtGui/QGuiApplication>
#include "NGLScene.h"

#include <iostream>
#include <cstdio>

#include "Emitter.h"
#include "Particle.h"

int main (int argc, char **argv)
{
  QGuiApplication app(argc, argv);
  // create an OpenGL format specifier
  QSurfaceFormat format;
  // set the number of samples for multisampling
  // will need to enable glEnable(GL_MULTISAMPLE); once we have a context
  format.setSamples(4);
  #if defined( DARWIN)
    // at present mac osx Mountain Lion only supports GL3.2
    // the new mavericks will have GL 4.x so can change
    format.setMajorVersion(3);
    format.setMinorVersion(2);
  #else
    // with luck we have the latest GL version so set to this
    format.setMajorVersion(4);
    format.setMinorVersion(3);
  #endif
  // now we are going to set to CoreProfile OpenGL so we can't use and old Immediate mode GL
  format.setProfile(QSurfaceFormat::CoreProfile);
  // now set the depth buffer to 24 bits
  format.setDepthBufferSize(24);
  // now we are going to create our scene window
  NGLScene window;
  // and set the OpenGL format
  window.setFormat(format);
  // we can now query the version to see if it worked
  std::cout<<"Profile is "<<format.majorVersion()<<" "<<format.minorVersion()<<"\n";
  // set the window size
  window.resize(1024, 720);
  // and finally show
  window.show();

  return app.exec();
}
