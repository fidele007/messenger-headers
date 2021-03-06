/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:16 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MQSceneObjectView.h>

@class MQEventHandler, MQHighPolyFaceNode, SCNMaterial, MQHighPolyFaceModel;

@interface MQHighPolyFaceView : MQSceneObjectView {

	MQEventHandler* _onMaterialChangeHandler;
	MQEventHandler* _onChangeHandler;
	MQHighPolyFaceNode* _faceNode;
	SCNMaterial* _faceMaterial;
	MQHighPolyFaceModel* _model;

}

@property (assign,nonatomic,__weak) MQHighPolyFaceModel * model;              //@synthesize model=_model - In the implementation block
-(void)destroyScene;
-(void)initScene;
-(void)drawFace:(id)arg1 ;
-(void)drawFaces:(id)arg1 ;
-(void)onEnterFrame:(double)arg1 ;
-(void)onChange:(id)arg1 ;
-(void)onMaterialChange:(id)arg1 ;
-(void)updateRenderingOrder:(long long)arg1 ;
-(void)updateFaceNode:(id)arg1 ;
-(MQHighPolyFaceModel *)model;
-(id)initWithModel:(id)arg1 ;
-(void)setModel:(MQHighPolyFaceModel *)arg1 ;
@end

