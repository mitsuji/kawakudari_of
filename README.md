# kawakudari_of

This project implements part of the [std15.h](https://github.com/IchigoJam/c4ij/blob/master/src/std15.h) API (from [c4ij](https://github.com/IchigoJam/c4ij)) with [openFrameworks](https://openframeworks.cc/), and [Kawakudari Game](https://ichigojam.github.io/print/en/KAWAKUDARI.html) on top of it.

It will allow programming for [IchigoJam](https://ichigojam.net/index-en.html)-like targets that display [IchigoJam FONT](https://mitsuji.github.io/ichigojam-font.json/) on screen using a C++ programming language.
```
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
    std15_.scroll(DIR_UP);

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

## License
[![Creative Commons License](https://i.creativecommons.org/l/by/4.0/88x31.png)](http://creativecommons.org/licenses/by/4.0/)
[CC BY](https://creativecommons.org/licenses/by/4.0/) [mitsuji.org](https://mitsuji.org)

This work is licensed under a [Creative Commons Attribution 4.0 International License](http://creativecommons.org/licenses/by/4.0/).
