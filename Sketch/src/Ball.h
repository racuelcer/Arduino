//
//  Ball.h
//  Sketch
//
//  Created by Raquel Cervantes Chacon on 11/10/15.
//
//

#ifndef Ball_h
#define Ball_h

#include "ofMain.h"

class Ball : public ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();
    
    int xPos;
    int xVel;
    float bounce;
    
    
};


#endif /* Ball_h */
