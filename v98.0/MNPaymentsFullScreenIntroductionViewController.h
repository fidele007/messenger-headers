/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/MNPaymentsFullScreenIntroductionViewDelegate.h>
#import <Messenger/FBModalWebFlowDelegate.h>

@protocol MNPaymentsFullScreenIntroductionViewControllerDelegate;
@class MNPaymentsFullScreenIntroductionView, MNPaymentsFullScreenIntroductionViewModel, FBUserSession, NSString;

@interface MNPaymentsFullScreenIntroductionViewController : UIViewController <MNPaymentsFullScreenIntroductionViewDelegate, FBModalWebFlowDelegate> {

	MNPaymentsFullScreenIntroductionView* _introductionView;
	MNPaymentsFullScreenIntroductionViewModel* _viewModel;
	FBUserSession* _session;
	BOOL _shouldShowNavigationBarWhenDisappearing;
	BOOL _shouldAnimateWhenAppearing;
	id<MNPaymentsFullScreenIntroductionViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNPaymentsFullScreenIntroductionViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)modalWebFlowControllerDidCancel:(id)arg1 ;
-(void)_onCancel;
-(id)initWithSession:(id)arg1 introductionViewModel:(id)arg2 ;
-(void)didTapNext;
-(void)didTapCancel;
-(void)didTapURL:(id)arg1 ;
-(void)_onNext;
-(void)setDelegate:(id<MNPaymentsFullScreenIntroductionViewControllerDelegate>)arg1 ;
-(id<MNPaymentsFullScreenIntroductionViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
@end

