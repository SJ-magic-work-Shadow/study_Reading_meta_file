/************************************************************
************************************************************/
#include "ofApp.h"

/************************************************************
************************************************************/

//--------------------------------------------------------------
void ofApp::setup(){
	/********************
	********************/
	ofSetWindowTitle("test");
	ofSetVerticalSync(true);
	ofSetFrameRate(60);
	ofSetWindowShape(WIDTH, HEIGHT);
	ofSetEscapeQuitsApp(false);
	
	ofEnableAlphaBlending();
	ofEnableBlendMode(OF_BLENDMODE_ALPHA);
	// ofEnableBlendMode(OF_BLENDMODE_ADD);
	// ofEnableSmoothing();
	
	/********************
	********************/
	test();
}

/******************************
******************************/
void ofApp::test()
{
	/********************
	********************/
	enum{
		BUF_SIZE = 500,
	};
	
	/********************
	********************/
	FILE* fp = fopen("../../../data/meta.txt", "r");
	
	/********************
	********************/
	char buf[BUF_SIZE];
	while ( fgets(buf, BUF_SIZE, fp) != NULL ) { // 1行 読み込み
		string st_buf = buf;
		
		/********************
		delete : space, tab 
		********************/
		size_t pos;
		// while((pos = st_buf.find_first_of(" 　\t")) != string::npos){ // 半角・全角space, \t
		while((pos = st_buf.find_first_of("\t")) != string::npos){ // \t
			st_buf.erase(pos, 1);
		}
		
		/********************
		split
		********************/
		vector<string> strMetas = ofSplitString(st_buf,"<|>");
		printf("size = %d\n", strMetas.size());
		
		if(strMetas.size() == 6){
			string mark = strMetas[0];
			int id = atoi(strMetas[1].c_str());
			string phrase = strMetas[2];
			float val0 = atof(strMetas[3].c_str());
			float val1 = atof(strMetas[4].c_str());
			float val2 = atof(strMetas[5].c_str());
			
			printf("%d, %s, %f, %f, %f\n", id, phrase.c_str(), val0, val1, val2);
		}
	}

	/********************
	********************/
	fclose(fp);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	
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
