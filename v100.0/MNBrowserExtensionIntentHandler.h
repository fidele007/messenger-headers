/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:29 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextClassProvidable.h>
#import <Messenger/FBBrowserExtensionNavigationProtocol.h>

@protocol FBProvider, MNUserInvalidating, MNModalPresentation;
@class FBUserSession, UIViewController, MNBrowserExtensionWebViewDelegate, MNBusinessBottomSheetViewController, MNBrowserExtensionHandlerDelegate, FBBrowserExtensionResumeURLMutator, NSString;

@interface MNBrowserExtensionIntentHandler : NSObject <FBViewerContextClassProvidable, FBBrowserExtensionNavigationProtocol> {

	FBUserSession* _session;
	id<FBProvider> _pluginManagerProvider;
	UIViewController* _presentedNavigationController;
	MNBrowserExtensionWebViewDelegate* _webViewDelegate;
	id<MNUserInvalidating> _userInvalidator;
	MNBusinessBottomSheetViewController* _bottomSheetController;
	id<MNModalPresentation> _modalPresentation;
	MNBrowserExtensionHandlerDelegate* _browserExtensionHandlerDelegate;
	FBBrowserExtensionResumeURLMutator* _resumeURLMutator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)urlForMessengerExtensionIntent:(id)arg1 ;
-(BOOL)handleIntent:(id)arg1 withWebViewController:(id)arg2 ;
-(id)initWithSession:(id)arg1 pluginManagerProvider:(id)arg2 userInvalidator:(id)arg3 modalPresentation:(id)arg4 browserExtensionHandlerDelegate:(id)arg5 ;
-(BOOL)_presentWebViewController:(id)arg1 withURL:(id)arg2 pageID:(id)arg3 appScopedUserID:(id)arg4 pageScopedUserID:(id)arg5 whitelistedDomainNames:(id)arg6 logSource:(id)arg7 surface:(id)arg8 browserDisplayHeightRatio:(double)arg9 shouldHideBrowserBottomBar:(BOOL)arg10 ;
-(void)_presentInActionSheetWebViewController:(id)arg1 browserDisplayHeightRatio:(double)arg2 ;
-(void)_presentFullScreenWebViewController:(id)arg1 ;
-(void)_messengerExtensionFlowDidComplete;
-(void)_dismissWebView;
-(void)closeExtension;
@end

