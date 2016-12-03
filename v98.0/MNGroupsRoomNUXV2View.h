/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol MNGroupsRoomNUXV2ViewDelegate;
@class UIScrollView, UIImageView, UILabel, MNGroupsRoomNUXCardView, UIView, MNButton;

@interface MNGroupsRoomNUXV2View : UIView {

	UIScrollView* _scrollView;
	UIImageView* _imageView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	MNGroupsRoomNUXCardView* _carouselLeftCardView;
	UIView* _carouselLeftGradient;
	MNGroupsRoomNUXCardView* _carouselCenterCardView;
	MNGroupsRoomNUXCardView* _carouselRightCardView;
	UIView* _carouselRightGradient;
	MNButton* _getStartedButton;
	id<MNGroupsRoomNUXV2ViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNGroupsRoomNUXV2ViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_tapGetStartedButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MNGroupsRoomNUXV2ViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<MNGroupsRoomNUXV2ViewDelegate>)delegate;
@end

