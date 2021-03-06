/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:15 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBSectionComponentTracker.h>
#import <Messenger/FBSectionComponentStateChangeListener.h>

@protocol OS_dispatch_queue;
@class FBSectionComponentTrackerStateListenerAnnouncer, NSDictionary, NSObject, FBSectionComponent, NSString;

@interface FBSectionComponentTracker_BackgroundGenSupport : FBSectionComponentTracker <FBSectionComponentStateChangeListener> {

	FBSectionComponentTrackerStateListenerAnnouncer* _announcer;
	NSDictionary* _userInfoMergeBlockMap;
	NSObject*<OS_dispatch_queue> _backgroundQueue;
	FBSectionComponentTrackerState _state;
	deque<FBSectionComponentTrackerStateModification, std::__1::allocator<FBSectionComponentTrackerStateModification> >* _pendingModifications;
	vector<FBSectionComponentTrackerComponentStateUpdate, std::__1::allocator<FBSectionComponentTrackerComponentStateUpdate> >* _pendingComponentStateUpdates;
	BOOL _shouldCombineStateUpdates;
	BOOL _isProcessingModification;
	FBSectionComponent* _keepAliveComponent;

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
-(id)initWithSectionComponentGenerationFactory:(/*^block*/id)arg1 changesetWriter:(id)arg2 componentControllerContext:(id)arg3 userInfoMergeBlockMap:(id)arg4 options:(const FBSectionComponentTrackerOptions*)arg5 ;
-(id)initWithSectionComponentGenerationFactory:(/*^block*/id)arg1 changesetWriter:(id)arg2 componentControllerContext:(id)arg3 userInfoMergeBlockMap:(id)arg4 ;
-(id)initWithSectionComponentGenerationFactory:(/*^block*/id)arg1 componentControllerContext:(id)arg2 userInfoMergeBlockMap:(id)arg3 options:(const FBSectionComponentTrackerOptions*)arg4 ;
-(id)initWithSectionComponentGenerationFactory:(/*^block*/id)arg1 componentControllerContext:(id)arg2 userInfoMergeBlockMap:(id)arg3 ;
-(void)readyForSectionComponentGeneration;
-(void)readyToApplyChangesets;
-(void)setSectionComponentGenerationFactory:(/*^block*/id)arg1 changesetWriter:(id)arg2 componentControllerContext:(id)arg3 ;
-(void)setSectionComponentGenerationFactory:(/*^block*/id)arg1 ;
-(void)reflowSectionComponents_DEPRECATED;
-(void)addTrackerStateListener:(id)arg1 ;
-(void)removeTrackerStateListener:(id)arg1 ;
-(void)_enqueueModifications:(const vector<FBSectionComponentTrackerStateModification, std::__1::allocator<FBSectionComponentTrackerStateModification> >*)arg1 ;
-(void)_executeBlockOnStateQueue:(/*^block*/id)arg1 ;
-(void)_mainThreadEnqueueStateUpdateTransaction:(/*^block*/id)arg1 ;
-(void)_startNextAsynchronousModification;
-(vector<FBSectionComponentTrackerStateModification, std::__1::allocator<FBSectionComponentTrackerStateModification> >*)_createComponentStateUpdateModifications;
-(BOOL)_isRunningOnStateQueue;
-(void)updateStateRequestedForKey:(id)arg1 updateBlock:(/*^block*/id)arg2 userInfo:(id)arg3 ;
-(void)_finishComponentGenerationWithGenerationType:(unsigned long long)arg1 results:(FBSectionComponentTrackerStateModificationResults*)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)dealloc;
@end

