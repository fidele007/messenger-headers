/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIScrollViewDelegate.h>

@class MNPaymentsThemeCollectionView, UIScrollView, MNPaymentsThemePromotionAnimatableModel, NSString;

@interface MNPaymentsThemeScrollController : NSObject <UIScrollViewDelegate> {

	MNPaymentsThemeCollectionView* _horizontalThemeView;
	UIScrollView* _verticalScrollView;
	UIScrollView* _captureScrollView;
	unsigned long long _scrollDirection;
	CGPoint _lockPosition;
	unsigned long long _startPagingIndexWhenDragging;
	MNPaymentsThemePromotionAnimatableModel* _animatableModel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_initWithHorizontalThemeView:(id)arg1 ;
-(void)_initWithVerticalScrollView:(id)arg1 ;
-(void)_initCaptureScrollViewWithContainerView:(id)arg1 ;
-(void)_initAnimatableModel;
-(void)_stopPromotionBouncingAnimationIfPossible;
-(void)_updateUnderlyingScrollViewWithScrollView:(id)arg1 scrollDirection:(unsigned long long)arg2 ;
-(id)initWithHorizontalThemeView:(id)arg1 verticalScrollView:(id)arg2 containerView:(id)arg3 ;
-(void)updateWithContainerRect:(CGRect)arg1 ;
-(void)bounceThemeView;
-(void)scrollToPageIndex:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(id)hitTestResponder;
-(void)_updateContentSize;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end

