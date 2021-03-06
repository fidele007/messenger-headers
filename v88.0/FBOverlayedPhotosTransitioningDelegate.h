/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:54 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBDisplayableMediaTransitioningDelegate.h>

@class FBPhotosTransitioningDelegate, UIView, NSString;

@interface FBOverlayedPhotosTransitioningDelegate : NSObject <FBDisplayableMediaTransitioningDelegate> {

	FBPhotosTransitioningDelegate* _photosTransitioningDelegate;
	UIView* _overlayView;
	UIView* _mediaView;

}

@property (assign,nonatomic,__weak) UIView * overlayView;              //@synthesize overlayView=_overlayView - In the implementation block
@property (assign,nonatomic,__weak) UIView * mediaView;                //@synthesize mediaView=_mediaView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setMediaView:(UIView *)arg1 ;
-(void)transitionManager:(id)arg1 animateInsideAnimationBlockWithContainerView:(id)arg2 ;
-(void)transitionManager:(id)arg1 didEndTransitionWithContainerView:(id)arg2 ;
-(void)transitionManager:(id)arg1 interactiveDismissalDidUpdateWithProgress:(double)arg2 containerView:(id)arg3 ;
-(void)transitionManager:(id)arg1 willStartTransitionWithContainerView:(id)arg2 ;
-(BOOL)transitionManagerShouldShowPresentedViewDuringTransition:(id)arg1 ;
-(id)init;
-(void)setOverlayView:(UIView *)arg1 ;
-(UIView *)overlayView;
-(UIView *)mediaView;
@end

