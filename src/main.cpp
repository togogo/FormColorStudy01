#include "ofMain.h"
#include "ofApp.h"

//========================================================================
int main( ){
	ofSetupOpenGL(800,800,OF_WINDOW);			// <-------- setup the GL context
    
    
//    float gravity = 0.0;
//    float mass = 3.0;//test value
//    float stiffness = 0.2;//test value
//    float damping = 0.8;//test value

	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
	ofRunApp(new ofApp());

}
