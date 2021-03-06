/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:38 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSURL, NSArray;

@interface FBBrowserArticleAnalytics : NSObject {

	unsigned long long _articleChainingID;
	NSDate* _startTime;
	BOOL _loggedTTI;
	BOOL _isBackgrounded;
	NSURL* _userURL;
	BOOL _hasSecondaryNavigation;
	NSArray* _trackingCodes;

}
-(void)setHasSecondaryNavigation;
-(void)logBrowserDismissed;
-(void)logDidEnterForeground;
-(void)logDidEnterBackground;
-(void)setTrackingCode:(id)arg1 ;
-(void)logBrowserOpenedWithURL:(id)arg1 ;
-(void)logBlockingResourcesLoadedWithURL:(id)arg1 ;
-(void)_logEvent:(id)arg1 ;
-(id)initWithSession:(id)arg1 ;
@end

