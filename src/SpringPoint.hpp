//
//  springPoint.hpp
//  form_color_study01
//
//  Created by Togo Kida on 2018/03/24.
//

#pragma once

#include "ofMain.h"
//#include "ofApp.h"
#include "Spring2D.hpp"

class SpringPoint{
public:
    void setup();
    void update();
    void draw();
    
    ofVec2f pos;//position of the spring point
    
    Spring2D base;
    Spring2D extend;
    
    //just using this temporarily...
    float gravity = 0.0;//test value
    float mass = 3.0;//test value
    float stiffness = 0.2;//test value
    float damping = 0.8;//test value
};
