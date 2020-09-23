#pragma once

#include "ofMain.h"
#include "ichigojam.hpp"

class ofApp : public ofBaseApp {

public:
  ofApp();
  void setup();
  void update();
  void draw();
  void keyPressed(int key);

private:
  std15 std15_;

};
