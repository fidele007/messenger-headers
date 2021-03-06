/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:56 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FBFullScreenVideoViewControllerConfigBuilder : NSObject {

	unsigned long long _embedStyle;
	BOOL _enableSmartFullscreen;
	BOOL _enableWatchAndScroll;
	unsigned long long _dismissalStyle;
	BOOL _forceAspectFillGravity;
	BOOL _preserveViewManagerMuteState;
	BOOL _preserveViewManagerMuteStateOnDismiss;
	BOOL _disableManagingInstreamAds;
	BOOL _preventAutorotate;
	NSString* _referentialThreadID;

}
+(id)fullScreenVideoViewControllerConfig;
+(id)fullScreenVideoViewControllerConfigFromExistingFullScreenVideoViewControllerConfig:(id)arg1 ;
-(id)withEmbedStyle:(unsigned long long)arg1 ;
-(id)withEnableSmartFullscreen:(BOOL)arg1 ;
-(id)withEnableWatchAndScroll:(BOOL)arg1 ;
-(id)withDismissalStyle:(unsigned long long)arg1 ;
-(id)withForceAspectFillGravity:(BOOL)arg1 ;
-(id)withPreserveViewManagerMuteState:(BOOL)arg1 ;
-(id)withPreserveViewManagerMuteStateOnDismiss:(BOOL)arg1 ;
-(id)withDisableManagingInstreamAds:(BOOL)arg1 ;
-(id)withPreventAutorotate:(BOOL)arg1 ;
-(id)withReferentialThreadID:(id)arg1 ;
-(id)build;
@end

