/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:15 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBSectionComponentTracker.h>
#import <Messenger/FBSectionComponentStateChangeListener.h>

@protocol FBComponentChangesetWriter, NSObject;
@class FBSectionComponent, NSMutableDictionary, FBSectionComponentThreadLocalScope, FBSectionComponentTrackerStateListenerAnnouncer, NSDictionary, NSString;

@interface FBSectionComponentTracker_MainThreadAffined : FBSectionComponentTracker <FBSectionComponentStateChangeListener> {

	unsigned long long _state;
	/*^block*/id _listComponentGenerationFactory;
	FBSectionComponent* _lastComponent;
	NSMutableDictionary* _currentState;
	FBSectionComponentThreadLocalScope* _currentLocalScope;
	id<FBComponentChangesetWriter> _changesetWriter;
	id<NSObject> _componentControllerContext;
	BOOL _isGeneratingComponent;
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
-(void)componentDidAppear;
-(void)componentWillDisappear;
-(void)didScrollToBottom;
-(void)didScrollToTop;
-(void)didPullToRefresh;
-(void)didRequestReload;
-(void)didRequestPrefetchingData;
-(void)componentWillAppear;
-(void)componentDidDisappear;
-(id)initWithSectionComponentGenerationFactory:(/*^block*/id)arg1 changesetWriter:(id)arg2 componentControllerContext:(id)arg3 userInfoMergeBlockMap:(id)arg4 ;
-(id)initWithSectionComponentGenerationFactory:(/*^block*/id)arg1 componentControllerContext:(id)arg2 userInfoMergeBlockMap:(id)arg3 ;
-(void)readyForSectionComponentGeneration;
-(void)readyToApplyChangesets;
-(void)setSectionComponentGenerationFactory:(/*^block*/id)arg1 changesetWriter:(id)arg2 componentControllerContext:(id)arg3 ;
-(void)setSectionComponentGenerationFactory:(/*^block*/id)arg1 ;
-(void)reflowSectionComponents_DEPRECATED;
-(void)addTrackerStateListener:(id)arg1 ;
-(void)removeTrackerStateListener:(id)arg1 ;
-(void)updateStateRequestedForKey:(id)arg1 updateBlock:(/*^block*/id)arg2 userInfo:(id)arg3 ;
-(void)generateComponentWithGenerationType:(unsigned long long)arg1 ;
-(void)_updateAndAnnounceState:(/*^block*/id)arg1 ;
-(void)executeStateUpdateTransaction:(/*^block*/id)arg1 ;
-(void)dealloc;
@end

