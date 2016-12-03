/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:07 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBIntentTarget.h>

@class NSString, FBMemPlatformApplication, NSArray, NSURL, NSDictionary;

@interface FBBrowserExtensionIntentTarget : FBIntentTarget {

	NSString* _appID;
	FBMemPlatformApplication* _app;
	NSString* _pageID;
	NSString* _pageName;
	NSString* _pageTermsAndPoliciesURLString;
	NSString* _pageShoppingCartURLString;
	long long _pageShoppingCartItemCount;
	NSString* _adID;
	NSString* _appScopedUserID;
	NSString* _pageScopedUserID;
	NSArray* _whitelistedDomainNames;
	NSURL* _extensionUrl;
	NSString* _logSource;
	NSString* _surface;
	NSDictionary* _offerData;

}

@property (nonatomic,readonly) double browserDisplayHeightRatio; 
@property (nonatomic,readonly) BOOL shouldHideBrowserBottomBar; 
@property (nonatomic,copy,readonly) NSString * appID;                                      //@synthesize appID=_appID - In the implementation block
@property (nonatomic,copy,readonly) FBMemPlatformApplication * app;                        //@synthesize app=_app - In the implementation block
@property (nonatomic,copy,readonly) NSString * pageID;                                     //@synthesize pageID=_pageID - In the implementation block
@property (nonatomic,copy,readonly) NSString * pageName;                                   //@synthesize pageName=_pageName - In the implementation block
@property (nonatomic,copy,readonly) NSString * pageTermsAndPoliciesURLString;              //@synthesize pageTermsAndPoliciesURLString=_pageTermsAndPoliciesURLString - In the implementation block
@property (nonatomic,copy,readonly) NSString * pageShoppingCartURLString;                  //@synthesize pageShoppingCartURLString=_pageShoppingCartURLString - In the implementation block
@property (nonatomic,readonly) long long pageShoppingCartItemCount;                        //@synthesize pageShoppingCartItemCount=_pageShoppingCartItemCount - In the implementation block
@property (nonatomic,copy,readonly) NSString * adID;                                       //@synthesize adID=_adID - In the implementation block
@property (nonatomic,copy,readonly) NSString * appScopedUserID;                            //@synthesize appScopedUserID=_appScopedUserID - In the implementation block
@property (nonatomic,copy,readonly) NSString * pageScopedUserID;                           //@synthesize pageScopedUserID=_pageScopedUserID - In the implementation block
@property (nonatomic,copy,readonly) NSArray * whitelistedDomainNames;                      //@synthesize whitelistedDomainNames=_whitelistedDomainNames - In the implementation block
@property (nonatomic,copy,readonly) NSURL * extensionUrl;                                  //@synthesize extensionUrl=_extensionUrl - In the implementation block
@property (nonatomic,copy,readonly) NSString * logSource;                                  //@synthesize logSource=_logSource - In the implementation block
@property (nonatomic,copy,readonly) NSString * surface;                                    //@synthesize surface=_surface - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * offerData;                              //@synthesize offerData=_offerData - In the implementation block
+(id)messengerExtensionTargetForNativeURL:(id)arg1 browserDisplayHeightRatio:(double)arg2 surface:(id)arg3 shouldHideBrowserBottomBar:(BOOL)arg4 ;
+(id)intentTargetForPageID:(id)arg1 pageName:(id)arg2 pageTermsAndPoliciesURLString:(id)arg3 pageShoppingCartURLString:(id)arg4 pageShoppingCartItemCount:(long long)arg5 adID:(id)arg6 appScopedUserID:(id)arg7 pageScopedUserID:(id)arg8 whitelistedDomainNames:(id)arg9 extensionUrlString:(id)arg10 logSource:(id)arg11 surface:(id)arg12 ;
+(id)intentTargetForInstantExperienceForAppID:(id)arg1 app:(id)arg2 pageID:(id)arg3 pageName:(id)arg4 adID:(id)arg5 appScopedUserID:(id)arg6 pageScopedUserID:(id)arg7 whitelistedDomainNames:(id)arg8 extensionUrlString:(id)arg9 offerData:(id)arg10 logSource:(id)arg11 ;
-(double)browserDisplayHeightRatio;
-(NSURL *)extensionUrl;
-(NSString *)appScopedUserID;
-(NSString *)pageScopedUserID;
-(NSArray *)whitelistedDomainNames;
-(NSString *)logSource;
-(BOOL)shouldHideBrowserBottomBar;
-(NSString *)adID;
-(id)fallbackURLs;
-(NSString *)pageName;
-(NSString *)pageTermsAndPoliciesURLString;
-(NSString *)pageShoppingCartURLString;
-(long long)pageShoppingCartItemCount;
-(NSDictionary *)offerData;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)pageID;
-(FBMemPlatformApplication *)app;
-(NSString *)appID;
-(NSString *)surface;
@end

