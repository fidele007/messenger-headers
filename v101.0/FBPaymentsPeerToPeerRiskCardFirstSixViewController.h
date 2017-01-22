/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:19 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <Messenger/FBPaymentsPeerToPeerRiskViewControllerProtocol.h>
#import <UIKit/UITableViewDelegate.h>
#import <Messenger/FBPaymentsFormTextFieldViewDelegate.h>

@protocol FBPaymentsPeerToPeerRiskViewControllerDelegate;
@class FBPaymentsPeerToPeerRiskSectionHeaderView, FBPaymentsPeerToPeerRiskSectionFooterView, FBPaymentsPeerToPeerRiskCardFirstSixBodyView, FBPaymentsPeerToPeerRiskTableViewDataSource, NSString;

@interface FBPaymentsPeerToPeerRiskCardFirstSixViewController : UITableViewController <FBPaymentsPeerToPeerRiskViewControllerProtocol, UITableViewDelegate, FBPaymentsFormTextFieldViewDelegate> {

	FBPaymentsPeerToPeerRiskSectionHeaderView* _headerView;
	FBPaymentsPeerToPeerRiskSectionFooterView* _footerView;
	FBPaymentsPeerToPeerRiskCardFirstSixBodyView* _bodyView;
	FBPaymentsPeerToPeerRiskTableViewDataSource* _dataSource;
	id<FBPaymentsPeerToPeerRiskViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBPaymentsPeerToPeerRiskViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithRiskCardIssuer:(id)arg1 lastFourDigits:(id)arg2 ;
-(void)_didTapLearnMoreButton:(id)arg1 ;
-(void)_onCancelVerification;
-(void)_onTapNextButton;
-(void)didStartFetchNextStep;
-(void)didFinishFetchingNextStepWithError:(id)arg1 ;
-(void)didFailedLastAttempt;
-(void)formTextFieldViewDidChange:(id)arg1 isUserInput:(BOOL)arg2 isCompleted:(BOOL)arg3 errorDescription:(id)arg4 shouldAlert:(BOOL)arg5 ;
-(void)setDelegate:(id<FBPaymentsPeerToPeerRiskViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id<FBPaymentsPeerToPeerRiskViewControllerDelegate>)delegate;
-(BOOL)resignFirstResponder;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
@end
