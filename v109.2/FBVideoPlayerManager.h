/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:41 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class NSMutableDictionary;

@interface FBVideoPlayerManager : NSObject {

	NSMutableDictionary* _videoPlayerStates;
	mutex _videoPlayerStatesLock;

}
-(id)videoPlayerStateForVideoWithID:(id)arg1 ;
-(void)updateManuallyPaused:(BOOL)arg1 forVideoWithID:(id)arg2 ;
-(void)updateDidPlayToEnd:(BOOL)arg1 time:(double)arg2 isOnEndScreen:(BOOL)arg3 forVideoWithID:(id)arg4 ;
-(void)updateDidLogStartedPlaying:(BOOL)arg1 forVideoWithID:(id)arg2 ;
-(id)findOrCreateVideoPlayerStateForVideoWithID:(id)arg1 ;
-(id)videoPlayerStateBuilderForVideoWithID:(id)arg1 ;
-(void)updateHasDisplayed:(BOOL)arg1 forVideoWithID:(id)arg2 ;
-(void)updateHasShownSoundPrompt:(BOOL)arg1 forVideoWithID:(id)arg2 ;
-(void)updateScrollBlockingTotalTimePlayed:(double)arg1 forVideoWithID:(id)arg2 ;
-(id)initWithSession:(id)arg1 ;
@end

