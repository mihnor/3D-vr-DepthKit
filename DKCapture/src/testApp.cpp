#include "testApp.h"
#include "ofxXmlSettings.h"
#if PROVIDER == FREENECT
	#include "ofxDepthImageProviderFreenect.h"
#else
	#include "ofxDepthImageProvider.h
#endif

//--------------------------------------------------------------
void testApp::setup(){
	
	ofSetEscapeQuitsApp(false);
	ofEnableAlphaBlending();
	ofSetFrameRate(60);
	ofBackground(0);
#ifdef FREENECT
    gui.setImageProvider( new ofxDepthImageProviderFreenect() );
#else
	gui.setImageProvider( new ofxDepthImageProviderFreenect() );
#endif
	
	gui.setup();
}

//--------------------------------------------------------------
void testApp::update(){}

//--------------------------------------------------------------
void testApp::draw(){}

//--------------------------------------------------------------
void testApp::keyPressed(int key){}

//--------------------------------------------------------------
void testApp::exit() {}

//--------------------------------------------------------------
void testApp::keyReleased(int key){}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 
#ifdef TARGET_WIN32
	gui.dragEvent(dragInfo);
#endif
	cout << "Drag event!" << endl;
}
