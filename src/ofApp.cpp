#include "ofApp.h"

void ofApp::setup()
{
    webview.setup();
    webview.load("http://forum.openframeworks.cc/");
}

void ofApp::update()
{
    
}

void ofApp::draw(){
    
   }

//--------------------------------------------------------------
void ofApp::keyPressed  (int key){
    ofLogNotice("Key pressed: "+key);
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key)
{
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button)
{
    ofLogNotice("Mouse Pressed");

}


//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    ofLogNotice("Mouse Released");
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
