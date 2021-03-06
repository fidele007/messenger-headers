/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:05 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBListComponentTracker.h>
#import <Messenger/FBListComponentStateChangeListener.h>
#import <Messenger/FBListComponentTrackerComponentGenerationModificationDelegate.h>
#import <Messenger/FBListComponentTrackerChangsetGenerationModificationDelegate.h>
#import <Messenger/FBListComponentTrackerStateUpdateModificationDelegate.h>

@protocol FBComponentChangesetWriter, NSObject, OS_dispatch_queue;
@class FBListComponentTrackerStateListenerAnnouncer, NSDictionary, NSObject, FBListComponentTrackerState, FBListComponentTrackerStateUpdateModification, NSString;

@interface FBListComponentTracker_BackgroundGenSupport : FBListComponentTracker <FBListComponentStateChangeListener, FBListComponentTrackerComponentGenerationModificationDelegate, FBListComponentTrackerChangsetGenerationModificationDelegate, FBListComponentTrackerStateUpdateModificationDelegate> {

	/*^block*/id _componentGenerationBlock;
	id<FBComponentChangesetWriter> _changesetWriter;
	unsigned long long _changesetWriterState;
	id<NSObject> _componentControllerContext;
	FBListComponentTrackerStateListenerAnnouncer* _announcer;
	NSDictionary* _userInfoMergeBlockMap;
	NSObject*<OS_dispatch_queue> _backgroundQueue;
	FBListComponentTrackerState* _state;
	FBListComponentTrackerStateUpdateModification* _pendingStateUpdateModification;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)componentWillDisappear;
-(void)componentDidAppear;
-(void)didScrollToBottom;
-(void)didScrollToTop;
-(void)didPullToRefresh;
-(void)didRequestReload;
-(void)didRequestPrefetchingData;
-(void)componentWillAppear;
-(void)componentDidDisappear;
-(id)initWithComponentGenerationBlock:(/*^block*/id)arg1 changesetWriter:(id)arg2 componentControllerContext:(id)arg3 userInfoMergeBlockMap:(id)arg4 options:(const FBListComponentTrackerOptions*)arg5 ;
-(id)initWithComponentGenerationBlock:(/*^block*/id)arg1 changesetWriter:(id)arg2 componentControllerContext:(id)arg3 userInfoMergeBlockMap:(id)arg4 ;
-(id)initWithComponentGenerationBlock:(/*^block*/id)arg1 componentControllerContext:(id)arg2 userInfoMergeBlockMap:(id)arg3 options:(const FBListComponentTrackerOptions*)arg4 ;
-(id)initWithComponentGenerationBlock:(/*^block*/id)arg1 componentControllerContext:(id)arg2 userInfoMergeBlockMap:(id)arg3 ;
-(void)readyForChangesets;
-(void)setComponentGenerationBlock:(/*^block*/id)arg1 changesetWriter:(id)arg2 componentControllerContext:(id)arg3 ;
-(void)setComponentGenerationBlock:(/*^block*/id)arg1 ;
-(void)addTrackerStateListener:(id)arg1 ;
-(void)removeTrackerStateListener:(id)arg1 ;
-(void)_executeBlockOnStateQueue:(/*^block*/id)arg1 mode:(unsigned long long)arg2 ;
-(void)_writeState:(/*^block*/id)arg1 mode:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(FBListComponentTrackerBeginStateUpdateModificationData)_beginStateUpdateTransaction;
-(id)_endStateUpdateTransaction;
-(void)_generateComponentWithGenerationType:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_enqueueStateUpdateModificationWithUpdateAction:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_finishGeneratingComponentWithGenerationType:(unsigned long long)arg1 previousComponent:(id)arg2 updatedComponent:(id)arg3 stateUpdateModification:(id)arg4 ;
-(void)_enqueueModification:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_readState:(/*^block*/id)arg1 mode:(unsigned long long)arg2 ;
-(void)_executeStateUpdateTransaction:(/*^block*/id)arg1 ;
-(void)updateStateRequestedForKey:(id)arg1 updateBlock:(/*^block*/id)arg2 userInfo:(id)arg3 ;
-(void)changesetGenerationModificationWillGenerateChangeset;
-(void)changesetGenerationModificationDidGenerateChangeset:(id)arg1 userInfo:(id)arg2 ;
-(void)componentGenerationModificationWillGenerateComponent;
-(void)componentGenerationModificationDidGenerateComponent:(id)arg1 currentStates:(id)arg2 ;
-(void)stateUpdateModificationDidUpdateStateWithOldValues:(id)arg1 currentState:(id)arg2 ;
-(void)dealloc;
-(long long)numberOfSections;
@end

