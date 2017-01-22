/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:25 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UICollectionView, UIPageControl, FBMagicStoriesSwipeIndicatorView, UIView;

@interface FBMagicStoriesPreviewView : UIView {

	CGRect _oldBounds;
	double _contentAspectRatio;
	UICollectionView* _collectionView;
	UIPageControl* _pageControl;
	FBMagicStoriesSwipeIndicatorView* _swipeIndicator;
	UIView* _disabledOverlay;

}

@property (assign,nonatomic) double contentAspectRatio;                                        //@synthesize contentAspectRatio=_contentAspectRatio - In the implementation block
@property (nonatomic,readonly) UICollectionView * collectionView;                              //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,readonly) UIPageControl * pageControl;                                    //@synthesize pageControl=_pageControl - In the implementation block
@property (nonatomic,readonly) FBMagicStoriesSwipeIndicatorView * swipeIndicator;              //@synthesize swipeIndicator=_swipeIndicator - In the implementation block
@property (nonatomic,readonly) UIView * disabledOverlay;                                       //@synthesize disabledOverlay=_disabledOverlay - In the implementation block
-(void)setContentAspectRatio:(double)arg1 ;
-(FBMagicStoriesSwipeIndicatorView *)swipeIndicator;
-(UIView *)disabledOverlay;
-(void)_scrollToIndexIfValid:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UICollectionView *)collectionView;
-(CGRect)accessibilityFrame;
-(id)accessibilityValue;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(UIPageControl *)pageControl;
-(double)contentAspectRatio;
@end
