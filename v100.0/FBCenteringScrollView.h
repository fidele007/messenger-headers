/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIScrollView.h>

@class NSMutableSet;

@interface FBCenteringScrollView : UIScrollView {

	BOOL _centeringEnabled;
	BOOL _allowSubpixelContentOffset;
	int _numManipulatingInternalBounds;
	NSMutableSet* _gestureRecognizersThatMustFailBeforeInteraction;
	BOOL _delegateScrollViewDidScroll;

}

@property (assign,nonatomic) BOOL centeringEnabled;                        //@synthesize centeringEnabled=_centeringEnabled - In the implementation block
@property (assign,nonatomic) BOOL allowSubpixelContentOffset;              //@synthesize allowSubpixelContentOffset=_allowSubpixelContentOffset - In the implementation block
-(void)requireGestureRecognizerToFailBeforePanning:(id)arg1 ;
-(void)requireGestureRecognizerToFailBeforeZooming:(id)arg1 ;
-(BOOL)isPannedToEdge:(unsigned)arg1 ;
-(void)setCenteringEnabled:(BOOL)arg1 ;
-(BOOL)centeringEnabled;
-(void)_centerContentView;
-(BOOL)allowSubpixelContentOffset;
-(void)fitZoomScaleToContent;
-(id)gestureRecognizersRequiredToFail;
-(void)setAllowSubpixelContentOffset:(BOOL)arg1 ;
-(void)contentViewBoundsChangedAdjustZoomBounds:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)layoutSubviews;
-(id)_contentView;
-(void)setBounds:(CGRect)arg1 ;
-(void)setContentOffset:(CGPoint)arg1 ;
@end

