/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIScrollView.h>

@protocol FBCarouselScrollViewGestureDelegate;
@class UIPanGestureRecognizer;

@interface FBCarouselScrollView : UIScrollView {

	UIPanGestureRecognizer* _panDirectionMonitor;
	struct {
		unsigned didBeginPanningInDirection : 1;
		unsigned shouldBeginHorizontalScrollGesture : 1;
	}  _gestureDelegateFlags;
	id<FBCarouselScrollViewGestureDelegate> _gestureDelegate;

}

@property (assign,nonatomic,__weak) id<FBCarouselScrollViewGestureDelegate> gestureDelegate;              //@synthesize gestureDelegate=_gestureDelegate - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)touchesShouldCancelInContentView:(id)arg1 ;
-(void)setGestureDelegate:(id<FBCarouselScrollViewGestureDelegate>)arg1 ;
-(id<FBCarouselScrollViewGestureDelegate>)gestureDelegate;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end
