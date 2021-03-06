/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:39 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBUserSession;

@interface FBSavedUsageHelper : NSObject {

	FBUserSession* _session;
	BOOL _hasSeenSaveToWatchLaterLabelThisSession;

}

@property (assign,nonatomic) BOOL hasSeenSaveToWatchLaterLabelThisSession;              //@synthesize hasSeenSaveToWatchLaterLabelThisSession=_hasSeenSaveToWatchLaterLabelThisSession - In the implementation block
+(id)getLastSaveTime:(id)arg1 ;
+(id)getLastCacheTimeOfBrowserLinksSection:(id)arg1 ;
+(void)recordLastCacheTimeOfBrowserLinksSection:(id)arg1 ;
+(void)recordNowLastVideoSaveTime:(id)arg1 ;
+(void)recordLastSavedVideoGraphQLID:(id)arg1 videoID:(id)arg2 ;
+(void)processSaveAction:(id)arg1 action:(int)arg2 ;
+(id)getLastSavedVideoGraphQLID:(id)arg1 ;
+(void)recordNowLastSaveTime:(id)arg1 ;
+(id)getBrowserNuxShownTime:(id)arg1 ;
+(void)recordNowBrowserNuxShownTime:(id)arg1 ;
+(id)getSavedDashboardNewsfeedEntryFirstImpressionTime:(id)arg1 ;
+(void)_resetSavedDashboardNewsfeedEntryImpressionsSinceLastSave:(id)arg1 ;
+(void)_resetSavedDashboardNewsfeedEntryTapsSinceLastSave:(id)arg1 ;
+(id)getFirstSaveTime:(id)arg1 ;
+(id)getLastShareMenuSaveButtonNuxShownTime:(id)arg1 ;
+(void)recordNowShareMenuSaveButtonNuxShownTime:(id)arg1 ;
+(id)getLastFeedTopLevelSaveButtonNuxShownTime:(id)arg1 ;
+(void)recordNowFeedTopLevelSaveButtonNuxShownTime:(id)arg1 ;
+(id)getLastBookmarkNuxShownTime:(id)arg1 ;
+(void)recordNowBookmarkNuxShownTime:(id)arg1 ;
+(void)recordNowCaretNuxShownTime:(id)arg1 ;
+(id)getLastCaretNuxShownTime:(id)arg1 ;
+(void)recordNowFeedSaveOverlayButtonNuxShownTime:(id)arg1 ;
+(id)getLastVideoChannelSaveButtonNuxShownTime:(id)arg1 ;
+(void)recordNowVideoChannelSaveButtonNuxShownTime:(id)arg1 ;
+(id)getLastFeedSaveOverlayButtonNuxShownTime:(id)arg1 ;
+(void)incrementSavedDashboardNewsfeedEntryImpressionsSinceLastSave:(id)arg1 ;
+(int)getSavedDashboardNewsfeedEntryImpressionsCountSinceLastSave:(id)arg1 ;
+(void)incrementSavedDashboardNewsfeedEntryTapsSinceLastSave:(id)arg1 ;
+(int)getSavedDashboardNewsfeedEntryTapsCountSinceLastSave:(id)arg1 ;
+(id)getLastVideoSaveTime:(id)arg1 ;
+(void)recordNowVideoHomeNuxShownTime:(id)arg1 ;
+(id)getLastVideoHomeNuxShownTime:(id)arg1 ;
+(void)recordNowVideoSaveToWatchLaterLabelShownTime:(id)arg1 ;
+(id)getLastVideoSaveToWatchLaterLabelShownTime:(id)arg1 ;
+(int)getVideoSaveToWatchLaterLabelShownCount:(id)arg1 ;
+(BOOL)checkIfNewsfeedEntryImpressionCooldownHasElapsed:(id)arg1 cooldownTimeMinutes:(int)arg2 resetImpressionCount:(BOOL)arg3 ;
-(void)setHasSeenSaveToWatchLaterLabelThisSession:(BOOL)arg1 ;
-(BOOL)hasSeenSaveToWatchLaterLabelThisSession;
-(id)initWithSession:(id)arg1 ;
@end

