/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:58 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/FBPaymentsExpandableViewControllerExpandingDelegate.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>

@class FBPaymentsExpandableContainerView, UIViewController, NSString;

@interface FBPaymentsExpandableContainerViewController : UIViewController <FBPaymentsExpandableViewControllerExpandingDelegate, UIViewControllerTransitioningDelegate, UINavigationControllerDelegate> {

	FBPaymentsExpandableContainerView* _expandableContainerView;
	UIViewController* _contentViewController;
	BOOL _isFirstViewWillLayoutSubviews;
	/*^block*/id _dismissBlock;

}

@property (nonatomic,copy) id dismissBlock;                         //@synthesize dismissBlock=_dismissBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDismissBlock:(id)arg1 ;
-(id)dismissBlock;
-(void)expandableItemDidUpdatePreferredHeight:(id)arg1 ;
-(void)_endApeparanceTransitionForContentViewController;
-(void)_adjustContentViewHeightWithExpandableItem:(id)arg1 ;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(id)initWithContentViewController:(id)arg1 ;
@end

