//
//  BALL.h
//  ofinal
//
//  Created by Raquel Cervantes Chacon on 11/24/15.
//
//

#ifndef BALL_h
#define BALL_h


#include "ofMain.h"

class Ball {
public:
    // Constructor
    Ball();
    
    //methods
    void moveTo(int _xDestiny, int _yDestiny);
    void draw();
    
    // Properties
    int x;
    int y;
    ofColor color;
};


#endif /* BALL_h */
