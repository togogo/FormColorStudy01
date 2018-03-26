//
//  springPoint.hpp
//  form_color_study01
//
//  Created by Togo Kida on 2018/03/24.
//

//#ifndef SpringPoint_hpp//what is this for?
//#define SpringPoint_hpp//what is this for?

#pragma once

//#include <stdio.h>
#include "ofMain.h"

class SpringPoint{
public:
    void setup();
    void update();
    void draw();
    
    ofVec2f pos;//position of the spring point
};

//#endif /* SpringPoint_hpp */ //what is this for?
