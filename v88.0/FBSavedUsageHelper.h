/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:53 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBSavedUsageHelper : NSObject
+(id)getLastCaretNuxShownTime:(id)arg1 ;
+(void)recordNowCaretNuxShownTime:(id)arg1 ;
+(id)getLastSaveTime:(id)arg1 ;
+(id)getLastCacheTimeOfBrowserLinksSection:(id)arg1 ;
+(void)recordLastCacheTimeOfBrowserLinksSection:(id)arg1 ;
+(void)processSaveAction:(id)arg1 action:(int)arg2 ;
+(id)getBrowserNuxShownTime:(id)arg1 ;
+(void)recordNowBrowserNuxShownTime:(id)arg1 ;
+(id)getSavedDashboardNewsfeedEntryFirstImpressionTime:(id)arg1 ;
+(void)_resetSavedDashboardNewsfeedEntryImpressionsSinceLastSave:(id)arg1 ;
+(void)_resetSavedDashboardNewsfeedEntryTapsSinceLastSave:(id)arg1 ;
+(void)refreshBookmarksOnFirstSave:(id)arg1 ;
+(id)getFirstSaveTime:(id)arg1 ;
+(id)getLastShareMenuSaveButtonNuxShownTime:(id)arg1 ;
+(void)recordNowShareMenuSaveButtonNuxShownTime:(id)arg1 ;
+(id)getLastFeedTopLevelSaveButtonNuxShownTime:(id)arg1 ;
+(void)recordNowFeedTopLevelSaveButtonNuxShownTime:(id)arg1 ;
+(id)getLastBookmarkNuxShownTime:(id)arg1 ;
+(void)recordNowBookmarkNuxShownTime:(id)arg1 ;
+(void)recordNowFeedSaveOverlayButtonNuxShownTime:(id)arg1 ;
+(id)getLastFeedSaveOverlayButtonNuxShownTime:(id)arg1 ;
+(void)incrementSavedDashboardNewsfeedEntryImpressionsSinceLastSave:(id)arg1 ;
+(int)getSavedDashboardNewsfeedEntryImpressionsCountSinceLastSave:(id)arg1 ;
+(void)incrementSavedDashboardNewsfeedEntryTapsSinceLastSave:(id)arg1 ;
+(int)getSavedDashboardNewsfeedEntryTapsCountSinceLastSave:(id)arg1 ;
+(BOOL)checkIfNewsfeedEntryImpressionCooldownHasElapsed:(id)arg1 cooldownTimeMinutes:(int)arg2 resetImpressionCount:(BOOL)arg3 ;
@end
