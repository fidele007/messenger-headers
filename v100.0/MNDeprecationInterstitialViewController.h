/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:27 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/FBClassInjectable.h>
#import <Messenger/MNDeprecationInterstitialViewDelegate.h>

@protocol MNDeprecationInterstitialViewControllerDelegate;
@class MNDeprecationInterstitialViewControllerInjector, MNDeprecationInterstitialView, MNDeprecationInterstitialViewModel, NSString;

@interface MNDeprecationInterstitialViewController : UIViewController <FBClassInjectable, MNDeprecationInterstitialViewDelegate> {

	MNDeprecationInterstitialViewControllerInjector* _injector;
	MNDeprecationInterstitialView* _deprecationInterstitialView;
	MNDeprecationInterstitialViewModel* _viewModel;
	id<MNDeprecationInterstitialViewControllerDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNDeprecationInterstitialViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(Class)injectorClass;
-(id)initWithInjector:(id)arg1 ;
-(void)deprecationInterstitialViewDidTapPrimaryActionButton:(id)arg1 ;
-(void)deprecationInterstitialViewDidTapSecondaryActionButton:(id)arg1 ;
-(void)configureWithDeprecationInterstitialViewModel:(id)arg1 ;
-(void)setDelegate:(id<MNDeprecationInterstitialViewControllerDelegate>)arg1 ;
-(id<MNDeprecationInterstitialViewControllerDelegate>)delegate;
-(BOOL)shouldAutorotate;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
@end

