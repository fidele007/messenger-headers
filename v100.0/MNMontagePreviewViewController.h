/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:28 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBContainerViewController.h>
#import <Messenger/MNPreviewViewController.h>

@class MNMontagePreviewingContext, MNMontageNavigationCoordinator, UIView, NSString;

@interface MNMontagePreviewViewController : FBContainerViewController <MNPreviewViewController> {

	MNMontagePreviewingContext* _montagePreviewingContext;
	double _previewWidth;
	MNMontageNavigationCoordinator* _montageNavigationCoordinator;
	UIView* _montagePreviewView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithMontagePreviewingContext:(id)arg1 montageNavigationCoordinator:(id)arg2 previewWidth:(double)arg3 ;
-(void)_navigateToMontage;
-(void)_addViewControllerAsChild:(id)arg1 ;
-(void)_removeViewControllerFromParent:(id)arg1 ;
-(BOOL)isPreviewingEligible;
-(id)previewingType;
-(void)commitAction;
-(BOOL)shouldAutorotate;
-(void)viewWillLayoutSubviews;
-(CGSize)preferredContentSize;
-(void)viewDidLoad;
@end

