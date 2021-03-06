/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:34 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class FBWebViewController;


@protocol FBBrowserExtensionDelegate <NSObject>
@property (assign,nonatomic,__weak) id<FBBrowserExtensionCallbackHandling> extensionCallbackHandling; 
@property (assign,nonatomic,__weak) id<FBBrowserExtensionNavigationProtocol> extensionNavigationHandler; 
@property (assign,nonatomic,__weak) FBWebViewController * webViewController; 
@property (nonatomic,retain) id<FBBrowserExtensionLoggerProtocol> logger; 
@required
-(void)setExtensionNavigationHandler:(id)arg1;
-(id)pageTermsAndPoliciesURL;
-(BOOL)isGetGrantedPermissionEnabled;
-(id)pageShoppingCartURL;
-(BOOL)isThreadContextAvailable;
-(BOOL)hasGrantedLocationPermissionForAppID:(id)arg1;
-(void)setLocationPermissionForAppID:(id)arg1 hasPermission:(BOOL)arg2;
-(id)pageDisplayName;
-(id)facebookTermsAndPoliciesURL;
-(id)appIconUrl;
-(BOOL)isURLWhitelisted:(id)arg1;
-(long long)checkoutLogoStyle;
-(BOOL)canHandleGetSupportedFeaturesMessage;
-(BOOL)isPaymentsFlowEnabled;
-(void)presentPaymentsFlowWithCheckoutConfiguration:(id)arg1 failureBlock:(/*^block*/id)arg2;
-(void)updateShoppingCartItemCount:(long long)arg1;
-(void)presentRequestUserInfoFieldDialogWithPermissionStrings:(id)arg1 websiteURL:(id)arg2 messageName:(id)arg3 successBlock:(/*^block*/id)arg4 failureBlock:(/*^block*/id)arg5;
-(BOOL)isShareFlowEnabled;
-(void)presentShareFlowWithPreviewContent:(id)arg1 shareContent:(id)arg2 successBlock:(/*^block*/id)arg3 failureBlock:(/*^block*/id)arg4;
-(BOOL)requestCloseExtension;
-(void)fetchGrantedPermissionsWithSuccessBlock:(/*^block*/id)arg1 failureBlock:(/*^block*/id)arg2;
-(void)fetchThreadContextWithSuccessBlock:(/*^block*/id)arg1 failureBlock:(/*^block*/id)arg2;
-(id<FBBrowserExtensionCallbackHandling>)extensionCallbackHandling;
-(void)setExtensionCallbackHandling:(id)arg1;
-(id<FBBrowserExtensionNavigationProtocol>)extensionNavigationHandler;
-(id)adID;
-(id)appScopedUserID;
-(id)pageScopedUserID;
-(id)logSource;
-(id)appDisplayName;
-(id)pageID;
-(FBWebViewController *)webViewController;
-(void)setWebViewController:(id)arg1;
-(id)appID;
-(id<FBBrowserExtensionLoggerProtocol>)logger;
-(void)setLogger:(id)arg1;

@end

