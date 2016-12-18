/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UILabel, UIActivityIndicatorView, UIView, FBListFooterViewModel;

@interface FBListFooterView : UIView {

	UIImageView* _logoView;
	UILabel* _messageLabel;
	UIActivityIndicatorView* _activityIndicatorView;
	UIView* _accessoryContainerView;
	FBListFooterViewModel* _viewModel;

}

@property (nonatomic,retain) FBListFooterViewModel * viewModel;              //@synthesize viewModel=_viewModel - In the implementation block
-(void)_configureViewsIfNeeded;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(FBListFooterViewModel *)viewModel;
-(void)setViewModel:(FBListFooterViewModel *)arg1 ;
@end
