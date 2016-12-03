/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:16 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIScrollView.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol UIScrollViewDelegate;
@class NSObject, NSString;

@interface FBExtensibleUIScrollView : UIScrollView <UIScrollViewDelegate> {

	NSObject*<UIScrollViewDelegate> _originalDelegate;
	struct {
		unsigned willBeginDragging : 1;
		unsigned willEndDragging : 1;
		unsigned didEndDragging : 1;
		unsigned viewForZooming : 1;
		unsigned willBeginZooming : 1;
		unsigned didZoom : 1;
		unsigned didEndZooming : 1;
		unsigned willBeginDecelerating : 1;
		unsigned didEndDecelerating : 1;
		unsigned didScroll : 1;
		unsigned shouldScrollToTop : 1;
		unsigned didScrollToTop : 1;
		unsigned didEndScrollingAnimation : 1;
	}  _delegateFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didScrollToTop;
-(void)willBeginDragging;
-(void)willEndDraggingWithVelocity:(CGPoint)arg1 targetContentOffset:(inout CGPoint*)arg2 ;
-(void)didEndDraggingWillDecelerate:(BOOL)arg1 ;
-(id)viewForZooming;
-(void)willBeginZoomingWithView:(id)arg1 ;
-(void)didEndZoomingWithView:(id)arg1 atScale:(double)arg2 ;
-(void)willBeginDecelerating;
-(void)didEndDecelerating;
-(BOOL)shouldScrollToTop;
-(void)didEndScrollingAnimation;
-(BOOL)_scrollViewDelegateProtocolContainsSelector:(SEL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidZoom:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewWillBeginDecelerating:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(id)viewForZoomingInScrollView:(id)arg1 ;
-(void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2 ;
-(void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3 ;
-(BOOL)scrollViewShouldScrollToTop:(id)arg1 ;
-(void)scrollViewDidScrollToTop:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(void)didZoom;
-(void)didScroll;
@end

