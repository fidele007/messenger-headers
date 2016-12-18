/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Messenger/Messenger-Structs.h>
@class NSObject, NSMutableArray, FBAppState, FBLazyCreator;

@interface FBAppStateLogger : NSObject {

	BOOL _appStateWasLoaded;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _currentRunApplicationStates;
	NSMutableArray* _lastRunApplicationStates;
	mutex _lastRunDataMutex;
	FBAppState* _finalState;
	FBLazyCreator* _store;

}
-(void)loadApplicationTerminationStateIfNeeded;
-(id)getLaunchReason:(id)arg1 ;
-(void)addNewAppStateAndSave:(id)arg1 ;
-(void)updateApplicationState:(long long)arg1 withNotification:(id)arg2 ;
-(id)getLastApplicationStates;
-(id)getFinalState;
-(id)copyCurrentRunStates;
-(id)initWithStore:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)queue;
@end
