#include "cinder/app/AppBasic.h"
#include "cinder/gl/gl.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class HelloWorldBApp : public AppBasic {
  public:
	void setup();
	void mouseDown( MouseEvent event );	
	void update();
	void draw();
};

void HelloWorldBApp::setup()
{
}

void HelloWorldBApp::mouseDown( MouseEvent event )
{
}

void HelloWorldBApp::update()
{
}

void HelloWorldBApp::draw()
{
	// clear out the window with black
	gl::clear( Color( 2.0, 0, 0 ) ); 
}

CINDER_APP_BASIC( HelloWorldBApp, RendererGl )
