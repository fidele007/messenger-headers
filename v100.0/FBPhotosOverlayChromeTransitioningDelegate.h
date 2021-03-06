/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBDisplayableMediaTransitioningDelegate.h>

@class UIView, UIColor, FBUserSession, NSString;

@interface FBPhotosOverlayChromeTransitioningDelegate : NSObject <FBDisplayableMediaTransitioningDelegate> {

	UIView* _overlay;
	UIColor* _overlayBackgroundColor;
	FBUserSession* _userSession;
	UIView* _transitioningMediaOverlayView;
	UIView* _mediaControllerOverlayView;
	UIView* _mediaView;

}

@property (assign,nonatomic,__weak) UIView * transitioningMediaOverlayView;              //@synthesize transitioningMediaOverlayView=_transitioningMediaOverlayView - In the implementation block
@property (assign,nonatomic,__weak) UIView * mediaControllerOverlayView;                 //@synthesize mediaControllerOverlayView=_mediaControllerOverlayView - In the implementation block
@property (assign,nonatomic,__weak) UIView * mediaView;                                  //@synthesize mediaView=_mediaView - In the implementation block
@property (nonatomic,retain) UIColor * overlayBackgroundColor; 
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
-(void)setOverlayBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)overlayBackgroundColor;
-(void)setMediaView:(UIView *)arg1 ;
-(UIView *)transitioningMediaOverlayView;
-(void)setTransitioningMediaOverlayView:(UIView *)arg1 ;
-(UIView *)mediaControllerOverlayView;
-(void)setMediaControllerOverlayView:(UIView *)arg1 ;
-(UIView *)mediaView;
-(id)initWithSession:(id)arg1 ;
@end

