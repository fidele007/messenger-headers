/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface FBDelayer : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _delayedActionBlocks;
	BOOL _waitingForSignal;

}

@property (nonatomic,readonly) BOOL isSignaled; 
@property (nonatomic,readonly) BOOL anyBlocksQueued; 
-(void)delayBlock:(/*^block*/id)arg1 ;
-(id)initForQueue:(id)arg1 ;
-(BOOL)isSignaled;
-(BOOL)anyBlocksQueued;
-(id)init;
-(void)clear;
-(void)signal;
@end
