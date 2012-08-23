#include "cinder/app/AppBasic.h"
#include "cinder/gl/gl.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class firstTryApp : public AppBasic {
  public:
	void setup();
	void mouseDown( MouseEvent event );	
	void update();
	void draw();
};

void firstTryApp::setup()
{
}

void firstTryApp::mouseDown( MouseEvent event )
{
}

void firstTryApp::update()
{
}

void firstTryApp::draw()
{
	// clear out the window with black
	gl::clear( Color( 1.0, 0, 0 ) ); 
}

CINDER_APP_BASIC( firstTryApp, RendererGl )
