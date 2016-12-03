/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:13 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBSemiTransparentOverlayPresentingToken.h>

@class FBSemiTransparentOverlayPresentingView, FBSemiTransparentOverlayView;

@interface FBSemiTransparentOverlayConcretePresentingToken : NSObject <FBSemiTransparentOverlayPresentingToken> {

	FBSemiTransparentOverlayPresentingView* _presentingView;
	FBSemiTransparentOverlayView* _overlayView;

}

@property (assign,nonatomic,__weak) FBSemiTransparentOverlayPresentingView * presentingView;              //@synthesize presentingView=_presentingView - In the implementation block
@property (assign,nonatomic,__weak) FBSemiTransparentOverlayView * overlayView;                           //@synthesize overlayView=_overlayView - In the implementation block
-(void)setPresentingView:(FBSemiTransparentOverlayPresentingView *)arg1 ;
-(FBSemiTransparentOverlayPresentingView *)presentingView;
-(void)hideOverlayAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithPresentingView:(id)arg1 overlayView:(id)arg2 ;
-(void)setOverlayView:(FBSemiTransparentOverlayView *)arg1 ;
-(FBSemiTransparentOverlayView *)overlayView;
@end

