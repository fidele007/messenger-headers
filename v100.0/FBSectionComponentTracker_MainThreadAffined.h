/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBSectionComponentTracker.h>
#import <Messenger/FBSectionComponentStateChangeListener.h>

@protocol FBComponentChangesetWriter;
@class FBSectionComponent, NSMutableDictionary, FBSectionComponentThreadLocalScope, FBSectionComponentTrackerStateListenerAnnouncer, NSDictionary, NSString;

@interface FBSectionComponentTracker_MainThreadAffined : FBSectionComponentTracker <FBSectionComponentStateChangeListener> {

	unsigned long long _state;
	/*^block*/id _sectionComponentGenerationFactory;
	FBSectionComponent* _lastComponent;
	NSMutableDictionary* _currentState;
	FBSectionComponentThreadLocalScope* _currentLocalScope;
	id<FBComponentChangesetWriter> _changesetWriter;
	BOOL _isGeneratingComponent;
	int _recursiveGenerationCount;
	FBSectionComponentTrackerStateListenerAnnouncer* _announcer;
	BOOL _shouldCombineStateUpdates;
	/*^block*/id _updateStateBlock;
	NSMutableDictionary* _updatedStates;
	NSDictionary* _userInfo;
	NSDictionary* _userInfoMergeBlockMap;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)readyForSectionComponentGeneration;
-(void)readyToApplyChangesets;
-(void)setSectionComponentGenerationFactory:(/*^block*/id)arg1 ;
-(void)componentWillDisappear;
-(void)componentDidAppear;
-(void)didScrollToBottom;
-(void)didScrollToTop;
-(void)didPullToRefresh;
-(void)didRequestReload;
-(void)didRequestPrefetchingData;
-(void)componentWillAppear;
-(void)componentDidDisappear;
-(id)initWithSectionComponentGenerationFactory:(/*^block*/id)arg1 changesetWriter:(id)arg2 userInfoMergeBlockMap:(id)arg3 ;
-(id)initWithSectionComponentGenerationFactory:(/*^block*/id)arg1 userInfoMergeBlockMap:(id)arg2 ;
-(void)setSectionComponentGenerationFactory:(/*^block*/id)arg1 changesetWriter:(id)arg2 ;
-(void)reflowSectionComponents_DEPRECATED;
-(void)addTrackerStateListener:(id)arg1 ;
-(void)removeTrackerStateListener:(id)arg1 ;
-(void)updateStateRequestedForKey:(id)arg1 updateBlock:(/*^block*/id)arg2 userInfo:(id)arg3 ;
-(void)generateComponentWithGenerationType:(unsigned long long)arg1 ;
-(void)_updateAndAnnounceState:(/*^block*/id)arg1 ;
-(void)executeStateUpdateTransaction:(/*^block*/id)arg1 ;
-(void)dealloc;
@end
