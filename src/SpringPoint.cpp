//
//  springPoint.cpp
//  form_color_study01
//
//  Created by Togo Kida on 2018/03/24.
//

#include "SpringPoint.hpp"
#include "ofApp.h"

void SpringPoint::setup() {
    base.setup(0.0, ofGetScreenWidth() / 2, mass, gravity, stiffness, damping);
    extend.setup(0.0, ofGetScreenWidth() / 2, mass, gravity, stiffness, damping);
}

void SpringPoint::update() {
    base.update(ofGetMouseX(), ofGetMouseY());
    extend.update(base.x, base.y);
}

void SpringPoint::draw() {
    base.display(ofGetMouseX(), ofGetMouseY());
    extend.display(base.x, base.y);
}
