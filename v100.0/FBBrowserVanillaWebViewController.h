/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class FBUserSession, NSURL, UIView;

@interface FBBrowserVanillaWebViewController : UIViewController {

	FBUserSession* _session;
	NSURL* _URL;
	unsigned long long _webViewClass;
	UIView* _webView;

}
-(BOOL)fb_showNavBarSearchField;
-(id)initWithURL:(id)arg1 webViewClass:(unsigned long long)arg2 ;
-(id)initWithURL:(id)arg1 webViewClass:(unsigned long long)arg2 withUserSession:(id)arg3 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewWillLayoutSubviews;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
@end

