/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBContainerViewController.h>
#import <Messenger/FBPresentableViewController.h>
#import <Messenger/FBStackViewControllerProtocol.h>
#import <Messenger/_FBModalPresentationStackViewControllerLayerDelegate.h>
#import <Messenger/FBModalPresentationStackManager.h>
#import <Messenger/FBModalPresentationSource.h>

@protocol FBModalPresentationStackViewControllerDelegate;
@class NSMutableArray, _FBModalPresentationStackViewControllerLayer, NSString, NSArray, UIViewController;

@interface FBModalPresentationStackViewController : FBContainerViewController <FBPresentableViewController, FBStackViewControllerProtocol, _FBModalPresentationStackViewControllerLayerDelegate, FBModalPresentationStackManager, FBModalPresentationSource> {

	NSMutableArray* _modalPresentationStack;
	_FBModalPresentationStackViewControllerLayer* _presentingLayer;
	id<FBModalPresentationStackViewControllerDelegate> _delegate;
	long long _occluderCount;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long preferredPresentationMethod; 
@property (nonatomic,readonly) unsigned long long preferredPresentationOptions; 
@property (nonatomic,copy,readonly) NSArray * modalPresentationItems; 
@property (nonatomic,readonly) id<FBModallyPresentableItem> topModalItem; 
@property (nonatomic,readonly) id<FBModallyPresentableItem> bottomModalItem; 
@property (nonatomic,readonly) UIViewController * topModalViewController; 
@property (nonatomic,readonly) UIViewController * bottomModalViewController; 
@property (assign,nonatomic) long long occluderCount;                                                         //@synthesize occluderCount=_occluderCount - In the implementation block
@property (assign,nonatomic,__weak) id<FBModalPresentationStackViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)analyticsModule;
-(id)analyticsExtras;
-(id)analyticsPresentedViewController;
-(id)modalPresentationStackManager;
-(id)addModalPresentationLayerForItem:(id)arg1 ;
-(void)removeModalPresentationLayerForItem:(id)arg1 ;
-(UIViewController *)topModalViewController;
-(UIViewController *)bottomModalViewController;
-(BOOL)occludesScreen;
-(NSArray *)modalPresentationItems;
-(unsigned long long)occlusionInfo;
-(void)addModalItem:(id)arg1 ;
-(void)removeModalItem:(id)arg1 ;
-(id<FBModallyPresentableItem>)topModalItem;
-(id<FBModallyPresentableItem>)bottomModalItem;
-(id)_presentingModalItem;
-(id)_previousLayerForLayer:(id)arg1 ;
-(long long)occluderCount;
-(void)setOccluderCount:(long long)arg1 ;
-(void)presentationLayerDidChangePresentationState:(id)arg1 ;
-(void)presentationLayerDidChangeBackgroundTransform:(id)arg1 ;
-(void)setDelegate:(id<FBModalPresentationStackViewControllerDelegate>)arg1 ;
-(id)init;
-(id<FBModalPresentationStackViewControllerDelegate>)delegate;
-(long long)preferredStatusBarStyle;
-(BOOL)prefersStatusBarHidden;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(long long)preferredInterfaceOrientationForPresentation;
-(id)transitioningDelegate;
-(id)childViewControllerForStatusBarStyle;
-(id)childViewControllerForStatusBarHidden;
-(id)_topViewController;
@end

