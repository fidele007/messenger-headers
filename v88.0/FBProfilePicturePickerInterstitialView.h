/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol FBProfilePicturePickerInterstitialViewDelegate;
@class UIButton, UIView, UIImageView, UILabel;

@interface FBProfilePicturePickerInterstitialView : UIView {

	UIButton* _takePhotosButton;
	UIButton* _choosePhotosButton;
	UIView* _upsellImageView;
	UIImageView* _buttonPanelView;
	UILabel* _titleLabel;
	id<FBProfilePicturePickerInterstitialViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBProfilePicturePickerInterstitialViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithFrame:(CGRect)arg1 configuration:(id)arg2 session:(id)arg3 ;
-(void)didTouchTakePhotosButton:(id)arg1 ;
-(void)didTouchChoosePhotosButton:(id)arg1 ;
-(void)setDelegate:(id<FBProfilePicturePickerInterstitialViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<FBProfilePicturePickerInterstitialViewDelegate>)delegate;
@end
