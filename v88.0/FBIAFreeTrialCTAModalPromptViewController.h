/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/CKComponentProvider.h>
#import <Messenger/CKComponentHostingViewDelegate.h>

@protocol FBIntentHandler;
@class CKComponentHostingView, FBMemPage, NSURL, NSString, FBUserSession;

@interface FBIAFreeTrialCTAModalPromptViewController : UIViewController <CKComponentProvider, CKComponentHostingViewDelegate> {

	CKComponentHostingView* _hostingView;
	FBMemPage* _page;
	double _trialDuration;
	NSURL* _termsOfServiceURL;
	NSString* _ctaID;
	NSString* _articleID;
	FBUserSession* _session;
	id<FBIntentHandler> _intentHandler;
	/*^block*/id _contentSizeInvalidatedBlock;
	/*^block*/id _dismissBlock;

}

@property (nonatomic,readonly) FBMemPage * page;                                  //@synthesize page=_page - In the implementation block
@property (nonatomic,readonly) double trialDuration;                              //@synthesize trialDuration=_trialDuration - In the implementation block
@property (nonatomic,readonly) NSURL * termsOfServiceURL;                         //@synthesize termsOfServiceURL=_termsOfServiceURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * ctaID;                             //@synthesize ctaID=_ctaID - In the implementation block
@property (nonatomic,copy,readonly) NSString * articleID;                         //@synthesize articleID=_articleID - In the implementation block
@property (nonatomic,readonly) FBUserSession * session;                           //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) id<FBIntentHandler> intentHandler;                 //@synthesize intentHandler=_intentHandler - In the implementation block
@property (nonatomic,readonly) id contentSizeInvalidatedBlock;                    //@synthesize contentSizeInvalidatedBlock=_contentSizeInvalidatedBlock - In the implementation block
@property (nonatomic,readonly) id dismissBlock;                                   //@synthesize dismissBlock=_dismissBlock - In the implementation block
@property (nonatomic,readonly) CKComponentHostingView * hostingView;              //@synthesize hostingView=_hostingView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)componentForModel:(id)arg1 context:(id)arg2 ;
-(id)dismissBlock;
-(CKComponentHostingView *)hostingView;
-(id<FBIntentHandler>)intentHandler;
-(NSURL *)termsOfServiceURL;
-(void)_didTapDismissButton;
-(NSString *)articleID;
-(NSString *)ctaID;
-(void)componentHostingViewDidInvalidateSize:(id)arg1 ;
-(id)contentSizeInvalidatedBlock;
-(double)trialDuration;
-(void)_didTapTermsOfServiceLink;
-(void)_didTapSignUpButton;
-(id)initWithPage:(id)arg1 trialDuration:(double)arg2 termsOfServiceURL:(id)arg3 ctaID:(id)arg4 articleID:(id)arg5 session:(id)arg6 intentHandler:(id)arg7 contentSizeInvalidatedBlock:(/*^block*/id)arg8 dismissBlock:(/*^block*/id)arg9 ;
-(void)loadView;
-(void)viewDidLoad;
-(FBMemPage *)page;
-(FBUserSession *)session;
@end
