/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:08 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIControl.h>

@class UIView, _FBCoverPhotoHeaderAvatarImageView, _FBCoverPhotoHeaderAvatarLabelView, FBCoverPhotoHeaderLoadingView, UIImage, NSString;

@interface FBCoverPhotoHeaderAvatarView : UIControl {

	UIView* _backgroundImageView;
	BOOL _adjustsImageWhenHighlighted;
	BOOL _loading;
	_FBCoverPhotoHeaderAvatarImageView* _imageView;
	_FBCoverPhotoHeaderAvatarLabelView* _labelView;
	UIView* _highlightView;
	FBCoverPhotoHeaderLoadingView* _loadingView;
	CGSize _imageSize;

}

@property (nonatomic,retain) _FBCoverPhotoHeaderAvatarImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) _FBCoverPhotoHeaderAvatarLabelView * labelView;              //@synthesize labelView=_labelView - In the implementation block
@property (nonatomic,retain) UIView * highlightView;                                      //@synthesize highlightView=_highlightView - In the implementation block
@property (nonatomic,retain) FBCoverPhotoHeaderLoadingView * loadingView;                 //@synthesize loadingView=_loadingView - In the implementation block
@property (nonatomic,retain) UIImage * image; 
@property (assign,nonatomic) BOOL adjustsImageWhenHighlighted;                            //@synthesize adjustsImageWhenHighlighted=_adjustsImageWhenHighlighted - In the implementation block
@property (nonatomic,retain) NSString * overlayText; 
@property (assign,nonatomic) BOOL loading;                                                //@synthesize loading=_loading - In the implementation block
@property (assign,nonatomic) CGSize imageSize;                                            //@synthesize imageSize=_imageSize - In the implementation block
+(BOOL)automaticallyNotifiesObserversOfImage;
+(BOOL)automaticallyNotifiesObserversOfLoading;
-(NSString *)overlayText;
-(void)setLoading:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setOverlayText:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIImage *)image;
-(void)setHighlighted:(BOOL)arg1 ;
-(CGSize)imageSize;
-(void)setAdjustsImageWhenHighlighted:(BOOL)arg1 ;
-(_FBCoverPhotoHeaderAvatarImageView *)imageView;
-(CGRect)_contentRectForBounds:(CGRect)arg1 ;
-(UIView *)highlightView;
-(void)setHighlightView:(UIView *)arg1 ;
-(BOOL)adjustsImageWhenHighlighted;
-(void)setImageView:(_FBCoverPhotoHeaderAvatarImageView *)arg1 ;
-(void)setImage:(id)arg1 animated:(BOOL)arg2 ;
-(FBCoverPhotoHeaderLoadingView *)loadingView;
-(BOOL)loading;
-(void)setLoading:(BOOL)arg1 ;
-(_FBCoverPhotoHeaderAvatarLabelView *)labelView;
-(void)setImageSize:(CGSize)arg1 ;
-(void)setLabelView:(_FBCoverPhotoHeaderAvatarLabelView *)arg1 ;
-(void)setLoadingView:(FBCoverPhotoHeaderLoadingView *)arg1 ;
@end

