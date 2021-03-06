/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNAuthenticationManager;
@class MNThreadSummaryUpdateDispatcher, MNThreadMessageUpdater;

@interface MNThreadUpdater : NSObject {

	id<MNAuthenticationManager> _authManager;
	MNThreadSummaryUpdateDispatcher* _summaryUpdateDispatcher;
	MNThreadMessageUpdater* _messageUpdater;

}
-(id)initWithAuthenticationManager:(id)arg1 ;
-(id)dependentThreadSummaryUpdatesForAPNSUpdate:(id)arg1 ;
-(id)applySummaryUpdate:(id)arg1 toThreadSummary:(id)arg2 ;
-(BOOL)applyMessageUpdate:(id)arg1 toMessageSetBuilder:(id)arg2 ;
-(id)dependentThreadSummaryUpdatesForMessageUpdate:(id)arg1 updatedMessageSet:(id)arg2 ;
@end

