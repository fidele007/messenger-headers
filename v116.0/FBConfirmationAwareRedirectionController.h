/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:53 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBConfirmationAwareRedirectionControllerDelegate;
@class NSURL, NSNotificationCenter, UIApplication, FBUserSession, NSDictionary;

@interface FBConfirmationAwareRedirectionController : NSObject {

	NSURL* _redirectionURL;
	NSNotificationCenter* _notificationCenter;
	UIApplication* _application;
	FBUserSession* _session;
	BOOL _applicationDidResignActive;
	BOOL _applicationDidBecomeActiveAfterRedirectionAttempt;
	id<FBConfirmationAwareRedirectionControllerDelegate> _delegate;
	NSDictionary* _context;

}

@property (assign,nonatomic,__weak) id<FBConfirmationAwareRedirectionControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * context;                                                     //@synthesize context=_context - In the implementation block
-(void)_stopObservingApplicationLifecycleEvents;
-(void)_cancelCheckingForCancelButtonPress;
-(void)_startObservingApplicationLifecycleEvents;
-(void)_applicationWillResignActiveHandler;
-(void)_applicationDidBecomeActiveHandler;
-(void)_applicationDidEnterBackgroundHandler;
-(void)_startCheckingForCancelButtonPress;
-(void)_didRedirectWithPositiveConfirmation;
-(void)_didRedirectWithoutConfirmation;
-(void)_didCancelRedirection;
-(id)initWithRedirectionURL:(id)arg1 notificationCenter:(id)arg2 application:(id)arg3 context:(id)arg4 session:(id)arg5 ;
-(void)setDelegate:(id<FBConfirmationAwareRedirectionControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBConfirmationAwareRedirectionControllerDelegate>)delegate;
-(NSDictionary *)context;
-(void)_cancelButtonPressed;
-(void)redirect;
@end

