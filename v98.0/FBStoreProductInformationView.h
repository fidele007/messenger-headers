/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:03 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol FBStoreProductInformationDelegate;
@class FBNetworkImageView, FBMemImage, FBRichTextView, UIButton, FBUserSession, UIToolbar, NSAttributedString;

@interface FBStoreProductInformationView : UIView {

	FBNetworkImageView* _coverImageView;
	FBMemImage* _coverImage;
	FBRichTextView* _titleView;
	FBRichTextView* _subtitleView;
	FBRichTextView* _descriptionTextView;
	UIButton* _cancelButton;
	FBUserSession* _session;
	UIToolbar* _backgroundView;
	BOOL _isRCInfo;
	id<FBStoreProductInformationDelegate> _delegate;

}

@property (nonatomic,readonly) FBMemImage * coverImage; 
@property (nonatomic,copy,readonly) NSAttributedString * title; 
@property (nonatomic,copy,readonly) NSAttributedString * subtitle; 
@property (nonatomic,copy,readonly) NSAttributedString * descriptionText; 
@property (assign,nonatomic,__weak) id<FBStoreProductInformationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithFrame:(CGRect)arg1 session:(id)arg2 coverImage:(id)arg3 title:(id)arg4 subtitle:(id)arg5 description:(id)arg6 ;
-(void)_initBackgroundView:(id)arg1 ;
-(void)_initTitleViewInView:(id)arg1 withString:(id)arg2 ;
-(void)_initSubtitleViewInView:(id)arg1 withString:(id)arg2 ;
-(void)_initDescriptionTextViewInView:(id)arg1 withString:(id)arg2 ;
-(void)_initCoverImageViewInView:(id)arg1 withImage:(id)arg2 ;
-(void)_initCancelButtonInView:(id)arg1 ;
-(double)_heightForImage:(id)arg1 constrainedToWidth:(double)arg2 ;
-(CGSize)_textSizeInSize:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 session:(id)arg2 description:(id)arg3 ;
-(void)setDelegate:(id<FBStoreProductInformationDelegate>)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBStoreProductInformationDelegate>)delegate;
-(NSAttributedString *)title;
-(id)accessibilityLabel;
-(NSAttributedString *)subtitle;
-(BOOL)isAccessibilityElement;
-(BOOL)accessibilityPerformEscape;
-(NSAttributedString *)descriptionText;
-(void)cancelButtonTapped:(id)arg1 ;
-(FBMemImage *)coverImage;
@end

