/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:32 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol MNDeprecationInterstitialViewDelegate;
@class MNHeaderView, MNButton, UIButton, MNStackedContainerView;

@interface MNDeprecationInterstitialView : UIView {

	MNHeaderView* _headerView;
	MNButton* _primaryActionButton;
	UIButton* _secondaryActionButton;
	MNStackedContainerView* _stackedContainerView;
	id<MNDeprecationInterstitialViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNDeprecationInterstitialViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_configureWithDeprecationInterstitialViewModel:(id)arg1 ;
-(void)_didTapPrimaryActionButton;
-(void)_didTapSecondaryActionButton;
-(id)initWithDeprecationInterstitialViewModel:(id)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<MNDeprecationInterstitialViewDelegate>)arg1 ;
-(void)dealloc;
-(id<MNDeprecationInterstitialViewDelegate>)delegate;
@end

