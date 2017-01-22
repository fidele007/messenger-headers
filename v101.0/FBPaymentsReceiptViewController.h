/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:22 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPaymentsSectionBasedTableViewController.h>
#import <Messenger/FBPaymentsReceiptTableViewSectionDelegate.h>
#import <Messenger/FBPaymentsReceiptActionHandlingDelegate.h>
#import <Messenger/FBPaymentsNavigationDelegate.h>

@protocol FBPaymentsReceiptActionHandlersProviding, FBPaymentsReceiptViewControllerDelegate;
@class FBPaymentsReceiptConfiguration, NSMutableDictionary, FBUserSession, NSString;

@interface FBPaymentsReceiptViewController : FBPaymentsSectionBasedTableViewController <FBPaymentsReceiptTableViewSectionDelegate, FBPaymentsReceiptActionHandlingDelegate, FBPaymentsNavigationDelegate> {

	FBPaymentsReceiptConfiguration* _receiptConfiguration;
	NSMutableDictionary* _receiptExtensionViewFactories;
	FBUserSession* _session;
	id<FBPaymentsReceiptActionHandlersProviding> _receiptActionHandlersProvider;
	id<FBPaymentsReceiptViewControllerDelegate> _delegate;

}

@property (nonatomic,retain) id<FBPaymentsReceiptActionHandlersProviding> receiptActionHandlersProvider;              //@synthesize receiptActionHandlersProvider=_receiptActionHandlersProvider - In the implementation block
@property (assign,nonatomic,__weak) id<FBPaymentsReceiptViewControllerDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)newNavigationController;
-(void)paymentsReceiptActionHandler:(id)arg1 didSuccessHandleActionWithProductID:(id)arg2 ;
-(void)paymentsReceiptActionHandler:(id)arg1 didFailHandleActionWithProductID:(id)arg2 ;
-(id)initWithSession:(id)arg1 receiptConfiguration:(id)arg2 ;
-(void)setReceiptActionHandlersProvider:(id<FBPaymentsReceiptActionHandlersProviding>)arg1 ;
-(void)applyReceiptConfiguration:(id)arg1 ;
-(void)_updateTableViewSections;
-(void)_onCancelButtonTapped;
-(void)paymentsReceiptTableViewSection:(id)arg1 didSelectActionWithActionIdentifier:(id)arg2 ;
-(void)_initReceiptExtensionViewFactories;
-(id)_participanTableViewSectionWithViewModel:(id)arg1 ;
-(id<FBPaymentsReceiptActionHandlersProviding>)receiptActionHandlersProvider;
-(void)setDelegate:(id<FBPaymentsReceiptViewControllerDelegate>)arg1 ;
-(id<FBPaymentsReceiptViewControllerDelegate>)delegate;
-(void)_updateNavigationBar;
-(id)viewControllerForPresenting;
@end
