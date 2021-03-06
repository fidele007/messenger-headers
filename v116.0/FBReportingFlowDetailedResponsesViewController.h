/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:55 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol FBReportingFlowCoordinatorDelegateProtocol;
@class FBReportingFlowPromptModel, FBReportingFlowDetailedResponsesView, NSMutableDictionary, NSIndexPath, FBUserSession, NSString;

@interface FBReportingFlowDetailedResponsesViewController : UIViewController <UIAlertViewDelegate, UITableViewDataSource, UITableViewDelegate> {

	FBReportingFlowPromptModel* _promptModel;
	FBReportingFlowDetailedResponsesView* _detailedResponsesView;
	NSMutableDictionary* _responseState;
	id<FBReportingFlowCoordinatorDelegateProtocol> _coordinator;
	NSIndexPath* _lastRequestedBranchIndexPath;
	FBUserSession* _userSession;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCoordinator:(id)arg1 promptModel:(id)arg2 userSession:(id)arg3 ;
-(void)performGuidedAction:(long long)arg1 completionBlock:(/*^block*/id)arg2 ;
-(long long)responseStateForRowAtIndexPath:(id)arg1 ;
-(void)loadImage:(id)arg1 forCell:(id)arg2 ;
-(id)titleForRowAtIndexPath:(id)arg1 ;
-(id)subtitleForRowAtIndexPath:(id)arg1 ;
-(void)didPressConfirmationButton:(id)arg1 ;
-(void)setResponseState:(long long)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)didPressConfirmationButtonWithRow:(int)arg1 ;
-(void)cancelBarButtonWasPressed;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)_updateDismissButton;
@end

