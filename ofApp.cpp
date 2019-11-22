#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    ofSetBackgroundAuto(false);
    
    numsOfXTiles=20;
    numsOfYTiles=21;
    spacingX=ofGetWidth()/numsOfXTiles;   // get the val that each gap
    spacingY=ofGetHeight()/numsOfYTiles;
    startingX=spacingX/2;   //the first circle point
    startingY=spacingY/2;
    
    gap=-50;

}

//--------------------------------------------------------------
void ofApp::update(){
    phase++;
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    drawCir(gap,phase);
//    int maxGap = 30;
//    for (int i=0;i<ofGetWidth();i+=spacingX){
//    drawCir(gap+i,phase+i*2);
// }
}
//--------------------------------------------------------------
void ofApp::drawCir(int k,int phase){
    
    ofSetColor(0,0,0,30);
    ofDrawRectangle(0, 0, ofGetWidth(), ofGetHeight());
    
    // create nestForLoop for the grid
    for (int i=0;i<ofGetWidth();i+=spacingX){
        for (int j=0;j<ofGetHeight();j+=spacingY){
            
            int locX = startingX+i;
            int locY = startingY+j;
            float s = sin(ofDegToRad(phase));
            
            float angle = atan2(ofGetHeight()/2-locY,ofGetWidth()/2-locX);

            // when using the ofTranslate be sure to use the push and pop
            ofPushMatrix();
            ofTranslate(locX,locY);
            ofRotateRad(angle);
//            ofDrawRectangle(0, 0, 30, 5);     //test the direction
        
            float x = ofMap(s,-1,1,k,0);
            
            
            ofSetColor(255);
            ofDrawCircle(x,0,2);
            ofPopMatrix();
     
    }
  }
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

