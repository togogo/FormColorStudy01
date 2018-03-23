//
//  Spring2D.hpp
//  form_color_study01
//
//  Created by Togo Kida on 2018/03/24.
//

#ifndef Spring2D_hpp
#define Spring2D_hpp

#include <stdio.h>

class Spring2D {
    float vx, vy;
    float x, y;
    float gravity;
    float mass;
    float stiffness;
    float damping;
    
    void Spring2D();
    void update();
    void display();
    

    
};

//#endif /* Spring2D_hpp */ //what is this for?
