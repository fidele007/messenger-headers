/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol FBMinimizedTabBarViewDelegate;
@class UILabel, UIButton, CAShapeLayer;

@interface FBMinimizedTabBarView : UIView {

	UILabel* _titleLabel;
	UIButton* _dismissButton;
	CAShapeLayer* _progressLayer;
	int _totalNumberOfTabs;
	UIButton* _browseAllTabsButton;
	id<FBMinimizedTabBarViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBMinimizedTabBarViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_dismissButtonTapped:(id)arg1 ;
-(void)_browseAllTabsButtonTapped:(id)arg1 ;
-(void)_minimizedTabBarViewTapped:(id)arg1 ;
-(void)setTotalNumberOfTabs:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<FBMinimizedTabBarViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(id<FBMinimizedTabBarViewDelegate>)delegate;
-(void)setProgress:(double)arg1 ;
@end

