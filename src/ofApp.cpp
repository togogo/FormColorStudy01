#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    //test.setup(0.0, ofGetScreenWidth() / 2, mass, gravity, stiffness, damping);
    //testSpringPoint.setup();
    testSpringCircle.setup(ofVec2f(mouseX, mouseY), rTestSpringCircle, numTestSpringCircle);
}

//--------------------------------------------------------------
void ofApp::update(){
    //test.update(mouseX, mouseY);
    //testSpringPoint.update(ofVec2f(ofGetMouseX(), ofGetMouseY()));
    testSpringCircle.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    //update();
    //test.display(mouseX, mouseY);
    //testSpringCircle.update();
    //testSpringPoint.draw();
    
    testSpringCircle.draw();
    
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
