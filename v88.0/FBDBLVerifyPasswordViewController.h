/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:54 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>
#import <Messenger/FBDBLEnterPasswordViewDelegate.h>
#import <Messenger/FBKeyboardObserverDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class FBKeyboardObserver, FBDBLEnterPasswordView, FBDeviceBasedAccount, FBImageDownloader, FBGatekeeper, UITapGestureRecognizer, NSString;

@interface FBDBLVerifyPasswordViewController : UIViewController <FBDBLEnterPasswordViewDelegate, FBKeyboardObserverDelegate, UIGestureRecognizerDelegate> {

	FBKeyboardObserver* _keyboardObserver;
	FBDBLEnterPasswordView* _enterPasswordView;
	FBDeviceBasedAccount* _deviceBasedAccount;
	unsigned long long _flowType;
	FBImageDownloader* _imageDownloader;
	FBGatekeeper* _gatekeeper;
	UITapGestureRecognizer* _tapGesture;
	BOOL _displayGeneralEnterPasswordMsg;
	unsigned long long _numViewControllersToPop;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)keyboardObserver:(id)arg1 keyboardFrameWillChangeWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(void)_dismissKeyboard:(id)arg1 ;
-(id)_getTitle;
-(void)_showNetworkErrorBar;
-(void)_networkRequestTimedOut:(id)arg1 ;
-(void)_handleCheckPasswordSuccess:(id)arg1 password:(id)arg2 attempt:(long long)arg3 ;
-(void)_handleSetNonceSuccess:(id)arg1 password:(id)arg2 attempt:(long long)arg3 ;
-(void)_handleCheckPasswordError:(id)arg1 attempt:(long long)arg2 cancelled:(BOOL)arg3 ;
-(void)_showUnknownErrorBar;
-(void)FBDBLEnterPasswordViewDidEnterPassword:(id)arg1 attempt:(unsigned long long)arg2 ;
-(void)FBDBLEnterPasswordViewForgotPasswordTapped;
-(id)initWithDeviceBasedAccount:(id)arg1 flowType:(unsigned long long)arg2 imageDownloader:(id)arg3 gatekeeper:(id)arg4 displayGeneralEnterPasswordMsg:(BOOL)arg5 onSuccessPop:(unsigned long long)arg6 ;
-(void)dealloc;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
@end

