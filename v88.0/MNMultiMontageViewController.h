/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:48 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/MNMontageViewControllerDelegate.h>
#import <Messenger/FBModalPresentationStackViewControllerDelegate.h>

@protocol FBProvider, MNMultiMontageViewControllerDelegate;
@class NSArray, MNMontageMuteController, NSString, MNMontageViewController, MNMultiMontageInteractionController;

@interface MNMultiMontageViewController : UIViewController <MNMontageViewControllerDelegate, FBModalPresentationStackViewControllerDelegate> {

	id<FBProvider> _montageViewControllerProvider;
	NSArray* _allMontageThreadKeys;
	MNMontageMuteController* _montageMuteController;
	NSString* _entryPoint;
	MNMontageViewController* _currentMontageViewController;
	MNMultiMontageInteractionController* _interactionController;
	id<MNMultiMontageViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNMultiMontageViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithMontageViewControllerProvider:(id)arg1 montageThreadKey:(id)arg2 messageId:(id)arg3 entryPoint:(id)arg4 allMontageThreadKeys:(id)arg5 ;
-(void)montageViewControllerDidFinishPlaying:(id)arg1 canPlayMoreMontages:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)montageViewControllerCanBeginScreenEdgePanGesture:(id)arg1 direction:(BOOL)arg2 ;
-(void)montageViewControllerDidBeginScreenEdgePanGesture:(id)arg1 direction:(BOOL)arg2 ;
-(void)montageViewController:(id)arg1 didUpdateScreenEdgePanGesture:(double)arg2 ;
-(void)montageViewController:(id)arg1 didEndScreenEdgePanGesture:(BOOL)arg2 ;
-(id)_createMontageViewControllerForThreadKey:(id)arg1 messageId:(id)arg2 entryPoint:(id)arg3 ;
-(id)_nextMontageThreadKey;
-(id)_previousMontageThreadKey;
-(void)modalPresentationStackViewController:(id)arg1 didAddModalPresentationLayer:(id)arg2 forItem:(id)arg3 ;
-(void)modalPresentationStackViewController:(id)arg1 didRemoveModalPresentationLayer:(id)arg2 forItem:(id)arg3 ;
-(void)setDelegate:(id<MNMultiMontageViewControllerDelegate>)arg1 ;
-(id<MNMultiMontageViewControllerDelegate>)delegate;
-(BOOL)prefersStatusBarHidden;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
@end

