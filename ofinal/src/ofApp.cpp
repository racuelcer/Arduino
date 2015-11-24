#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    //smoth edges
    ofEnableSmoothing();
    //fixed framerate
    ofSetFrameRate(30);
    // initial x position of ball
    xPos =  ofGetWindowWidth() *0.5;
    // intitial y position of ball
    yPos = ofGetWindowHeight()*0.5;
    

}

//--------------------------------------------------------------
void ofApp::update(){
    xPos += ( mouseX - xPos )*0.1;
    yPos += ( mouseY - yPos )*0.1;
    // We calculate the x and y distance
    // of the ball to the mouse position and
    // add a little portion of it to the x and y
    // variables

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackgroundGradient(ofColor::gray,ofColor(30,10,30), OF_GRADIENT_CIRCULAR);
    ofSetColor(200,200,124);
    ofFill();
    ofDrawCircle( xPos, yPos, 30);

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
