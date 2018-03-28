//
//  springPoint.cpp
//  form_color_study01
//
//  Created by Togo Kida

#include "SpringPoint.hpp"
#include "ofApp.h"

void SpringPoint::setup() {
    base.setup(0.0, ofGetScreenWidth() / 2, mass, gravity, stiffness, damping);
    extend.setup(0.0, ofGetScreenWidth() / 2, mass, gravity, stiffness, damping);
}

//*depricated
//void SpringPoint::update() {
//    base.update(ofGetMouseX(), ofGetMouseY());//this part is kinda redundant...
//    //base.update(pos.x, pos.y);
//    extend.update(base.x, base.y);
//}

void SpringPoint::update(ofVec2f _pos) {
    setPos(_pos);
    base.update(pos.x, pos.y);
    extend.update(base.x, base.y);
}

void SpringPoint::draw() {
    base.display(pos.x, pos.y);//probably you don't need to put ofVec2f pos here in the first place...
    extend.display(base.x, base.y);//probably you don't need to put ofVec2f pos here in the first place...
}

void SpringPoint::setPos(ofVec2f _pos){
    pos = _pos;
}
