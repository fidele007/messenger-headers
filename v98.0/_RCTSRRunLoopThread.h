/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:17 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSThread.h>

@protocol OS_dispatch_group;
@class NSObject, NSRunLoop;

@interface _RCTSRRunLoopThread : NSThread {

	NSObject*<OS_dispatch_group> _waitGroup;
	NSRunLoop* _runLoop;

}

@property (nonatomic,readonly) NSRunLoop * runLoop;              //@synthesize runLoop=_runLoop - In the implementation block
-(NSRunLoop *)runLoop;
-(id)init;
-(void)main;
-(void)step;
@end

