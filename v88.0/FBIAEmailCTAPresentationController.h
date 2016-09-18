/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBEmailCTAModalPresentationViewDelegate.h>
#import <Messenger/FBNASubscriptionCTAPresenting.h>

@protocol FBIntentHandler;
@class FBNativeArticleView, NSString, FBUserSession, FBEmailCTAViewModel, FBEmailCTAModalPresentationView;

@interface FBIAEmailCTAPresentationController : NSObject <FBEmailCTAModalPresentationViewDelegate, FBNASubscriptionCTAPresenting> {

	FBNativeArticleView* _articleView;
	NSString* _articleID;
	FBUserSession* _session;
	FBEmailCTAViewModel* _emailCTA;
	id<FBIntentHandler> _intentHandler;
	FBEmailCTAModalPresentationView* _emailCTAPresentationView;
	BOOL _hasViewed;
	BOOL _hasAccepted;
	BOOL _hasRejected;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_emailCTALogAcceptedEventForArticleID:(id)arg1 ctaID:(id)arg2 emailAddress:(id)arg3 ;
-(void)_emailCTALogViewedEventForArticleID:(id)arg1 ctaID:(id)arg2 ;
-(void)_emailCTAWasViewed;
-(void)_emailCTAWasRejected;
-(void)_emailCTAWasAcceptedWithEmail:(id)arg1 ;
-(void)_emailCTALogRejectedEventForArticleID:(id)arg1 ctaID:(id)arg2 ;
-(void)userDidRejectEmailCTA:(id)arg1 ;
-(void)emailCTAModalPresentationView:(id)arg1 userDidAgreeToShareEmail:(id)arg2 ;
-(void)emailCTAModalPresentationViewFullyDismissedContent:(id)arg1 ;
-(id)initWithArticleView:(id)arg1 articleID:(id)arg2 intentHandler:(id)arg3 session:(id)arg4 viewModel:(id)arg5 ;
-(void)dismissSubscriptionCTA;
-(void)presentSubscriptionCTA;
-(BOOL)shouldDismissSubscriptionCTAOnDragging;
@end
