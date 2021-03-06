/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:52 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <FBSharedFramework/FBContainerViewController.h>
#import <Messenger/MNComposerKeyboardLayoutManagerDelegate.h>
#import <Messenger/MNComposerDismissable.h>
#import <Messenger/MNComposerDismissableDelegate.h>

@protocol MNComposerDismissableDelegate;
@class NSArray, MNComposerKeyboardLayoutManager, UIViewController, NSString;

@interface MNComposerContentContainerViewController : FBContainerViewController <MNComposerKeyboardLayoutManagerDelegate, MNComposerDismissable, MNComposerDismissableDelegate> {

	NSArray* _constraints;
	MNComposerKeyboardLayoutManager* _keyboardLayoutManager;
	BOOL _viewIsVisible;
	id<MNComposerDismissableDelegate> _dismissableDelegate;
	UIViewController* _contentViewController;
	UIEdgeInsets _contentInsets;

}

@property (nonatomic,readonly) UIView*<MNComposerContentContainerView> contentContainerView; 
@property (assign,nonatomic) UIEdgeInsets contentInsets;                                                  //@synthesize contentInsets=_contentInsets - In the implementation block
@property (nonatomic,readonly) UIViewController * contentViewController;                                  //@synthesize contentViewController=_contentViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNComposerDismissableDelegate> dismissableDelegate;                //@synthesize dismissableDelegate=_dismissableDelegate - In the implementation block
-(id<MNComposerDismissableDelegate>)dismissableDelegate;
-(void)setDismissableDelegate:(id<MNComposerDismissableDelegate>)arg1 ;
-(void)dismissable:(id)arg1 didTriggerDismissWithSource:(long long)arg2 ;
-(void)_updateKeyboardFrameWithChangeState:(SCD_Struct_MN121)arg1 ;
-(void)composerKeyboardLayoutManager:(id)arg1 willShowKeyboardWithChangeState:(SCD_Struct_MN121)arg2 ;
-(void)composerKeyboardLayoutManager:(id)arg1 willHideKeyboardWithChangeState:(SCD_Struct_MN121)arg2 ;
-(void)composerKeyboardLayoutManager:(id)arg1 willChangeKeyboardWithChangeState:(SCD_Struct_MN121)arg2 ;
-(void)composerKeyboardLayoutManager:(id)arg1 didChangeKeyboardWithChangeState:(SCD_Struct_MN121)arg2 ;
-(void)dealloc;
-(UIEdgeInsets)contentInsets;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_updateContentInsets;
-(UIViewController *)contentViewController;
-(void)viewDidLoad;
-(void)_removeConstraints;
-(void)_addConstraints;
-(id)initWithContentViewController:(id)arg1 ;
-(UIView*<MNComposerContentContainerView>)contentContainerView;
@end

