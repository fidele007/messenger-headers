/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:54 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBMMessagesSnapshotStateMachineDelegate <NSObject>
@required
-(void)messagesSnapshotStateMachineDidCompleteNonCriticalFetch:(id)arg1;
-(void)messagesSnapshotStateMachine:(id)arg1 criticalFetchDidFailWithError:(id)arg2;
-(void)messagesSnapshotStateMachine:(id)arg1 stateDidChangeFrom:(unsigned long long)arg2 toState:(unsigned long long)arg3;

@end

