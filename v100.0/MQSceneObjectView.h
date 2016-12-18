/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:48 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MQDocumentViewBase.h>

@protocol MQSceneObjectModelProtocol;
@class MQEventHandler, SCNNode;

@interface MQSceneObjectView : MQDocumentViewBase {

	MQEventHandler* onSceneObjectNameChangeHandler;
	MQEventHandler* onSceneObjectChangeHandler;
	MQEventHandler* onTransformChangeHandler;
	MQEventHandler* onChildAddedHandler;
	MQEventHandler* onChildRemovedHandler;
	SCNNode* _sceneObject;
	id<MQSceneObjectModelProtocol> _sceneModel;

}

@property (nonatomic,retain) SCNNode * sceneObject;                                         //@synthesize sceneObject=_sceneObject - In the implementation block
@property (assign,nonatomic,__weak) id<MQSceneObjectModelProtocol> sceneModel;              //@synthesize sceneModel=_sceneModel - In the implementation block
-(void)onChildAdded:(id)arg1 ;
-(void)onChildRemoved:(id)arg1 ;
-(void)onEnterFrame:(double)arg1 ;
-(void)initScene;
-(void)destroyScene;
-(id)initWithSceneObjectModel:(id)arg1 ;
-(void)drawFace:(id)arg1 ;
-(SCNNode *)sceneObject;
-(void)drawFaces:(id)arg1 ;
-(void)updateRenderingOrder:(long long)arg1 ;
-(void)onSceneObjectChange:(id)arg1 ;
-(void)onSceneObjectNameChange:(id)arg1 ;
-(void)setSceneObject:(SCNNode *)arg1 ;
-(id<MQSceneObjectModelProtocol>)sceneModel;
-(void)setSceneModel:(id<MQSceneObjectModelProtocol>)arg1 ;
-(void)unbindTransform:(id)arg1 ;
-(void)bindTransform:(id)arg1 ;
-(void)onTransformChange:(id)arg1 ;
@end
