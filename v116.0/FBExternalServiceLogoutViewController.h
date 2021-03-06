/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:53 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol FBServiceHelperProtocol;
@interface FBExternalServiceLogoutViewController : UIViewController {

	id<FBServiceHelperProtocol> _serviceHelper;

}
-(BOOL)fb_showNavBarSearchField;
-(BOOL)fb_hidesTabBar;
-(void)onLogoutSucceeded:(id)arg1 ;
-(void)_unlinkAccount:(id)arg1 ;
-(id)analyticsModule;
-(void)dealloc;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)_buttonTapped:(id)arg1 ;
-(id)initWithServiceHelper:(id)arg1 ;
@end

