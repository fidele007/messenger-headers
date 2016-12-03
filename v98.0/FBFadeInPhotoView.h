/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:58 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/FBClonePhotoView.h>

@class UIView, UIActivityIndicatorView, NSURL, FBMemPhoto, UIImageView, FBUserSession, UIColor, NSString;

@interface FBFadeInPhotoView : UIView <FBClonePhotoView> {

	UIView* _imageBackgroundView;
	UIActivityIndicatorView* _activityIndicator;
	NSURL* _imageURL;
	id _imageDownload;
	BOOL _showsProgressWhileLoading;
	BOOL _highlighted;
	FBMemPhoto* _photo;
	UIImageView* _imageView;
	UIView* _imageOverlay;
	unsigned long long _displayedImageFlag;
	FBUserSession* _session;
	CGSize _desiredSize;

}

@property (nonatomic,retain) FBMemPhoto * photo;                                   //@synthesize photo=_photo - In the implementation block
@property (nonatomic,readonly) UIImageView * imageView;                            //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIView * imageOverlay;                                //@synthesize imageOverlay=_imageOverlay - In the implementation block
@property (nonatomic,copy) UIColor * imageBackgroundColor; 
@property (assign,nonatomic) CGSize desiredSize;                                   //@synthesize desiredSize=_desiredSize - In the implementation block
@property (assign,nonatomic) BOOL showsProgressWhileLoading;                       //@synthesize showsProgressWhileLoading=_showsProgressWhileLoading - In the implementation block
@property (nonatomic,readonly) unsigned long long displayedImageFlag;              //@synthesize displayedImageFlag=_displayedImageFlag - In the implementation block
@property (nonatomic,retain) FBUserSession * session;                              //@synthesize session=_session - In the implementation block
@property (assign,nonatomic) BOOL highlighted;                                     //@synthesize highlighted=_highlighted - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)displayedImageFlag;
-(void)setImageOverlay:(UIView *)arg1 ;
-(UIView *)imageOverlay;
-(void)setImageBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)imageBackgroundColor;
-(void)_configImageFlagAndURL;
-(void)_downloadImage;
-(void)_updateActivityIndicatorAppearance;
-(void)_completeImageDownloadWithResponse:(id)arg1 ;
-(BOOL)showsProgressWhileLoading;
-(id)clonePhotoViewInfoWithSourceInfo:(id)arg1 ;
-(void)setShowsProgressWhileLoading:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(UIImageView *)imageView;
-(BOOL)highlighted;
-(CGSize)desiredSize;
-(void)setDesiredSize:(CGSize)arg1 ;
-(void)setPhoto:(FBMemPhoto *)arg1 ;
-(FBUserSession *)session;
-(FBMemPhoto *)photo;
-(void)setSession:(FBUserSession *)arg1 ;
@end

