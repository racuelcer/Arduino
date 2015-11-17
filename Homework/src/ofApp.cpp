#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    theball.setup();
    theball3.setup();
    theball2.setup();
   
}

//--------------------------------------------------------------
void ofApp::update(){
    theball.update();
    theball3.update();
    theball2.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    float sinOfTime = sin(ofGetElapsedTimef());
    float sinOfTimeMapped = ofMap(sinOfTime, -1, 1, 0, 255);
    
    ofBackground(sinOfTimeMapped, sinOfTimeMapped, sinOfTimeMapped);
    float sinOfTime2 = sin(ofGetElapsedTimef()+PI);
    float sinOfTimeMapped2 = ofMap(sinOfTime2, -1, 1,0, 255);
    
    ofSetColor(sinOfTimeMapped2, sinOfTimeMapped2, sinOfTimeMapped2);
    ofRectangle(100,100,ofGetWidth()-200, ofGetHeight()-200);
    
    theball.draw();
    theball3.draw();
    theball2.draw();
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
