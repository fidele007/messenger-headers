/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:48 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MSQPrefabViewBase.h>

@protocol MSQObj3DModelProtocol;
@class MQEventHandler, SCNScene, SCNNode;

@interface MSQObj3DView : MSQPrefabViewBase {

	MQEventHandler* onPrefabChangeHandler;
	SCNScene* scene;
	SCNNode* meshModel;
	id<MSQObj3DModelProtocol> _model;

}

@property (assign,nonatomic,__weak) id<MSQObj3DModelProtocol> model;              //@synthesize model=_model - In the implementation block
-(void)onPrefabChange:(id)arg1 ;
-(id)getNode:(id)arg1 ;
-(void)initScene;
-(void)destroyScene;
-(id<MSQObj3DModelProtocol>)model;
-(id)initWithModel:(id)arg1 ;
-(void)setModel:(id<MSQObj3DModelProtocol>)arg1 ;
-(void)destroy;
@end

