/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:48 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNThreadViewModelConfigurable.h>

@protocol MNThreadMembersUpdaterDelegate;
@class NSMutableSet, MNThreadUpdateRunningService, MNThreadViewModel, NSString;

@interface MNThreadMembersUpdater : NSObject <MNThreadViewModelConfigurable> {

	NSMutableSet* _participantsWithOutstandingRequests;
	MNThreadUpdateRunningService* _summaryUpdateRunningService;
	id<MNThreadMembersUpdaterDelegate> _delegate;
	MNThreadViewModel* _threadViewModel;

}

@property (nonatomic,retain) MNThreadViewModel * threadViewModel;                             //@synthesize threadViewModel=_threadViewModel - In the implementation block
@property (assign,nonatomic,__weak) id<MNThreadMembersUpdaterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)configureThreadViewModelDependenciesWith:(id)arg1 ;
-(void)tearDownThreadViewModelDependencies;
-(MNThreadViewModel *)threadViewModel;
-(void)setThreadViewModel:(MNThreadViewModel *)arg1 ;
-(void)_didRemoveParticipant:(id)arg1 ;
-(void)_couldNotRemoveParticipant:(id)arg1 error:(id)arg2 ;
-(void)_notfifyDelegateIfAllRequestsFinished;
-(id)initWithSummaryUpdateRunningService:(id)arg1 ;
-(void)sendRemoveRequestForParticipantWithUserId:(id)arg1 ;
-(void)setDelegate:(id<MNThreadMembersUpdaterDelegate>)arg1 ;
-(id<MNThreadMembersUpdaterDelegate>)delegate;
@end

