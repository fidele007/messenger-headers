/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBSectionComponentTrackerStateListener.h>

@class FBQuickPerformanceLogger, NSString;

@interface FBListPerformanceLogger : NSObject <FBSectionComponentTrackerStateListener> {

	FBQuickPerformanceLogger* _quickLogger;
	NSString* _analyticsModuleTag;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAnalyticsModule:(id)arg1 ;
-(void)didApplyChangeset:(id)arg1 listComponentTracker:(id)arg2 ;
-(void)componentWillAppearUsingTracker:(id)arg1 ;
-(void)willGenerateChangesetFromPreviousComponent:(id)arg1 ;
-(void)didGenerateChangesetFromPreviousComponent:(id)arg1 ;
-(void)willGenerateNewSectionComponentHierarchy:(id)arg1 ;
-(void)didGenerateSectionComponentHierarchy:(id)arg1 currentStates:(id)arg2 listComponentTracker:(id)arg3 ;
-(void)didUpdateStateWithOldValues:(id)arg1 allCurrentStates:(id)arg2 tracker:(id)arg3 ;
-(void)trackerWillDeallocate:(id)arg1 ;
@end

