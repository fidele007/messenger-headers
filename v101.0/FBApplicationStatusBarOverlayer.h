/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBStatusBarTrackingWindowDelegate.h>
#import <Messenger/FBStatusBarOverlayer.h>

@class FBStatusBarOverlay, FBTimer, UILabel, FBStatusBarTrackingWindow, NSString;

@interface FBApplicationStatusBarOverlayer : NSObject <FBStatusBarTrackingWindowDelegate, FBStatusBarOverlayer> {

	id _actionListener;
	FBStatusBarOverlay* _currentOverlay;
	FBTimer* _toastHideTimer;
	UILabel* _toastLabel;
	FBStatusBarTrackingWindow* _toastWindow;
	FBStatusBarTrackingWindow* _underlayWindow;
	BOOL _isPresenting;

}

@property (nonatomic,readonly) BOOL isPresenting;                   //@synthesize isPresenting=_isPresenting - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)overlayStatusBarWithOverlay:(id)arg1 actionListener:(id)arg2 ;
-(void)_showUnderlayWithColor:(id)arg1 ;
-(void)_showToastForOverlay:(id)arg1 ;
-(void)_hideUnderlay;
-(void)_hideToast;
-(void)statusBarTrackingWindow:(id)arg1 wasTappedInContainerView:(id)arg2 ;
-(void)removeOverlay:(id)arg1 ;
-(BOOL)isPresenting;
@end

