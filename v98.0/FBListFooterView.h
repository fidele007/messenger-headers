/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
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

