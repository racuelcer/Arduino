//
//  Ball.cpp
//  Sketch
//
//  Created by Raquel Cervantes Chacon on 11/10/15.
//
//


#include "Ball.h"

void Ball::setup(){
    xPos = 0;
    xVel = 5;
    ofSetWindowShape(600, 600);
    bounce = 0;
}

void Ball::update(){
    if (xPos>=0 && xPos<=ofGetWidth()) {
        xVel = xVel;
    }
    else{
        xVel = -xVel;
    }
    xPos +=xVel;
    bounce = bounce + 0.033f;
    
}

void Ball::draw(){
   
    ofCircle(xPos,ofGetHeight()/2, 20, 20);
}
