/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:17 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/MNPostFacebookDeactivationNuxViewDelegate.h>

@protocol MNPostFacebookDeactivationNuxViewControllerDelegate;
@class MNPostFacebookDeactivationNuxView, NSString;

@interface MNPostFacebookDeactivationNuxViewController : UIViewController <MNPostFacebookDeactivationNuxViewDelegate> {

	MNPostFacebookDeactivationNuxView* _postFacebookDeactivationNuxView;
	id<MNPostFacebookDeactivationNuxViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNPostFacebookDeactivationNuxViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)postFacebookDeactivationNuxViewContinueButtonPressed:(id)arg1 ;
-(void)postFacebookDeactivationNuxViewLearnMoreButtonPressed:(id)arg1 ;
-(void)setDelegate:(id<MNPostFacebookDeactivationNuxViewControllerDelegate>)arg1 ;
-(id<MNPostFacebookDeactivationNuxViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)loadView;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(BOOL)arg1 ;
@end
