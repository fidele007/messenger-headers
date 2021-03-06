/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:39 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class FBImageDownloader, CAGradientLayer, UIProgressView, UIImageView, NSString;

@interface FBQuicksilverLoadingView : UIView <CAAnimationDelegate> {

	FBImageDownloader* _imageDownloader;
	CAGradientLayer* _gradientLayer;
	UIProgressView* _progressBar;
	UIImageView* _splashImageView;
	id _downloadingHandler;
	NSString* _splashImageURLString;
	double _loadingProgress;

}

@property (nonatomic,copy) NSString * splashImageURLString;              //@synthesize splashImageURLString=_splashImageURLString - In the implementation block
@property (assign,nonatomic) double loadingProgress;                     //@synthesize loadingProgress=_loadingProgress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_animateGradient;
-(void)_setSplashImage:(id)arg1 ;
-(NSString *)splashImageURLString;
-(void)setSplashImageURLString:(NSString *)arg1 ;
-(void)showProgressBar;
-(void)hideProgressBar;
-(id)initWithImageDownloader:(id)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(double)loadingProgress;
-(void)setLoadingProgress:(double)arg1 ;
@end

