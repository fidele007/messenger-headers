/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:54 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBFallbackIntentHandlerDelegate.h>
#import <Messenger/FBZeroRatingFenceNavigationDelegate.h>
#import <Messenger/FBModalWebFlowDelegate.h>
#import <Messenger/FBWebViewContainerControllerDelegate.h>
#import <Messenger/FBWebViewControllerDelegate.h>
#import <Messenger/FBModalContainerViewControllerDelegate.h>
#import <Messenger/MNInstantArticleIntentHandlerDelegate.h>
#import <Messenger/FBIntentHandler.h>
#import <Messenger/FBViewerContextClassProvidable.h>

@protocol FBProvider, FBScriptMessageHandling;
@class FBFallbackIntentHandler, MNPaymentsIntentHandler, MNCommerceIntentHandler, MNRideServiceIntentHandler, MNForwardMessageIntentHandler, MNQuicksilverGameIntentHandler, MNRidePromoIntentHandler, MNRideServiceLiveMapIntentHandler, MNBotsGetStartedIntentHandler, MNBrowserExtensionIntentHandler, MNNavigationCoordinator, MNBusinessBottomSheetViewController, FBUserSession, ZRTariffedUrlBoundary, ZRTariffedUxSessionManager, FBMobileConfigContextManager, MNWebViewControllerThemeConfigurer, MNAppThemeConfiguration, MNIntentHandlerConfiguration, FBAnalytics, FBMLoggedInUserInfoManager, MNBrowserLayoutExperimentContext, MNInstantArticleIntentHandler, MNBusinessShareIntentHandler, MNBusinessFavoritesIntentHandler, NSString;

@interface MNIntentHandler : NSObject <FBFallbackIntentHandlerDelegate, FBZeroRatingFenceNavigationDelegate, FBModalWebFlowDelegate, FBWebViewContainerControllerDelegate, FBWebViewControllerDelegate, FBModalContainerViewControllerDelegate, MNInstantArticleIntentHandlerDelegate, FBIntentHandler, FBViewerContextClassProvidable> {

	FBFallbackIntentHandler* _fallbackHandler;
	MNPaymentsIntentHandler* _paymentsHandler;
	MNCommerceIntentHandler* _commerceHandler;
	MNRideServiceIntentHandler* _rideServiceHandler;
	MNForwardMessageIntentHandler* _forwardMessageIntentHandler;
	MNQuicksilverGameIntentHandler* _quicksilverGameIntentHandler;
	MNRidePromoIntentHandler* _ridePromoHandler;
	MNRideServiceLiveMapIntentHandler* _rideMapHandler;
	MNBotsGetStartedIntentHandler* _botsGetStartedIntentHandler;
	MNBrowserExtensionIntentHandler* _messengerExtensionIntentHandler;
	MNNavigationCoordinator* _navigationCoordinator;
	MNBusinessBottomSheetViewController* _bottomSheetController;
	FBUserSession* _userSession;
	ZRTariffedUrlBoundary* _zrURLBoundary;
	ZRTariffedUxSessionManager* _zrSessionManager;
	id<FBProvider> _urlHandlerProvider;
	FBMobileConfigContextManager* _configManager;
	MNWebViewControllerThemeConfigurer* _webVCThemeConfigurer;
	MNAppThemeConfiguration* _appThemeConfiguration;
	MNIntentHandlerConfiguration* _intentHandlerConfiguration;
	FBAnalytics* _analytics;
	FBMLoggedInUserInfoManager* _loggedInUserInfoManager;
	MNBrowserLayoutExperimentContext* _browserLayoutExperimentContext;
	id<FBProvider> _manageMessagesIntentHandlerProvider;
	id<FBScriptMessageHandling> _scriptMessageHandler;
	MNInstantArticleIntentHandler* _instantArticleIntentHandler;
	MNBusinessShareIntentHandler* _businessShareIntentHandler;
	MNBusinessFavoritesIntentHandler* _businessFavoritesIntentHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)handleIntent:(id)arg1 ;
-(id)modalPresentationSource;
-(BOOL)_openURLIntent:(id)arg1 ;
-(BOOL)_openExtendedURLIntent:(id)arg1 ;
-(id)_webViewControllerForURL:(id)arg1 isModal:(BOOL)arg2 ;
-(void)_openWebViewForURL:(id)arg1 browserDisplayHeightRatio:(double)arg2 ;
-(BOOL)_canPresentAsMinimizableModal;
-(id)webViewContainerControllerForURL:(id)arg1 ;
-(void)presentWebViewContainerController:(id)arg1 ;
-(id)_zeroRatingSentryWithSessionName:(id)arg1 forExternalURL:(id)arg2 ;
-(BOOL)_openWebViewIntent:(id)arg1 ;
-(void)_initBrowserLayoutExperimentContextIfNecessary;
-(void)_configureAppLinksForWebViewController:(id)arg1 withURL:(id)arg2 ;
-(void)_sendLinkshimLogRequestIfNecessaryForURL:(id)arg1 ;
-(id)_zeroRatingSentryForZeroRatedURL;
-(BOOL)fallbackIntentHandler:(id)arg1 openWebURL:(id)arg2 ;
-(void)zeroRatingFence:(id)arg1 wantsToPresentInterstitialController:(id)arg2 ;
-(void)zeroRatingFence:(id)arg1 wantsToDismissInterstitialController:(id)arg2 ;
-(void)modalWebFlowControllerDidCancel:(id)arg1 ;
-(void)dismissWebViewContainerController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)switcherTappedInWebViewContainerController:(id)arg1 ;
-(void)webViewController:(id)arg1 webViewTitleChanged:(id)arg2 ;
-(void)webViewController:(id)arg1 didFinishLoadURL:(id)arg2 ;
-(void)dismissModalContainerViewController:(id)arg1 ;
@end
