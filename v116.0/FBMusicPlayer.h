/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:00 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSUUID;


@protocol FBMusicPlayer <NSObject>
@property (nonatomic,readonly) NSUUID * playerID; 
@property (nonatomic,readonly) long long musicState; 
@required
-(void)play:(id)arg1 withFade:(BOOL)arg2;
-(void)stopWithFade:(BOOL)arg1;
-(long long)musicState;
-(void)play:(id)arg1 withFade:(BOOL)arg2 andStartTime:(double)arg3;
-(void)stop;
-(void)setURL:(id)arg1;
-(void)resume;
-(void)pause;
-(void)addListener:(id)arg1;
-(void)removeListener:(id)arg1;
-(void)seekToTime:(double)arg1;
-(NSUUID *)playerID;
-(void)play:(id)arg1;

@end

