/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/FBModalDialogViewDelegate.h>
#import <Messenger/FBNuxStepViewController.h>

@protocol FBNUXViewControllerDelegate;
@class FBModalDialogViewController, FBNuxModal, UITapGestureRecognizer, NSString;

@interface FBNuxModalViewController : UIViewController <FBModalDialogViewDelegate, FBNuxStepViewController> {

	FBModalDialogViewController* _modalViewController;
	FBNuxModal* _modal;
	UITapGestureRecognizer* _tapRecognizer;
	id<FBNUXViewControllerDelegate> _delegate;
	unsigned long long _interfaceOrientationMask;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBNUXViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long interfaceOrientationMask;                  //@synthesize interfaceOrientationMask=_interfaceOrientationMask - In the implementation block
-(id)analyticsModule;
-(id)initWithStep:(id)arg1 ;
-(void)transitionToSubStep:(id)arg1 ;
-(void)setStepProgress:(unsigned long long)arg1 ofTotal:(unsigned long long)arg2 ;
-(void)modalDialogView:(id)arg1 didSelectPrimaryButton:(id)arg2 ;
-(void)modalDialogView:(id)arg1 didSelectSecondaryButton:(id)arg2 ;
-(void)modalDialogView:(id)arg1 didSelectTertiaryButton:(id)arg2 ;
-(void)modalDialogView:(id)arg1 didSelectDismissButton:(id)arg2 ;
-(void)setDelegate:(id<FBNUXViewControllerDelegate>)arg1 ;
-(id<FBNUXViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setInterfaceOrientationMask:(unsigned long long)arg1 ;
-(unsigned long long)interfaceOrientationMask;
@end

