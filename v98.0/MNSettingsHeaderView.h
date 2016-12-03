/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:55 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITextFieldDelegate.h>
#import <Messenger/MNMessengerProfilePhotoMissingErrorViewDelegate.h>

@protocol MNSettingsHeaderViewDelegate;
@class UILabel, MNMessengerProfilePhotoMissingErrorView, MNMessengerCodeImageView, NSString;

@interface MNSettingsHeaderView : UIView <UITextFieldDelegate, MNMessengerProfilePhotoMissingErrorViewDelegate> {

	UILabel* _displayNameLabel;
	MNMessengerProfilePhotoMissingErrorView* _messengerProfilePhotoMissingErrorView;
	BOOL _showProfilePhotoMissingErrorView;
	MNMessengerCodeImageView* _imageView;
	NSString* _displayNameText;
	id<MNSettingsHeaderViewDelegate> _delegate;

}

@property (nonatomic,readonly) MNMessengerCodeImageView * imageView;                        //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,copy) NSString * displayNameText;                                      //@synthesize displayNameText=_displayNameText - In the implementation block
@property (assign,nonatomic) BOOL showProfilePhotoMissingErrorView;                         //@synthesize showProfilePhotoMissingErrorView=_showProfilePhotoMissingErrorView - In the implementation block
@property (assign,nonatomic,__weak) id<MNSettingsHeaderViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didTapProfilePhotoMissingErrorView:(id)arg1 ;
-(void)_didTapImageView;
-(void)_layoutSubviewsWithBounds:(CGRect)arg1 ;
-(void)setDisplayNameText:(NSString *)arg1 ;
-(void)setShowProfilePhotoMissingErrorView:(BOOL)arg1 ;
-(NSString *)displayNameText;
-(BOOL)showProfilePhotoMissingErrorView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MNSettingsHeaderViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MNSettingsHeaderViewDelegate>)delegate;
-(MNMessengerCodeImageView *)imageView;
@end

