#pragma once

#include "ofMain.h"
#include "std15.hpp"

class ofApp : public ofBaseApp{

	public:
		ofApp(int screen_sx, int screen_sy, int cb_sx, int cb_sy);
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
	private:
		std15 _std15;
		bool running;
		int x;
};
