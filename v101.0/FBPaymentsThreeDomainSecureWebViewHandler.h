/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:22 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBWebViewControllerDelegate.h>
#import <Messenger/FBModalWebFlowDelegate.h>

@protocol FBPaymentsNavigationDelegate;
@class FBUserSession, FBPaymentsThreeDomainSecureRedirectModel, NSString;

@interface FBPaymentsThreeDomainSecureWebViewHandler : NSObject <FBWebViewControllerDelegate, FBModalWebFlowDelegate> {

	FBUserSession* _session;
	FBPaymentsThreeDomainSecureRedirectModel* _dataModel;
	/*^block*/id _successBlock;
	/*^block*/id _failureBlock;
	id<FBPaymentsNavigationDelegate> _navigationDelegate;

}

@property (assign,nonatomic,__weak) id<FBPaymentsNavigationDelegate> navigationDelegate;              //@synthesize navigationDelegate=_navigationDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)modalWebFlowControllerDidCancel:(id)arg1 ;
-(void)webViewController:(id)arg1 webViewURLChanged:(id)arg2 ;
-(void)handleThreeDomainSecureWithRedirectDataModel:(id)arg1 successBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(id<FBPaymentsNavigationDelegate>)navigationDelegate;
-(void)setNavigationDelegate:(id<FBPaymentsNavigationDelegate>)arg1 ;
-(id)initWithSession:(id)arg1 ;
@end
