//
//  ball.cpp
//  ofinal
//
//  Created by Raquel Cervantes Chacon on 11/24/15.
//
//

#include "ball.h"


Ball::Ball(){
    // Set the initial color
    color.set( ofRandom(255), ofRandom(255), ofRandom(255));
    
    // Initial x position of the ball
    x = ofRandom( ofGetWindowWidth() );
    
    // Initial y position of the ball
    y = ofRandom( ofGetWindowHeight() );
}



void Ball::draw(){
    ofSetColor(color);
    ofFill();
    ofDrawCircle( x, y, 30);
}

void Ball::moveTo(int _xDestiny, int _yDestiny){
    x += ( _xDestiny - x )*0.1;
    y += ( _yDestiny - y )*0.1;
}
