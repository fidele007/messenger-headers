/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:04 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBVideoPlayerStateBuilder : NSObject {

	BOOL _hasDisplayed;
	double _time;
	BOOL _didPlayToEnd;
	BOOL _manuallyPaused;
	BOOL _isOnEndScreen;
	BOOL _didLogStartedPlaying;
	BOOL _hasShownSoundPrompt;
	double _scrollBlockingTotalTimePlayed;
	double _scrollBlockingLastTimePlayed;

}
+(id)videoPlayerStateFromExistingVideoPlayerState:(id)arg1 ;
+(id)videoPlayerState;
-(id)withDidPlayToEnd:(BOOL)arg1 ;
-(id)withTime:(double)arg1 ;
-(id)withIsOnEndScreen:(BOOL)arg1 ;
-(id)withManuallyPaused:(BOOL)arg1 ;
-(id)withHasDisplayed:(BOOL)arg1 ;
-(id)withDidLogStartedPlaying:(BOOL)arg1 ;
-(id)withHasShownSoundPrompt:(BOOL)arg1 ;
-(id)withScrollBlockingTotalTimePlayed:(double)arg1 ;
-(id)withScrollBlockingLastTimePlayed:(double)arg1 ;
-(id)build;
@end

