/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIImageView.h>

@class RCTBridge, RCTImageSource, UIImage, NSArray;

@interface RCTImageView : UIImageView {

	RCTBridge* _bridge;
	RCTImageSource* _imageSource;
	RCTImageSource* _pendingImageSource;
	CGSize _targetSize;
	/*^block*/id _reloadImageCancellationBlock;
	UIImage* _defaultImage;
	long long _renderingMode;
	NSArray* _imageSources;
	double _blurRadius;
	long long _resizeMode;
	/*^block*/id _onLoadStart;
	/*^block*/id _onProgress;
	/*^block*/id _onError;
	/*^block*/id _onPartialLoad;
	/*^block*/id _onLoad;
	/*^block*/id _onLoadEnd;
	UIEdgeInsets _capInsets;

}

@property (nonatomic,copy) id onLoadStart;                         //@synthesize onLoadStart=_onLoadStart - In the implementation block
@property (nonatomic,copy) id onProgress;                          //@synthesize onProgress=_onProgress - In the implementation block
@property (nonatomic,copy) id onError;                             //@synthesize onError=_onError - In the implementation block
@property (nonatomic,copy) id onPartialLoad;                       //@synthesize onPartialLoad=_onPartialLoad - In the implementation block
@property (nonatomic,copy) id onLoad;                              //@synthesize onLoad=_onLoad - In the implementation block
@property (nonatomic,copy) id onLoadEnd;                           //@synthesize onLoadEnd=_onLoadEnd - In the implementation block
@property (assign,nonatomic) UIEdgeInsets capInsets;               //@synthesize capInsets=_capInsets - In the implementation block
@property (nonatomic,retain) UIImage * defaultImage;               //@synthesize defaultImage=_defaultImage - In the implementation block
@property (assign,nonatomic) long long renderingMode;              //@synthesize renderingMode=_renderingMode - In the implementation block
@property (nonatomic,copy) NSArray * imageSources;                 //@synthesize imageSources=_imageSources - In the implementation block
@property (assign,nonatomic) double blurRadius;                    //@synthesize blurRadius=_blurRadius - In the implementation block
@property (assign,nonatomic) long long resizeMode;                 //@synthesize resizeMode=_resizeMode - In the implementation block
-(NSArray *)imageSources;
-(id)onProgress;
-(void)clearImageIfDetached;
-(void)updateWithImage:(id)arg1 ;
-(BOOL)shouldReloadImageSourceAfterResize;
-(void)cancelImageLoad;
-(void)clearImage;
-(BOOL)hasMultipleSources;
-(id)imageSourceForSize:(CGSize)arg1 ;
-(void)imageLoaderLoadedImage:(id)arg1 error:(id)arg2 forImageSource:(id)arg3 partial:(BOOL)arg4 ;
-(void)reactSetFrame:(CGRect)arg1 ;
-(BOOL)shouldChangeImageSource;
-(id)initWithBridge:(id)arg1 ;
-(void)setCapInsets:(UIEdgeInsets)arg1 ;
-(void)setImageSources:(NSArray *)arg1 ;
-(id)onLoadStart;
-(void)setOnLoadStart:(id)arg1 ;
-(void)setOnProgress:(id)arg1 ;
-(id)onPartialLoad;
-(void)setOnPartialLoad:(id)arg1 ;
-(void)setOnLoad:(id)arg1 ;
-(id)onLoadEnd;
-(void)setOnLoadEnd:(id)arg1 ;
-(void)setImage:(id)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(id)init;
-(void)setBlurRadius:(double)arg1 ;
-(UIEdgeInsets)capInsets;
-(long long)renderingMode;
-(double)blurRadius;
-(void)setResizeMode:(long long)arg1 ;
-(long long)resizeMode;
-(id)onLoad;
-(UIImage *)defaultImage;
-(void)setDefaultImage:(UIImage *)arg1 ;
-(void)setRenderingMode:(long long)arg1 ;
-(id)onError;
-(void)setOnError:(id)arg1 ;
-(void)reloadImage;
@end

