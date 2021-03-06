/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:55 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class FBQuickPromotionInterstitialConfiguration, FBFacepileView, FBRichTextView, UIView, FBUserSession, UILabel, UIScrollView, FBNetworkImageView, UIImageView;

@interface FBQuickPromotionCreativeView : UIView {

	BOOL _facepileIsSet;
	CGRect _textLabelFrame;
	CGRect _subtitleTextViewFrame;
	CGRect _footerTextViewFrame;
	CGRect _footerDividerViewFrame;
	CGRect _imageViewFrame;
	CGRect _socialContextViewFrame;
	CGRect _facepileViewFrame;
	CGRect _contentScrollContainerFrame;
	double _freeVerticalSpace;
	FBQuickPromotionInterstitialConfiguration* _configuration;
	FBFacepileView* _facepileView;
	FBRichTextView* _socialContextView;
	UIView* _footerDividerView;
	FBUserSession* _session;
	UILabel* _textLabel;
	FBRichTextView* _subtitleTextView;
	FBRichTextView* _footerTextView;
	UIScrollView* _contentScrollContainer;
	FBNetworkImageView* _networkImageView;
	UIImageView* _animatedImageView;
	UIImageView* _imageOverlayView;

}

@property (nonatomic,readonly) UIScrollView * contentScrollContainer;              //@synthesize contentScrollContainer=_contentScrollContainer - In the implementation block
@property (nonatomic,retain) FBNetworkImageView * networkImageView;                //@synthesize networkImageView=_networkImageView - In the implementation block
@property (nonatomic,retain) UIImageView * animatedImageView;                      //@synthesize animatedImageView=_animatedImageView - In the implementation block
@property (nonatomic,retain) UIImageView * imageOverlayView;                       //@synthesize imageOverlayView=_imageOverlayView - In the implementation block
@property (nonatomic,readonly) UILabel * textLabel;                                //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,readonly) FBRichTextView * subtitleTextView;                  //@synthesize subtitleTextView=_subtitleTextView - In the implementation block
@property (nonatomic,readonly) FBRichTextView * footerTextView;                    //@synthesize footerTextView=_footerTextView - In the implementation block
@property (nonatomic,readonly) FBRichTextView * socialContextView;                 //@synthesize socialContextView=_socialContextView - In the implementation block
-(void)setNetworkImageView:(FBNetworkImageView *)arg1 ;
-(FBRichTextView *)socialContextView;
-(BOOL)isTakeOverView;
-(FBRichTextView *)subtitleTextView;
-(FBRichTextView *)footerTextView;
-(void)setAnimatedImageWithURL:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 ;
-(void)setImageWithURL:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 ;
-(void)unsetImage;
-(void)setFacepileWithSocialContext:(id)arg1 fqlCompletionBlock:(/*^block*/id)arg2 ;
-(void)unsetFacepile;
-(void)_computeLayoutForBounds:(CGRect)arg1 ;
-(void)setImageWithURL:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 imageOverlayImage:(id)arg4 ;
-(id)_networkImageViewFromURL:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 ;
-(void)setImageOverlayView:(UIImageView *)arg1 ;
-(UIScrollView *)contentScrollContainer;
-(id)_animatedImageViewFromURL:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 ;
-(void)setAnimatedImageView:(UIImageView *)arg1 ;
-(void)_setFacepileWithText:(id)arg1 imageURLs:(id)arg2 ;
-(void)_setFacepileWithText:(id)arg1 userIDs:(id)arg2 fqlCompletionBlock:(/*^block*/id)arg3 ;
-(id)_standardLabelTruncatedString;
-(CGRect)_calculateImageViewFrameForSize:(CGSize)arg1 scale:(double)arg2 ;
-(id)initWithFrame:(CGRect)arg1 session:(id)arg2 configuration:(id)arg3 ;
-(FBNetworkImageView *)networkImageView;
-(UIImageView *)animatedImageView;
-(UIImageView *)imageOverlayView;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UILabel *)textLabel;
@end

