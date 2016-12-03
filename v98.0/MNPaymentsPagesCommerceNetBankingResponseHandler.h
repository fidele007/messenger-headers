/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:55 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBModalWebFlowDelegate.h>
#import <Messenger/FBWebViewControllerDelegate.h>

@protocol FBPaymentsNavigationDelegate, MNPaymentsPagesCommerceNetBankingResponseHandlerDelegate;
@class FBUserSession, NSURL, NSString, FBWebViewController, FBPaymentsCheckoutLoggingService;

@interface MNPaymentsPagesCommerceNetBankingResponseHandler : NSObject <FBModalWebFlowDelegate, FBWebViewControllerDelegate> {

	FBUserSession* _session;
	NSURL* _dismissUrl;
	NSString* _bankName;
	FBWebViewController* _webViewController;
	FBPaymentsCheckoutLoggingService* _loggingService;
	NSString* _viewContextId;
	id<FBPaymentsNavigationDelegate> _navigationDelegate;
	id<MNPaymentsPagesCommerceNetBankingResponseHandlerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBPaymentsNavigationDelegate> navigationDelegate;                                //@synthesize navigationDelegate=_navigationDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<MNPaymentsPagesCommerceNetBankingResponseHandlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)modalWebFlowControllerDidCancel:(id)arg1 ;
-(void)modalWebFlowControllerDidComplete:(id)arg1 ;
-(void)webViewController:(id)arg1 webViewURLChanged:(id)arg2 ;
-(id)initWithSession:(id)arg1 loggingService:(id)arg2 ;
-(void)handleResponseWithRedirectUrl:(id)arg1 dismissUrl:(id)arg2 bankName:(id)arg3 ;
-(void)_pushWebViewWithURL:(id)arg1 ;
-(void)setDelegate:(id<MNPaymentsPagesCommerceNetBankingResponseHandlerDelegate>)arg1 ;
-(id<MNPaymentsPagesCommerceNetBankingResponseHandlerDelegate>)delegate;
-(id<FBPaymentsNavigationDelegate>)navigationDelegate;
-(void)setNavigationDelegate:(id<FBPaymentsNavigationDelegate>)arg1 ;
@end

