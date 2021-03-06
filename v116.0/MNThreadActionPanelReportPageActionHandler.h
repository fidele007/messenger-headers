/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:47 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNThreadActionPanelActionHandling.h>

@protocol MNThreadClientSummaryUpdateCreating;
@class FBMThreadKey, FBUserSession, MNReportPageAction, MNNavigationCoordinator, MNBlockUserFullScreenViewController, NSString;

@interface MNThreadActionPanelReportPageActionHandler : NSObject <MNThreadActionPanelActionHandling> {

	FBMThreadKey* _threadKey;
	FBUserSession* _session;
	MNReportPageAction* _reportPageAction;
	MNNavigationCoordinator* _navigationCoordinator;
	MNBlockUserFullScreenViewController* _blockUserFullScreenViewController;
	id<MNThreadClientSummaryUpdateCreating> _summaryUpdateCreator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleActionWithDelegate:(id)arg1 ;
-(void)dismissActionSheets;
-(id)initWithThreadKey:(id)arg1 session:(id)arg2 reportPageAction:(id)arg3 navigationCoordinator:(id)arg4 blockUserVC:(id)arg5 summaryUpdateCreator:(id)arg6 ;
@end

