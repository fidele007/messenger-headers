/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:01 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIWindow;

@interface FBStatusBarWindowTracker : NSObject {

	BOOL _tracking;
	UIWindow* _statusBarWindow;

}

@property (assign,getter=isTracking,nonatomic) BOOL tracking;              //@synthesize tracking=_tracking - In the implementation block
@property (nonatomic,retain) UIWindow * statusBarWindow;                   //@synthesize statusBarWindow=_statusBarWindow - In the implementation block
+(id)sharedTracker;
-(void)_windowDidBecomeVisible:(id)arg1 ;
-(void)dealloc;
-(UIWindow *)statusBarWindow;
-(BOOL)isTracking;
-(void)setTracking:(BOOL)arg1 ;
-(void)setStatusBarWindow:(UIWindow *)arg1 ;
-(void)stopTracking;
-(void)startTracking;
@end

