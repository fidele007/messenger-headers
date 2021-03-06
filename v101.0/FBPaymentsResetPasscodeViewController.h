/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:22 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITextFieldDelegate.h>
#import <Messenger/FBPaymentsUpdateListener.h>

@protocol FBPaymentsConnectionStatusProviding, FBPaymentsLoadingIndicatorControlling, FBPaymentsResetPasscodeViewControllerDelegate;
@class FBPaymentsPINController, FBRichTextView, UITextField, UIView, NSString;

@interface FBPaymentsResetPasscodeViewController : UIViewController <UITextFieldDelegate, FBPaymentsUpdateListener> {

	FBPaymentsPINController* _paymentPinController;
	id<FBPaymentsConnectionStatusProviding> _connectionStatusService;
	FBRichTextView* _titleTextView;
	UITextField* _passwordTextField;
	id<FBPaymentsLoadingIndicatorControlling> _loadingIndicatorController;
	UIView* _passwordBaselineView;
	id<FBPaymentsResetPasscodeViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBPaymentsResetPasscodeViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didUpdateWithAnnouncerIdentifier:(id)arg1 ;
-(id)initWithPaymentPinController:(id)arg1 connectionStatusService:(id)arg2 ;
-(void)_resetPinWithPassword:(id)arg1 ;
-(void)_handleResetPinCallback:(BOOL)arg1 error:(id)arg2 ;
-(void)_handleFailToResetPinWithError:(id)arg1 ;
-(void)setDelegate:(id<FBPaymentsResetPasscodeViewControllerDelegate>)arg1 ;
-(id<FBPaymentsResetPasscodeViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidLayoutSubviews;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
@end

