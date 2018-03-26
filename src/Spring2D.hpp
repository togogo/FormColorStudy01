//
//  Spring2D.hpp
//  form_color_study01
//
//  Created by Togo Kida on 2018/03/24.
//

#pragma once

//#ifndef Spring2D_hpp//what is this for?
//#define Spring2D_hpp//what is this for?

//#include <stdio.h>
#include "ofMain.h"


class Spring2D {
    
public:
    float vx, vy;
    ofVec2f vpos;
    float x, y;
    ofVec2f pos;//position of the Spring2D
    float gravity;
    float mass;
    float stiffness;
    float damping;
    
    //Spring2D(float _x, float _y, float _mass, float _gravity, float _stiffness, float _damping);
    //Spring2D(ofVec2f _pos, float _mass, float _gravity, float _stiffness, float _damping);
    
    void setup(float _x, float _y, float _mass, float _gravity, float _stiffness, float _damping);
    //void setup(ofVec2f _pos, float _mass, float _gravity, float _stiffness, float _damping);
    
    void update(float targetX, float targetY);
    void display(float nx, float ny);
    

    
};

//#endif /* Spring2D_hpp */ //what is this for?
