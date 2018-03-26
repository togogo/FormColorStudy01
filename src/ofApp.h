#pragma once

#include "ofMain.h"
#include "SpringPoint.hpp"
#include "Spring2D.hpp"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    Spring2D test;//test spring
    float gravity = 10.0;//test value
    float mass = 3.0;//test value
    float stiffness = 0.2;//test value
    float damping = 0.8;//test value
    
		
};
