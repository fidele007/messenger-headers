/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:03 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBDisplayableMediaTransitioningDelegate.h>

@class FBPhotosTransitioningDelegate, UIView, UIColor, NSString;

@interface FBOverlayedPhotosTransitioningDelegate : NSObject <FBDisplayableMediaTransitioningDelegate> {

	FBPhotosTransitioningDelegate* _photosTransitioningDelegate;
	BOOL _shouldAnimateOverlayViewOnTransitionCompletion;
	UIView* _overlayView;
	UIView* _mediaView;

}

@property (assign,nonatomic,__weak) UIView * overlayView;                                      //@synthesize overlayView=_overlayView - In the implementation block
@property (assign,nonatomic,__weak) UIView * mediaView;                                        //@synthesize mediaView=_mediaView - In the implementation block
@property (assign,nonatomic) BOOL shouldAnimateOverlayViewOnTransitionCompletion;              //@synthesize shouldAnimateOverlayViewOnTransitionCompletion=_shouldAnimateOverlayViewOnTransitionCompletion - In the implementation block
@property (nonatomic,retain) UIColor * overlayBackgroundColor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)transitionManager:(id)arg1 willStartTransitionWithMediaViewOrLayer:(id)arg2 containerView:(id)arg3 ;
-(void)transitionManager:(id)arg1 animateInsideAnimationBlockWithWithMediaViewOrLayer:(id)arg2 containerView:(id)arg3 ;
-(void)transitionManager:(id)arg1 interactiveDismissalDidUpdateWithProgress:(double)arg2 mediaViewOrLayer:(id)arg3 containerView:(id)arg4 ;
-(BOOL)transitionManagerShouldShowPresentedViewDuringTransition:(id)arg1 ;
-(id)transitionManager:(id)arg1 needsAnimatorWithMediaProviderInfo:(id)arg2 forDismissalTransitionType:(unsigned long long)arg3 ;
-(void)transitionManager:(id)arg1 didEndTransitionWithMediaViewOrLayer:(id)arg2 containerView:(id)arg3 ;
-(void)setOverlayBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)overlayBackgroundColor;
-(void)setMediaView:(UIView *)arg1 ;
-(BOOL)shouldAnimateOverlayViewOnTransitionCompletion;
-(void)setShouldAnimateOverlayViewOnTransitionCompletion:(BOOL)arg1 ;
-(id)init;
-(void)setOverlayView:(UIView *)arg1 ;
-(UIView *)overlayView;
-(UIView *)mediaView;
@end

