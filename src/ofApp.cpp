#include "ofApp.h"

//--------------------------------------------------------------
ofApp::ofApp(int screen_sx, int screen_sy, int cb_sx, int cb_sy)
  : _std15(screen_sx, screen_sy, cb_sx, cb_sy)
{
}

//--------------------------------------------------------------
void ofApp::setup(){
  running = true;
  x = 15;
}

//--------------------------------------------------------------
void ofApp::update(){
  if(!running) return;
  if(ofGetFrameNum() % 15 == 0 ) {
    _std15.locate(x, 5);
    _std15.putc('0');
    _std15.locate(floor(ofRandom(32)), 23);
    _std15.putc('*');

    _std15.scroll();

    if (_std15.scr(x, 5)!='\0') {
      running = false;
    }
  }
}

//--------------------------------------------------------------
void ofApp::draw(){
  _std15.ofDraw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
  if (key == OF_KEY_LEFT)  --x;
  if (key == OF_KEY_RIGHT) ++x;
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
