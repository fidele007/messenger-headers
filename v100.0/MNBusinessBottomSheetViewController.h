/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/MNBusinessBottomSheetViewDelegate.h>
#import <Messenger/MNActionSheetPresenting.h>

@protocol FBCancelable, MNModalPresentation, MNActionSheetPresentationDelegate;
@class FBUserSession, UIViewController, NSString;

@interface MNBusinessBottomSheetViewController : UIViewController <MNBusinessBottomSheetViewDelegate, MNActionSheetPresenting> {

	id<FBCancelable> _dismissActionSheetCancelableToken;
	FBUserSession* _session;
	id<MNModalPresentation> _modalPresenter;
	UIViewController* _viewControllerToPresent;
	NSString* _closeButtonTitle;
	id _viewControllerClosedBlock;
	double _displayHeightRatio;
	id<MNActionSheetPresentationDelegate> _presentationDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNActionSheetPresentationDelegate> presentationDelegate;              //@synthesize presentationDelegate=_presentationDelegate - In the implementation block
+(id)presentViewController:(id)arg1 session:(id)arg2 modalPresenter:(id)arg3 displayHeightRatio:(double)arg4 title:(id)arg5 closeButtonTitle:(id)arg6 viewControllerClosedBlock:(/*^block*/id)arg7 ;
-(void)actionSheetDidResize;
-(void)actionSheetWillDismiss;
-(void)actionSheetWillPresent;
-(BOOL)actionSheetAllowsFlexibleContentViewHeight;
-(void)dismissActionSheetWithDelay:(double)arg1 animated:(BOOL)arg2 ;
-(void)businessBottomSheetViewDidTapCloseButton:(id)arg1 ;
-(id)initWithSession:(id)arg1 modalPresenter:(id)arg2 viewControllerToPresent:(id)arg3 displayHeightRatio:(double)arg4 title:(id)arg5 closeButtonTitle:(id)arg6 viewControllerClosedBlock:(/*^block*/id)arg7 ;
-(void)setTitle:(id)arg1 ;
-(void)loadView;
-(void)setPresentationDelegate:(id<MNActionSheetPresentationDelegate>)arg1 ;
-(id<MNActionSheetPresentationDelegate>)presentationDelegate;
@end

