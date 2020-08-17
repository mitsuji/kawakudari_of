# kawakudari_of

This project implements part of the [std15.h](https://github.com/IchigoJam/c4ij/blob/master/src/std15.h) API (from [c4ij](https://github.com/IchigoJam/c4ij)) with [openFrameworks](https://openframeworks.cc/), and [Kawakudari Game](https://ichigojam.github.io/print/en/KAWAKUDARI.html) on top of it.

It will allow programming for [IchigoJam](https://ichigojam.net/index-en.html)-like targets using a C++ programming language.
```
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

```

## Prerequisite

[Download](https://openframeworks.cc/download/) and install openFrameworks suitable for your environment.

## Preparation

Adjust contents of config.make to suit your environment.
```
# OF_ROOT = ../../..
OF_ROOT = /home/someone/apps/of
```

## How to use

To build it
```
$ make
```

To run it
```
$ make run
```
