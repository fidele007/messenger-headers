/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:22 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
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
-(void)_updateDismissButton;
-(void)cancelBarButtonWasPressed;
-(long long)responseStateForRowAtIndexPath:(id)arg1 ;
-(id)titleForRowAtIndexPath:(id)arg1 ;
-(id)subtitleForRowAtIndexPath:(id)arg1 ;
-(void)didPressConfirmationButton:(id)arg1 ;
-(void)setResponseState:(long long)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)didPressConfirmationButtonWithRow:(int)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
@end

