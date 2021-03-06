/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBSectionComponentTrackerUpdate.h>

@class NSString;

@interface FBSectionComponentTracker : NSObject <FBSectionComponentTrackerUpdate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)readyForSectionComponentGeneration;
-(void)didRequestPrefetchingData;
-(id)initWithSectionComponentGenerationFactory:(/*^block*/id)arg1 userInfoMergeBlockMap:(id)arg2 options:(const FBSectionComponentTrackerOptions*)arg3 ;
-(void)addTrackerStateListener:(id)arg1 ;
-(void)setSectionComponentGenerationFactory:(/*^block*/id)arg1 changesetWriter:(id)arg2 ;
-(void)setSectionComponentGenerationFactory:(/*^block*/id)arg1 ;
-(void)readyToApplyChangesets;
-(void)didScrollToBottom;
-(void)didScrollToTop;
-(void)didRequestReload;
-(void)didPullToRefresh;
-(void)componentWillAppear;
-(void)componentDidAppear;
-(void)componentWillDisappear;
-(void)componentDidDisappear;
-(id)initWithSectionComponentGenerationFactory:(/*^block*/id)arg1 changesetWriter:(id)arg2 userInfoMergeBlockMap:(id)arg3 options:(const FBSectionComponentTrackerOptions*)arg4 ;
-(void)reflowSectionComponents_DEPRECATED;
-(void)removeTrackerStateListener:(id)arg1 ;
@end

