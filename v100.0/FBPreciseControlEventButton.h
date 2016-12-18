/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIButton.h>
#import <Messenger/FBLoopableView.h>

@class FBLoopingIconsController;

@interface FBPreciseControlEventButton : UIButton <FBLoopableView> {

	BOOL _dragOutsideOfBound;
	CGRect _extendedBounds;
	FBLoopingIconsController* _loopingController;
	BOOL _wantImageViewExtendToBounds;
	CGSize _extendedTouchArea;

}

@property (assign,nonatomic) CGSize extendedTouchArea;                      //@synthesize extendedTouchArea=_extendedTouchArea - In the implementation block
@property (assign,nonatomic) BOOL wantImageViewExtendToBounds;              //@synthesize wantImageViewExtendToBounds=_wantImageViewExtendToBounds - In the implementation block
-(void)setLoopingConfig:(id)arg1 ;
-(void)loopToImage:(id)arg1 highLightedImage:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setExtendedTouchArea:(CGSize)arg1 ;
-(void)setWantImageViewExtendToBounds:(BOOL)arg1 ;
-(void)_setExtendedBounds:(CGRect)arg1 extendedTouchSize:(CGSize)arg2 ;
-(void)setExtendedTouchSize:(CGSize)arg1 ;
-(CGSize)extendedTouchArea;
-(BOOL)wantImageViewExtendToBounds;
-(void)setBounds:(CGRect)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)stopAnimating;
-(void)startAnimating;
-(CGRect)imageRectForContentRect:(CGRect)arg1 ;
@end
