/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:01 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol FBConfirmationViewDelegate;
@class UIImageView, UILabel, UIImage, NSString;

@interface FBConfirmationView : UIView {

	UIImageView* _imageView;
	UILabel* _labelView;
	double _confirmationViewWidth;
	double _confirmationViewHeight;
	BOOL _hasFlexibleHeightAndWidth;
	double _sidePadding;
	double _durationInSeconds;
	id<FBConfirmationViewDelegate> _delegate;

}

@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,copy) NSString * text; 
@property (assign,nonatomic) long long numberOfLines; 
@property (assign,nonatomic) double sidePadding;                                          //@synthesize sidePadding=_sidePadding - In the implementation block
@property (assign,nonatomic) BOOL hasFlexibleHeightAndWidth;                              //@synthesize hasFlexibleHeightAndWidth=_hasFlexibleHeightAndWidth - In the implementation block
@property (assign,nonatomic) double durationInSeconds;                                    //@synthesize durationInSeconds=_durationInSeconds - In the implementation block
@property (assign,nonatomic,__weak) id<FBConfirmationViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)checkImage;
-(void)setHasFlexibleHeightAndWidth:(BOOL)arg1 ;
-(void)setSidePadding:(double)arg1 ;
-(void)showInView:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_springAnimation;
-(double)sidePadding;
-(BOOL)hasFlexibleHeightAndWidth;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setImage:(UIImage *)arg1 ;
-(void)setDelegate:(id<FBConfirmationViewDelegate>)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBConfirmationViewDelegate>)delegate;
-(void)setNumberOfLines:(long long)arg1 ;
-(UIImage *)image;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(long long)numberOfLines;
-(void)showInView:(id)arg1 ;
-(double)durationInSeconds;
-(void)setDurationInSeconds:(double)arg1 ;
@end

