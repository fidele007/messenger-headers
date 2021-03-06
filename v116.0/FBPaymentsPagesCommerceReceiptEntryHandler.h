/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:51 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPaymentsReceiptViewControllerDelegate.h>

@protocol FBPaymentsNavigationDelegate;
@class FBUserSession, FBPaymentsReceiptInfo, FBPaymentsDefaultReceiptConfigurationProvider, FBPaymentsReceiptViewController, NSString;

@interface FBPaymentsPagesCommerceReceiptEntryHandler : NSObject <FBPaymentsReceiptViewControllerDelegate> {

	FBUserSession* _session;
	FBPaymentsReceiptInfo* _receiptInfo;
	FBPaymentsDefaultReceiptConfigurationProvider* _receiptConfigurationProvider;
	FBPaymentsReceiptViewController* _receiptViewController;
	NSString* _actorID;
	id<FBPaymentsNavigationDelegate> _navigationDelegate;

}

@property (assign,nonatomic,__weak) id<FBPaymentsNavigationDelegate> navigationDelegate;              //@synthesize navigationDelegate=_navigationDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_presentReceiptViewControllerWithReceiptConfiguration:(id)arg1 ;
-(void)_udpateReceiptViewControllerWithUpdatedReceiptConfiguration:(id)arg1 ;
-(id)initWithSession:(id)arg1 receiptInfo:(id)arg2 actorID:(id)arg3 ;
-(void)paymentsReceiptViewController:(id)arg1 didPerformActionForReceiptWithProductID:(id)arg2 ;
-(void)presentPaymentsReceiptViewController;
-(id<FBPaymentsNavigationDelegate>)navigationDelegate;
-(void)setNavigationDelegate:(id<FBPaymentsNavigationDelegate>)arg1 ;
@end

