/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBDirectionalPagerDelegate;
#import <Messenger/Messenger-Structs.h>
@class NSArray, UIView, FBDirectionalPanGestureRecognizer;

@interface FBDirectionalPager : NSObject {

	NSArray* _pages;
	UIView* _pagingView;
	FBDirectionalPanGestureRecognizer* _panRecognizer;
	double _currentPosition;
	double _positionAtPanBegin;
	unsigned long long _panAxis;
	id<FBDirectionalPagerDelegate> _delegate;

}

@property (assign,nonatomic) unsigned long long panAxis;                                  //@synthesize panAxis=_panAxis - In the implementation block
@property (assign,nonatomic,__weak) id<FBDirectionalPagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) id currentPage; 
-(void)setPanAxis:(unsigned long long)arg1 ;
-(void)_didPan:(id)arg1 ;
-(id)_pageAtIndex:(unsigned long long)arg1 ;
-(long long)_pageIndexForPosition:(double)arg1 ;
-(long long)_indexForPosition:(double)arg1 ;
-(void)_setCurrentPosition:(double)arg1 ;
-(void)_didFinishAnimating;
-(unsigned long long)panAxis;
-(double)_positionDeltaForPanDelta:(CGPoint)arg1 ;
-(double)_gestureDirectionForPositionDelta:(double)arg1 positionVelocity:(double)arg2 ;
-(void)_animateToPosition:(double)arg1 withVelocity:(double)arg2 ;
-(void)installGesturesInView:(id)arg1 ;
-(void)removeGestures;
-(void)setDelegate:(id<FBDirectionalPagerDelegate>)arg1 ;
-(id<FBDirectionalPagerDelegate>)delegate;
-(id)currentPage;
-(void)_stopAnimating;
-(long long)_currentPageIndex;
-(id)initWithPages:(id)arg1 ;
@end

