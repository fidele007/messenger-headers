/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, MNMessageSendDoublePhaseStatesRestoreListening, MNMessageSendGenericDiskHandlingDelegate;
@class NSObject, NSMutableDictionary, FBTimeThrottler;

@interface MNMessageSendDoublePhaseStateStore : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _doublePhaseStatesByOfflineThreadingId;
	FBTimeThrottler* _throttler;
	id<MNMessageSendDoublePhaseStatesRestoreListening> _stateRestoreListener;
	id<MNMessageSendGenericDiskHandlingDelegate> _diskHandlingDelegate;

}
-(void)_readFromDisk;
-(void)_writeToDisk;
-(void)_setDoublePhaseState:(id)arg1 forOfflineThreadingId:(id)arg2 ;
-(void)_scheduleToWriteToDisk;
-(void)_didRestoreLoadingStates:(id)arg1 ;
-(id)initWithQueue:(id)arg1 diskHandlingDelegate:(id)arg2 stateRestoreListener:(id)arg3 ;
-(void)addDoublePhaseState:(id)arg1 forOfflineThreadingId:(id)arg2 ;
-(void)removeDoublePhaseStateForOfflineThreadingId:(id)arg1 ;
-(void)updateDoublePhaseState:(id)arg1 forOfflineThreadingId:(id)arg2 ;
-(id)doublePhaseStateForOfflineThreadingId:(id)arg1 ;
@end

