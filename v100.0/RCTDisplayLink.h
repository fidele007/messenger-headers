/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CADisplayLink, NSMutableSet, NSRunLoop;

@interface RCTDisplayLink : NSObject {

	CADisplayLink* _jsDisplayLink;
	NSMutableSet* _frameUpdateObservers;
	NSRunLoop* _runLoop;

}
-(void)_jsThreadUpdate:(id)arg1 ;
-(void)updateJSDisplayLinkState;
-(void)registerModuleForFrameUpdates:(id)arg1 withModuleData:(id)arg2 ;
-(void)addToRunLoop:(id)arg1 ;
-(void)dispatchBlock:(/*^block*/id)arg1 queue:(id)arg2 ;
-(id)init;
-(void)invalidate;
@end

