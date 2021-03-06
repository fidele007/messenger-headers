/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:04 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol FBKenBurnsSlide, FBKenBurnsAnimatorViewDataSource;
@class FBKenBurnsAnimatorConfig, UIView, NSTimer, FBKenBurnsDataSourceCoordinator;

@interface FBKenBurnsAnimatorView : UIView {

	FBKenBurnsAnimatorConfig* _config;
	UIView*<FBKenBurnsSlide> _currentSlide;
	CGRect _currentBounds;
	NSTimer* _nextSlideTimer;
	BOOL _shouldShowNextSlide;
	BOOL _animationStoppedAfterInitialization;
	FBKenBurnsDataSourceCoordinator* _dataSourceCoordinator;
	id<FBKenBurnsAnimatorViewDataSource> _dataSource;

}

@property (nonatomic,__weak,readonly) id<FBKenBurnsAnimatorViewDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
-(void)dataSourceDidUpdate;
-(id)initWithConfig:(id)arg1 dataSource:(id)arg2 ;
-(void)_next;
-(void)_updateAnimationsOnCurrentSlide;
-(void)_addScaleAnimationToSlide:(id)arg1 forBounds:(CGRect)arg2 config:(id)arg3 ;
-(void)_setCurrentSlide:(id)arg1 ;
-(CGAffineTransform)_focusedEnlargedTransformForBounds:(CGRect)arg1 focusPoint:(CGPoint)arg2 config:(id)arg3 ;
-(CGAffineTransform)_randomEnlargedTransformForBounds:(CGRect)arg1 config:(id)arg2 ;
-(void)_resumeLayer:(id)arg1 ;
-(void)_pauseLayer:(id)arg1 ;
-(void)_onTimerFire;
-(void)layoutSubviews;
-(void)dealloc;
-(void)reload;
-(id<FBKenBurnsAnimatorViewDataSource>)dataSource;
-(void)stopAnimating;
-(void)startAnimating;
-(void)_setupTimer;
@end

