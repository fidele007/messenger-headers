/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:44 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBUserSession, NSMutableDictionary;

@interface FBGametimeScoreUpdater : NSObject {

	FBUserSession* _session;
	NSMutableDictionary* _matchIDToUpdaterInfoDictionary;

}
+(void)_updateScoreForMatchID:(id)arg1 info:(id)arg2 andSession:(id)arg3 ;
+(void)_scoreTrackerQueryCompletedWithResponse:(id)arg1 updaterInfo:(id)arg2 matchID:(id)arg3 ;
-(void)startTrackingScoreForMatchWithMatchID:(id)arg1 forListener:(id)arg2 ;
-(void)stopTrackingScoreForMatchWithMatchID:(id)arg1 forListener:(id)arg2 ;
-(id)initWithSession:(id)arg1 ;
@end

