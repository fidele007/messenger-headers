/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBWebViewAnalytics.h>

@class NSString;

@interface FBFacebookWebViewAnalytics : NSObject <FBWebViewAnalytics>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)webViewCancelPendingLogEvent:(id)arg1 ;
-(void)webViewLogDidStopNavigation:(id)arg1 ;
-(void)webView:(id)arg1 logDidStopNavigationFailed:(id)arg2 ;
-(void)logWKCookieInjectionStarted;
-(void)logWKCookieInjectionCompleted;
-(void)logWKCookieInjectionEventData:(id)arg1 ;
@end

