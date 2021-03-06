/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:38 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBDisplayableMediaTransitioningDelegate.h>

@class FBPhotosTransitioningDelegate, FBUserSession, UIView, UIColor, NSString;

@interface FBOverlayedPhotosTransitioningDelegate : NSObject <FBDisplayableMediaTransitioningDelegate> {

	FBPhotosTransitioningDelegate* _photosTransitioningDelegate;
	FBUserSession* _userSession;
	BOOL _shouldAnimateOverlayViewOnTransitionCompletion;
	UIView* _mediaOverlayView;
	UIView* _mediaView;

}

@property (assign,nonatomic,__weak) UIView * mediaOverlayView;                                 //@synthesize mediaOverlayView=_mediaOverlayView - In the implementation block
@property (assign,nonatomic,__weak) UIView * mediaView;                                        //@synthesize mediaView=_mediaView - In the implementation block
@property (assign,nonatomic) BOOL shouldAnimateOverlayViewOnTransitionCompletion;              //@synthesize shouldAnimateOverlayViewOnTransitionCompletion=_shouldAnimateOverlayViewOnTransitionCompletion - In the implementation block
@property (nonatomic,retain) UIColor * presentingViewOverlayBackgroundColor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)transitionManager:(id)arg1 willStartTransitionWithMediaViewOrLayer:(id)arg2 containerView:(id)arg3 ;
-(void)transitionManager:(id)arg1 animateInsideAnimationBlockWithWithMediaViewOrLayer:(id)arg2 containerView:(id)arg3 ;
-(void)transitionManager:(id)arg1 interactiveDismissalDidUpdateWithTranslation:(CGPoint)arg2 dismissalProgress:(double)arg3 mediaViewOrLayer:(id)arg4 containerView:(id)arg5 ;
-(BOOL)transitionManagerShouldShowPresentedViewDuringTransition:(id)arg1 ;
-(id)transitionManager:(id)arg1 needsAnimatorWithMediaProviderInfo:(id)arg2 forDismissalTransitionType:(unsigned long long)arg3 ;
-(void)transitionManager:(id)arg1 didEndTransitionWithMediaViewOrLayer:(id)arg2 containerView:(id)arg3 ;
-(id)initWithMinPresentingOverlayAlpha:(double)arg1 session:(id)arg2 ;
-(void)setPresentingViewOverlayBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)presentingViewOverlayBackgroundColor;
-(UIView *)mediaOverlayView;
-(void)setMediaOverlayView:(UIView *)arg1 ;
-(BOOL)shouldAnimateOverlayViewOnTransitionCompletion;
-(void)setShouldAnimateOverlayViewOnTransitionCompletion:(BOOL)arg1 ;
-(id)init;
-(UIView *)mediaView;
-(void)setMediaView:(UIView *)arg1 ;
@end

