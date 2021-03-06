/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:14 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, FBVideoProcessor;

@interface FBMPSessionContext : NSObject {

	BOOL _sessionRunning;
	NSObject*<OS_dispatch_queue> _sessionQueue;
	NSObject*<OS_dispatch_queue> _videoQueue;
	NSObject*<OS_dispatch_queue> _audioQueue;

}

@property (nonatomic,readonly) FBVideoProcessor * processor; 
@property (assign,getter=isSessionRunning,nonatomic) BOOL sessionRunning;              //@synthesize sessionRunning=_sessionRunning - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> sessionQueue;                //@synthesize sessionQueue=_sessionQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> videoQueue;                //@synthesize videoQueue=_videoQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> audioQueue;                //@synthesize audioQueue=_audioQueue - In the implementation block
-(FBVideoProcessor *)processor;
-(NSObject*<OS_dispatch_queue>)videoQueue;
-(BOOL)isSessionRunning;
-(NSObject*<OS_dispatch_queue>)audioQueue;
-(void)setSessionRunning:(BOOL)arg1 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)sessionQueue;
-(void)setSessionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

