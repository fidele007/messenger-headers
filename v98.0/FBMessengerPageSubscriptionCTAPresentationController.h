/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:59 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBMessengerPageSubscriptionCTAModalPresentationViewDelegate.h>
#import <Messenger/FBNASubscriptionCTAPresenting.h>

@class FBNativeArticleView, NSString, FBUserSession, FBMessengerPageSubscriptionViewModel, FBMessengerPageSubscriptionCTAModalPresentationView;

@interface FBMessengerPageSubscriptionCTAPresentationController : NSObject <FBMessengerPageSubscriptionCTAModalPresentationViewDelegate, FBNASubscriptionCTAPresenting> {

	FBNativeArticleView* _articleView;
	NSString* _articleID;
	FBUserSession* _session;
	BOOL _storyIsVisible;
	BOOL _hasPresentedCTAView;
	FBMessengerPageSubscriptionViewModel* _viewModel;
	FBMessengerPageSubscriptionCTAModalPresentationView* _ctaPresentationView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)shouldDismissSubscriptionCTAOnDragging;
-(void)presentSubscriptionCTA;
-(void)dismissSubscriptionCTA;
-(id)initWithArticleView:(id)arg1 articleID:(id)arg2 session:(id)arg3 viewModel:(id)arg4 ;
-(void)didTapFollowButton:(id)arg1 ;
@end

