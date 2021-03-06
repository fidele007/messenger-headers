/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNMontageMessageController <NSObject>
@property (assign,nonatomic,__weak) id<MNMontageMessageControllerDelegate> delegate; 
@property (nonatomic,readonly) BOOL hasRequestedPlaying; 
@property (nonatomic,readonly) BOOL hasStartedPlaying; 
@property (nonatomic,readonly) unsigned long long requestedPlayingTime; 
@property (nonatomic,readonly) unsigned long long startedPlayingTime; 
@required
-(id)messageWrapper;
-(id)messageView;
-(BOOL)updatesProgressManually;
-(void)preloadContent;
-(BOOL)downloadContentAndPlay;
-(BOOL)hasRequestedPlaying;
-(BOOL)hasStartedPlaying;
-(unsigned long long)requestedPlayingTime;
-(unsigned long long)startedPlayingTime;
-(void)setDelegate:(id)arg1;
-(id<MNMontageMessageControllerDelegate>)delegate;
-(double)duration;
-(void)reset;
-(void)stop;
-(void)resume;
-(void)pause;

@end

