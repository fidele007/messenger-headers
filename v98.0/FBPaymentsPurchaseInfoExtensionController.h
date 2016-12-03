/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:58 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPaymentsEventListener.h>
#import <Messenger/FBPaymentsPurchaseInfoExtensionDelegate.h>
#import <Messenger/FBPaymentsNavigationDelegate.h>
#import <Messenger/FBPaymentsEventAnnouncing.h>

@protocol FBPaymentsPurchaseInfoExtensionControllerDelegate, FBPaymentsNavigationDelegate;
@class NSMutableSet, FBPaymentsEventListenerAnnouncer, NSArray, NSDictionary, NSString;

@interface FBPaymentsPurchaseInfoExtensionController : NSObject <FBPaymentsEventListener, FBPaymentsPurchaseInfoExtensionDelegate, FBPaymentsNavigationDelegate, FBPaymentsEventAnnouncing> {

	NSMutableSet* _extensionsInProcessing;
	FBPaymentsEventListenerAnnouncer* _eventAnnouncer;
	BOOL _hasExtensionsFinishedInitialLoading;
	NSArray* _activatedPurchaseInfoExtensions;
	id<FBPaymentsPurchaseInfoExtensionControllerDelegate> _delegate;
	id<FBPaymentsNavigationDelegate> _navigationDelegate;

}

@property (nonatomic,copy,readonly) NSDictionary * collectedPurchaseInfo; 
@property (nonatomic,readonly) BOOL hasExtensionsFinishedInitialLoading;                                         //@synthesize hasExtensionsFinishedInitialLoading=_hasExtensionsFinishedInitialLoading - In the implementation block
@property (nonatomic,copy) NSArray * activatedPurchaseInfoExtensions;                                            //@synthesize activatedPurchaseInfoExtensions=_activatedPurchaseInfoExtensions - In the implementation block
@property (assign,nonatomic,__weak) id<FBPaymentsPurchaseInfoExtensionControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<FBPaymentsNavigationDelegate> navigationDelegate;                         //@synthesize navigationDelegate=_navigationDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)announcerIdentifier;
-(void)removeEventListener:(id)arg1 ;
-(void)addEventListener:(id)arg1 ;
-(void)didTriggerEventWithName:(id)arg1 announcerIdentifier:(id)arg2 collectedData:(id)arg3 ;
-(NSDictionary *)collectedPurchaseInfo;
-(id)newNavigationController;
-(void)resetForCancelingOngoingPayment;
-(void)setUpExtensions;
-(BOOL)executeNextFollowUpAction;
-(unsigned long long)numberOfFollowUpActionsPending;
-(BOOL)isReadyForCheckout;
-(BOOL)hasMadeCriticalChanges;
-(NSArray *)activatedPurchaseInfoExtensions;
-(void)setActivatedPurchaseInfoExtensions:(NSArray *)arg1 ;
-(BOOL)hasExtensionsFinishedInitialLoading;
-(void)purchaseInfoExtension:(id)arg1 didUpdateFieldWithData:(id)arg2 isUserAction:(BOOL)arg3 ;
-(void)purchaseInfoExtensionDidEndProcessing:(id)arg1 ;
-(void)_updateInitialLoadingStatus;
-(void)_handleFieldUpdateWithIsUserAction:(BOOL)arg1 ;
-(void)purchaseInfoExtensionDidCancelFollowUpAdding:(id)arg1 ;
-(void)purchaseInfoExtensionWillBeginProcessing:(id)arg1 ;
-(void)setDelegate:(id<FBPaymentsPurchaseInfoExtensionControllerDelegate>)arg1 ;
-(id)init;
-(id<FBPaymentsPurchaseInfoExtensionControllerDelegate>)delegate;
-(id<FBPaymentsNavigationDelegate>)navigationDelegate;
-(void)setNavigationDelegate:(id<FBPaymentsNavigationDelegate>)arg1 ;
-(id)viewControllerForPresenting;
@end

