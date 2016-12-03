/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:16 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MQEventDispatcher.h>

@class MQDocumentEffect;

@interface MQDocumentViewBase : MQEventDispatcher {

	MQDocumentEffect* _rootEffect;

}

@property (assign,nonatomic,__weak) MQDocumentEffect * rootEffect;              //@synthesize rootEffect=_rootEffect - In the implementation block
-(void)setRootEffect:(MQDocumentEffect *)arg1 ;
-(void)destroyScene;
-(void)initScene;
-(void)drawFace:(id)arg1 ;
-(void)drawFaces:(id)arg1 ;
-(void)onEnterFrame:(double)arg1 ;
-(MQDocumentEffect *)rootEffect;
-(void)removeFromParentNode;
-(void)runAction:(/*^block*/id)arg1 ;
@end
