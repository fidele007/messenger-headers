/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:52 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPaymentsPurchaseInfoExtension.h>

@protocol FBPaymentsPurchaseInfoExtensionDelegate, FBPaymentsNavigationDelegate;
@class FBPaymentsPurchaseInfoPrivacyDisclaimerExtensionViewFactory, NSString, FBComposerPrivacySetting;

@interface FBPaymentsPurchaseInfoPrivacyDisclaimerExtension : NSObject <FBPaymentsPurchaseInfoExtension> {

	FBPaymentsPurchaseInfoPrivacyDisclaimerExtensionViewFactory* _viewFactory;
	id<FBPaymentsPurchaseInfoExtensionDelegate> _delegate;
	id<FBPaymentsNavigationDelegate> _navigationDelegate;
	long long _presentationStrategy;
	NSString* _privacyDisclaimerTextPublic;
	NSString* _privacyDisclaimerTextNonPublic;
	FBComposerPrivacySetting* _privacySetting;

}

@property (nonatomic,copy) NSString * privacyDisclaimerTextPublic;                                     //@synthesize privacyDisclaimerTextPublic=_privacyDisclaimerTextPublic - In the implementation block
@property (nonatomic,copy) NSString * privacyDisclaimerTextNonPublic;                                  //@synthesize privacyDisclaimerTextNonPublic=_privacyDisclaimerTextNonPublic - In the implementation block
@property (nonatomic,copy) FBComposerPrivacySetting * privacySetting;                                  //@synthesize privacySetting=_privacySetting - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBPaymentsPurchaseInfoExtensionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<FBPaymentsNavigationDelegate> navigationDelegate;               //@synthesize navigationDelegate=_navigationDelegate - In the implementation block
@property (assign,nonatomic) long long presentationStrategy;                                           //@synthesize presentationStrategy=_presentationStrategy - In the implementation block
+(id)announcerIdentifier;
-(long long)presentationStrategy;
-(BOOL)hasMadeCriticalChanges;
-(id)detailedText;
-(void)handleTapAction;
-(void)resetForCancelingOngoingPayment;
-(void)setPrivacyDisclaimerTextPublic:(NSString *)arg1 ;
-(void)setPrivacyDisclaimerTextNonPublic:(NSString *)arg1 ;
-(void)handleFollowUpAction;
-(id)fieldTitle;
-(id)fieldCollectedData;
-(BOOL)needFollowUp;
-(id)customViewFactory;
-(void)setPresentationStrategy:(long long)arg1 ;
-(NSString *)privacyDisclaimerTextPublic;
-(NSString *)privacyDisclaimerTextNonPublic;
-(id)extensionIdentifier;
-(void)setDelegate:(id<FBPaymentsPurchaseInfoExtensionDelegate>)arg1 ;
-(id<FBPaymentsPurchaseInfoExtensionDelegate>)delegate;
-(id)text;
-(long long)status;
-(id<FBPaymentsNavigationDelegate>)navigationDelegate;
-(FBComposerPrivacySetting *)privacySetting;
-(void)setPrivacySetting:(FBComposerPrivacySetting *)arg1 ;
-(BOOL)isTappable;
-(void)addEventListener:(id)arg1 ;
-(void)removeEventListener:(id)arg1 ;
-(BOOL)isHiddenExtension;
-(void)setNavigationDelegate:(id<FBPaymentsNavigationDelegate>)arg1 ;
-(void)setUp;
@end

