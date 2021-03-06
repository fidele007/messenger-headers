/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, FBVideoProcessor;

@interface FBMPSessionContext : NSObject {

	/*^block*/id _setNeedsInputData;
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
-(id)initWithNeedsInputDataBlock:(/*^block*/id)arg1 ;
-(void)setSessionRunning:(BOOL)arg1 ;
-(void)setNeedsInputData;
-(NSObject*<OS_dispatch_queue>)sessionQueue;
-(void)setSessionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

