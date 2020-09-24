#include "ofApp.h"

static bool running;
static int x;

ofApp::ofApp()
  : std15_(512, 384, 32, 24)
{
}

void ofApp::setup(){
  running = true;
  x = 15;
}

void ofApp::update(){
  if (!running) return;
  if (ofGetFrameNum() % 5 == 0) {
    std15_.locate(x, 5);
    std15_.putc('0');
    std15_.locate(floor(ofRandom(32)), 23);
    std15_.putc('*');
    std15_.scroll();

    if (std15_.scr(x, 5) != '\0') {
      std15_.locate(0,23);
      std15_.putstr("Game Over...");
      std15_.putnum(ofGetFrameNum());
      running = false;
    }
  }
}

void ofApp::draw(){
  std15_.drawScreen();
}

void ofApp::keyPressed(int key){
  if (key == OF_KEY_LEFT)  x--;
  if (key == OF_KEY_RIGHT) x++;
}
