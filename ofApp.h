/************************************************************
description
	<|>を区切り文字とし、
		ある要素は数字、
		ある要素はspaceも含む文字列
	と言った複雑なmeta data
	例えば
		<Event>	<|>	0	<|>	Rolling my sleeves up in here	<|>	0.1	<|>	4	<|>	0.1
	を読み込む場合のtips.
************************************************************/
#pragma once

/************************************************************
************************************************************/
#include "ofMain.h"

/************************************************************
************************************************************/
class ofApp : public ofBaseApp{
private:
	/********************
	画面は使用しないので、サイズは何でもOK.
	********************/
	enum{
		WIDTH	= 200,
		HEIGHT	= 200,
	};
	
	void test();

public:
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
	
};
