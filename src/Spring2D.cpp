//
//  Spring2D.cpp
//  form_color_study01
//
//  Created by Togo Kida on 2018/03/24.
//

#include "Spring2D.hpp"


//コンストラクタ
/*
Spring2D::Spring2D(float _x, float _y, float _mass, float _gravity, float _stiffness, float _damping) {
    x = _x;
    y = _y;
    mass = _mass;
    gravity = _gravity;
    stiffness = _stiffness;
    damping = _damping;
}

Spring2D::Spring2D(ofVec2f _pos, float _mass, float _gravity, float _stiffness, float _damping) {
    //x = _x;
    //y = _y;
    pos = _pos;
    mass = _mass;
    gravity = _gravity;
    stiffness = _stiffness;
    damping = _damping;
}
 */

void Spring2D::setup(float _x, float _y, float _mass, float _gravity, float _stiffness, float _damping) {
    x = _x;
    y = _y;
    mass = _mass;
    gravity = _gravity;
    stiffness = _stiffness;
    damping = _damping;
}
//位置を計算
void Spring2D::update(float targetX, float targetY) {
    float forceX = (targetX - x) * stiffness;
    float ax = forceX / mass;
    vx = damping * (vx + ax);
    x += vx;
    float forceY = (targetY - y) * stiffness;
    forceY += gravity;
    float ay = forceY / mass;
    vy = damping * (vy + ay);
    y += vy;
}

//表示
void Spring2D::display(float nx, float ny) {
    ofDrawCircle(x, y, 20, 20);
    ofDrawLine(x, y, nx, ny);
}


